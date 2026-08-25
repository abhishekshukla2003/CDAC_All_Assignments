#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int count = 0;

    while (1) {
        pid_t pid = fork();

        if (pid < 0) {
            
            printf("fork");
            break;
        } else if (pid == 0) {
          
            exit(0);
        } else {
           
            count++;
        }
    }

    printf("Max number of child processes created: %d\n", count);
    return 0;
}

