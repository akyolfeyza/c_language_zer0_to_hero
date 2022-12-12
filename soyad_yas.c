//melisa
#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int age;

    printf("adını yaz: ");
    scanf("%s", name);
    printf("merhaba %s \n", name);

    printf("yaşını yaz: ");
    scanf("%d", &age);
    printf("\nyaşın %d\n", age);
    if(strcmp(name,"melisa")==0 && age >= 20)
    {
        printf("hoş geldin");
    }
    else
    {
        printf("tekrar dene");
    }
}


