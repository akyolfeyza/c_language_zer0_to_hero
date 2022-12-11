#include<stdio.h>   

int main()
{    
 int x = 0, y = 0,sonuc=0;  //Onceden deklare ettim. burada int veri tipi, x y degisken 
  
printf("Enter first number:");   //yazar
scanf("%d",&x);  
printf("Enter second number:");  //input alir
scanf("%d",&y);  
  
int result=x+y;  
printf("sum of 2 numbers:%d ",result);  
  
return 0;  
}   
