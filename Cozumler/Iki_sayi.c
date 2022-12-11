// Two number addition
#include "stdio.h"

int main()
{
    int a,b; // I declared 2 variable
    printf("Enter first num:");
    scanf("%d",&a);
    printf("Enter second num:");
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,a+b); //  a + b = result is a+b
    return 0;
}
//////////////////////////////////////////////////

//Calculator-four operation
#include<stdio.h>   

int main()
{    
char op;
int a,b;

printf("Choose an operator(+ * - /):");  
scanf("%c",&op);
printf("Enter first number:");
scanf("%d",&a);  
printf("Enter second number:");
scanf("%d",&b);

switch(op)
{
case '+':printf("%d + %d =%d",a,b,a+b);
break;
case '-':printf("%d - %d =%d",a,b,a-b);
break;
case '*':printf("%d * %d =%d",a,b,a*b);
break;
case '/':printf("%d / %d =%d",a,b,a/b);
break;
default:printf("You enter false op or number character...");
break;
} 
return 0;  
}   
