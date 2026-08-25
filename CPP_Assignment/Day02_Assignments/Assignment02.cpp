#include <iostream>
#include <string>
using namespace std;

class Tdate
{
private:
    int day;
    int month;
    int year;
    string monthName[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};

public:
    // Default constructor
    Tdate()
    {
        cout << "\n-----------Tdate() Default Constructor-----------\n";
        day = 1;
        month = 1;
        year = 2000;
    }

    // Parameterized constructor
    Tdate(int d, int m, int y)
    {
        cout << "\n--------Tdate(int,int,int) Parameterized Constructor-----------\n";
        day = d;
        month = m;
        year = y;
    }

    void AcceptDate()
    {
        cout << "\nEnter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void PrintDate_dd_mm_yyyy()
    {
        cout << "\nDate (dd-mm-yyyy): " << day << "-" << month << "-" << year << endl;
    }

    void PrintDate_dd_month_yyyy()
    {
        if (month >= 1 && month <= 12)
        {
            cout << "\nDate (dd-Month-yyyy): " << day << "-" << monthName[month - 1] << "-" << year << endl;
        }
        else
        {
            cout << "\nInvalid month!" << endl;
        }
    }

    bool ValidateDate()
    {
        int daysInMonth;

        if (month < 1 || month > 12)
            return false;
        if (day < 1)
            return false;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
            break;
        default:
            return false;
        }

        return (day <= daysInMonth);
    }
};

int main()
{
    Tdate d1;
    d1.AcceptDate();

    if (d1.ValidateDate())
    {
        d1.PrintDate_dd_mm_yyyy();
        d1.PrintDate_dd_month_yyyy();
    }
    else
    {
        cout << "\nInvalid date entered!" << endl;
    }

    return 0;
}

