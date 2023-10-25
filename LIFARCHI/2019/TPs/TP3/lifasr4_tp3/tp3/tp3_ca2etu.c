#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned char uc1, uc2, uc3;
  signed char sc1, sc2, sc3;
  
  printf("Taille de unsigned char : %u octet(s)   \n", sizeof(char));
  printf("Taille de signed char   : %u octet(s) \n\n", sizeof(char));

  uc1 = 200; uc2 = 60; uc3 = uc1 + uc2;
  printf("(unsigned char) uc1 = %4d, uc2 = %4d, uc1+uc2 = %4d \n", uc1, uc2, uc3);
  
  sc1 = 100; sc2 = 60; sc3 = sc1+sc2;
  printf("(signed char)   sc1 = %4d, sc2 = %4d, sc1+sc2 = %4d \n", sc1, sc2, sc3);
  
  sc1 = -100; sc2 = -60; sc3 = sc1+sc2;
  printf("(signed char)   sc1 = %4d, sc2 = %4d, sc1+sc2 = %4d \n", sc1, sc2, sc3);
  
  return 0;
}
