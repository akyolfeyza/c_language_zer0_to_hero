
#include <stdio.h>

int main()
{
    int day;
    printf("Enter a day = ");
    scanf("%d", &day);
     switch(day) {
         
         case 1: printf("M");
         break;
         case 2: printf("T");
         break;
         case 3: printf("W");
         break;
         case 4: printf("T");
         break;
         case 5: printf("F");
         break;
         case 6: printf("S");
         break;
         case 7: printf("S");
         break;
         default:
                printf("Fun day");
                break; 
     }
    return 0;
}
