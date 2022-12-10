// Soyadini ve yasini yaz. 
//   yasini 2 ile carp

#include <stdio.h>

 int main(){
	char name[10] = "Bartu";
	char surname[10] = "Pacal";
	int age = 20;
    start:
    age *= 2;


	if(age==160)
    printf("finalage :%d \n",age);
    else
    {
    printf("agenewvalue:%d\n",age);
    goto start;

    }
    return 0;

 }
