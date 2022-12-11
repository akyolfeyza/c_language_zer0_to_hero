//name and grade 

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
//     name char olacak
    char name[20];
//   grade ise int
    int grade;
//     I start working
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (strcmp(name, name) == 0 && grade > 50) {
        printf("Your name is %s and your grade is %d and Congrats you passed", name, grade);
    } else {
        printf("Your name is %s and your grade is %d, you failed; no worries try again.", name, grade);
    }
    return 0;
}
