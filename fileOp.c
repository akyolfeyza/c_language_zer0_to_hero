#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

  
   fptr = fopen("C:\\programdosyasi.txt","w"); //Dosya adres,write

   if(fptr == NULL) //dosya bulunamazsa
   {
      printf("Error!");    //hata yazdir
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
