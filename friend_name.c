// write the name of the person you like
// if the name is yours print(Hurra this is me)
// This is my bff. 
// Good Luck



#include <stdio.h>
#include <stdlib.h>
#include "string.h"   

int main()
{
    char name1[10];
    printf("Enter friend name:");
    scanf("%s",name1);

    char name[10];
    printf("Enter your bff name:");
    scanf("%s",&name);

    if ((strcmp(name1,name)==0))
    {
    printf("Best friend name is %s\n",name1);
        if ((strcmp(name1,"Bartu")==0))
    {
    printf("Hurra this is me");
    }
    }
    else
    {
    printf("I'm not sure you know this person I think it's the wrong person for you..");
    }
    return 0;
}
----------------------------------------------------------------------------------------------------
  
#include <stdio.h>
#include <stdlib.h>
#include "string.h"   

int main()
{
    char name[10];
    printf("Enter your bff name:");
    scanf("%s",&name);

    if ((strcmp(name,name)==0))
    {
    printf("Best friend name is %s\n",name);
        if ((strcmp(name,"Bartu")==0))
    {
    printf("Hurra this is me");
    }
    }
    else
    {
    printf("I'm not sure you know this person I think it's the wrong person for you..");
    }
    return 0;
}
