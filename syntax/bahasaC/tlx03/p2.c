#include <stdio.h>
 
int main(void)
{
  char nama[1000];
  
  fgets(nama,1000,stdin);
 
  
  printf("%s",nama);
  return 0;
}
