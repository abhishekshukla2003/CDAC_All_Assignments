#include <stdio.h>
#include <string.h>

struct student {
    int rollno;                 
    unsigned int standard : 4; 
    unsigned int gender   : 1;  
    unsigned int age      : 6;  
    char name[20];             
};

void print_student(const struct student *s) {
    printf("\nRoll No   : %d", s->rollno);
    printf("\nName      : %s", s->name);
    printf("\nStandard  : %u", s->standard);
    printf("\nAge       : %u", s->age);
    printf("\nGender    : %s\n", s->gender ? "Female" : "Male");
}


int searchByRoll(const struct student arr[], int n, int roll) {
    for (int i = 0; i < n; i++)
        if (arr[i].rollno == roll) return i;
    return -1;
}


int searchByName(const struct student arr[], int n, const char *name) {
    for (int i = 0; i < n; i++)
        if (strcmp(arr[i].name, name) == 0) return i;
    return -1;
}

int main(void) {
    struct student s[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf(" %19[^\n]", s[i].name);  

        unsigned int tmp;

        
        do {
            printf("Standard (1-12): ");
            scanf(" %u", &tmp);
        } while (tmp < 1 || tmp > 12);
        s[i].standard = tmp;

        
        do {
            printf("Age (1-32): ");
            scanf(" %u", &tmp);
        } while (tmp < 1 || tmp > 32);
        s[i].age = tmp;

        
        do {
            printf("Gender (0=Male, 1=Female): ");
            scanf(" %u", &tmp);
        } while (tmp > 1);
        s[i].gender = tmp;
    }

    printf("\n---------- All Students ----------\n");
    for (int i = 0; i < 3; i++) print_student(&s[i]);

   
    int roll;
    char name[20];

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);
    int idx = searchByRoll(s, 3, roll);
    if (idx >= 0) {
        printf("\n--- Found by Roll ---\n");
        print_student(&s[idx]);
    } else {
        printf("\nNo student found with Roll No %d\n", roll);
    }

    printf("\nEnter Name to Search: ");
    scanf(" %19[^\n]", name);
    idx = searchByName(s, 3, name);
    if (idx >= 0) {
        printf("\n--- Found by Name ---\n");
        print_student(&s[idx]);
    } else {
        printf("\nNo student found with Name %s\n", name);
    }

    return 0;
}

