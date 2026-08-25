#include <stdio.h>

int main() {
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char buffer[256];
    fp1 = fopen("file.txt", "r");
    if (fp1 == NULL) {
        perror("Error opening file.txt");
        return 1; // Indicate an error
    }
    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL) {
        perror("Error opening file2.txt");
        fclose(fp1);
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fp1) != NULL)
    {
        fputs(buffer, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully line by line.\n");

    return 0; // Indicate successful execution
} 
