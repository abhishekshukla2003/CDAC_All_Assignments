#include <stdio.h>

int main() {
    int emplid, deptno;
    char desgncode;
    char deptName[20], designation[30];

    printf("Enter Employee ID: \n");
    scanf("%d", &emplid);

    printf("Enter Department Number (10/20/30/40):\n");
    scanf("%d", &deptno);

    printf("Enter Designation (M/S/s/C):\n");
    scanf(" %c", &desgncode); 


    switch (deptno) {
        case 10:
            sprintf(deptName, "Marketing");
            break;
        case 20:
            sprintf(deptName, "Management");
            break;
        case 30:
            sprintf(deptName, "Sales");
            break;
        case 40:
            sprintf(deptName, "Designing");
            break;
        default:
            printf("Invalid Department number\n");
            return 0;
    }

    
    switch (desgncode) {
        case 'M':
            sprintf(designation, "Manager");
            break;
        case 'S':
            sprintf(designation, "Supervisor");
            break;
        case 's':
            sprintf(designation, "Security Officer");
            break;
        case 'C':
            sprintf(designation, "Clerk");
            break;
        default:
            printf("Invalid Designation code\n");
            return 0;
    }

    
    printf("\nEmployee with employee id %d is working in \"%s\" department as \"%s\".\n",
           emplid, deptName, designation);

    return 0;
}

