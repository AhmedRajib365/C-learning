#include<stdio.h>
int main()
{

  int i=2;
  int j = ++i;
  int temp;
  temp = i;
  i++;
  i = temp;

  //i++;   post Increment
  //printf("%d \n", i++);
    printf("%d \n", i); //pre Increment
      return 0;
}
