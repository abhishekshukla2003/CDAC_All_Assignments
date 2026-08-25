# import required modules
from flask import Flask, request
import mysql.connector

# create flask app
app = Flask(__name__)

# ---------------- HOME ----------------
@app.route('/')
def home():
    return "Employee Management Server Running"


# ---------- DATABASE CONNECTION ----------
def get_db_connection():
    return mysql.connector.connect(
        host='localhost',
        port=3306,
        user='root',
        password='root',
        database='iotdb',
        use_pure=True
    )


# ---------------- GET ALL EMPLOYEES ----------------
@app.route('/employee', methods=['GET'])
def get_employees():
    conn = get_db_connection()
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM employee;")
    data = cursor.fetchall()
    cursor.close()
    conn.close()
    return str(data)


# ---------------- ADD EMPLOYEE ----------------
@app.route('/employee', methods=['POST'])
def add_employee():
    empid = request.form.get('empid')
    name = request.form.get('name')
    department = request.form.get('department')
    email = request.form.get('email')
    salary = request.form.get('salary')
    doj = request.form.get('doj')

    conn = get_db_connection()
    cursor = conn.cursor()

    query = """
    INSERT INTO employee
    (empid, name, department, email, salary, doj)
    VALUES (%s, %s, %s, %s, %s, %s);
    """
    cursor.execute(query, (empid, name, department, email, salary, doj))

    conn.commit()
    cursor.close()
    conn.close()

    return "Employee added successfully"


# ---------------- UPDATE EMPLOYEE ----------------
@app.route('/employee', methods=['PUT'])
def update_employee():
    empid = request.form.get('empid')
    salary = request.form.get('salary')

    conn = get_db_connection()
    cursor = conn.cursor()

    query = "UPDATE employee SET salary = %s WHERE empid = %s;"
    cursor.execute(query, (salary, empid))

    conn.commit()
    cursor.close()
    conn.close()

    return "Employee salary updated successfully"


# ---------------- DELETE EMPLOYEE ----------------
@app.route('/employee', methods=['DELETE'])
def delete_employee():
    empid = request.form.get('empid')

    conn = get_db_connection()
    cursor = conn.cursor()

    query = "DELETE FROM employee WHERE empid = %s;"
    cursor.execute(query, (empid,))

    conn.commit()
    cursor.close()
    conn.close()

    return "Employee deleted successfully"


# ---------------- EMPLOYEES BY DEPARTMENT ----------------
@app.route('/employee/department/<dept>', methods=['GET'])
def employee_by_department(dept):
    conn = get_db_connection()
    cursor = conn.cursor()

    query = "SELECT * FROM employees WHERE department = %s;"
    cursor.execute(query, (dept,))
    data = cursor.fetchall()

    cursor.close()
    conn.close()
    return str(data)


# ---------------- HIGHEST SALARY ----------------
@app.route('/employee/highest-salary', methods=['GET'])
def highest_salary():
    conn = get_db_connection()
    cursor = conn.cursor()

    cursor.execute(
        "SELECT * FROM employee ORDER BY salary DESC LIMIT 1;"
    )
    data = cursor.fetchone()

    cursor.close()
    conn.close()
    return str(data)


# ---------------- LOWEST SALARY ----------------
@app.route('/employee/lowest-salary', methods=['GET'])
def lowest_salary():
    conn = get_db_connection()
    cursor = conn.cursor()

    cursor.execute(
        "SELECT * FROM employees ORDER BY salary ASC LIMIT 1;"
    )
    data = cursor.fetchone()

    cursor.close()
    conn.close()
    return str(data)


# ---------------- RUN SERVER ----------------
if __name__ == '__main__':
    app.run(debug=True)
