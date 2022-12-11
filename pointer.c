#include <stdio.h>
int main()
{
  int var = 15;
  int *ptr =var;
  printf("Sayi tam olarak : %d\n", var);

  // Notice the use of & before var
  printf("Sayinin tutuldugu adres : %p", &var);  
  return 0;
}
