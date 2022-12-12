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

//if-else ile dört işlem
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2;
    char op;
    
    printf("Choose an operator(+ * - /):");  
    scanf("%c",&op);
    
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter first number:");
    scanf("%d",&num2);
    
    
    if(op == '+'){
        printf("%d + %d = %d",num1,num2,num1+num2);
    }
    else if(op == '-'){
        printf("%d - %d = %d",num1,num2,abs(num1-num2)); //abs mutlak değer
    }
    else if(op == '/'){
        printf("%d / %d = %d",num1,num2,num1/num2);
    }
    else if(op == '*'){
        printf("%d * %d = %d",num1,num2,num1*num2);
    }
    else{
        printf("You entered the wrong operator!");
    }
    
    return 0;    
   
}
