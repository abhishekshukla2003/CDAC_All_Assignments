#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int count = 0;
    int ret, s, pid;

    for (int i = 0; i < 4; i++) {
        count += 1;  
    }

    pid = fork();
    if (pid == 0) {
        switch (count) {
            case 1:
                execl("/usr/bin/gcc", "gcc", "-c", "circle.c", NULL);
                exit(0);
            case 2:
                execl("/usr/bin/gcc", "gcc", "-c", "square.c", NULL);
                exit(0);
            case 3:
                execl("/usr/bin/gcc", "gcc", "-c", "rectangle.c", NULL);
                exit(0);
            case 4:
                execl("/usr/bin/gcc", "gcc", "-c", "main.c", NULL);
                exit(0);
        }
    } else {
        wait(&s);
    }

    pid = fork();
    if (pid == 0) {
        execl("/usr/bin/gcc", "gcc", "-o", "program.out", "circle.o", "square.o", "rectangle.o", "main.o", NULL);
        exit(0);
    } else {
        wait(&s);
    }

    pid = fork();
    if (pid == 0) {
        execl("./program.out", "./program.out", NULL);
        exit(0);
    } else {
        wait(&s);
    }

    return 0;
}

