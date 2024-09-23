#include <stdio.h>
#include <stdlib.h>

unsigned long long int getFibonnaciRecursive(int nthNum)
{

  if (nthNum == 1) {
    return 0;
  }

  if (nthNum == 2) {
    return 1;
  }

  return (getFibonnaciRecursive(nthNum - 1) + getFibonnaciRecursive(nthNum - 2));
}

unsigned long long int getFibonnaciIterative(int nthNum)
{
  if (nthNum == 1) {
    return 0;
  }

  if (nthNum == 2) {
    return 1;
  }

  unsigned long long int num1 = 0;

  unsigned long long int num2 = 1;

  unsigned long long int temp;

  for (int i = 2; i <= nthNum; i++) {
    temp = num1 + num2;

    num1 = num2;
    num2 = temp;
  }

  return num2;
}

unsigned long long int main(int argc, char* argv[]) {
  int nthNum;

  char recursionMethod;


  sscanf(argv[1], "%d", &nthNum);
  recursionMethod = *argv[2];


  if (recursionMethod == 'r') {
      printf("%llu", getFibonnaciRecursive(nthNum));
  } else if (recursionMethod == 'i') {
      printf("%llu", getFibonnaciIterative(nthNum));
  } else {
      return 0;
  }

  return 0;
}
