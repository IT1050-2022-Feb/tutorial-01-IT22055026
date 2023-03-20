/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1, int no2);//function declaration 
int maximum(int no1, int no2);//function declaration 
int multiply(int no1, int no2);//function declaration 
int main() {
   int no1, no2;//variable declaration
   printf("Enter a value for no 1 : ");//user inputs
   scanf("%d", &no1);
  
   printf("Enter a value for no 2 : ");//user inputs
   scanf("%d", &no2);
  
   printf("Minimum Number is: %d\n", minimum(no1, no2));//function calling
  
   printf("Maximum Number is: %d\n ", maximum(no1, no2));//function calling
  
   printf("Multiply is: %d ", multiply(no1, no2));//function calling
  
   return 0;//end
}

int maximum(int no1, int no2)//function declaration 
{
  int max;
  
  if(no1 > no2)
  {
    max = no1;
  }

  else 
  {
    max = no2;
  }

  return max;
}

int minimum(int no1, int no2)//function declaration 
{
  int min;

  if(no1 < no2)
  {
    min = no1;
  }

  else 
  {
    min = no2;
  }

  return min;
}

int multiply(int no1, int no2)//function declaration 
{
  int multy;

  multy = no1 * no2;

  return multy;
}