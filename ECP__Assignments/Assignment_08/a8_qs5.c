#include <stdio.h>
#include <string.h>

struct student {
    int rollno;                 
    unsigned int standard : 4;  
    unsigned int age      : 6;  
    unsigned int gender   : 1;  
    char name[20];
};


void swap(struct student *a, struct student *b) {
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

void sortByRoll(struct student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].rollno > arr[j + 1].rollno) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


void sortByName(struct student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


void printStudents(struct student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No  : %d\n", arr[i].rollno);
        printf("Name     : %s\n", arr[i].name);
        printf("Standard : %u\n", arr[i].standard);
        printf("Age      : %u\n", arr[i].age);
        printf("Gender   : %s\n", arr[i].gender ? "Female" : "Male");
    }
}

int main() {
    int n = 3;
    struct student s[3];

 
    for (int i = 0; i < n; i++) {
        unsigned int tmp;

        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf(" %19[^\n]", s[i].name);

        printf("Standard (1-12): ");
        scanf("%u", &tmp);
        s[i].standard = tmp;

        printf("Age (1-32): ");
        scanf("%u", &tmp);
        s[i].age = tmp;

        printf("Gender (0=Male, 1=Female): ");
        scanf("%u", &tmp);
        s[i].gender = tmp;
    }

    printf("\n--- Original List ---\n");
    printStudents(s, n);

   
    sortByRoll(s, n);
    printf("\n--- Sorted by Roll Number ---\n");
    printStudents(s, n);

   
    sortByName(s, n);
    printf("\n--- Sorted by Name ---\n");
    printStudents(s, n);

    return 0;
}

