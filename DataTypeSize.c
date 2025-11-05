#include <stdio.h>

int main()
{
  char cValue = 'S';
  int iValue = 11;
  float fValue = 90.775f;
  double dValue = 98.786676;

  printf("size of chracter is: %lu \n", sizeof(cValue));
  printf("size of integer is: %lu \n", sizeof(iValue));
  printf("size of float is :%lu \n", sizeof(fValue));
  printf("size of double is :%lu \n", sizeof(dValue));// "-w " is used to supressed the warning it means it did not show the error

  return 0;
}