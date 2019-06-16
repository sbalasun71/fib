/***********************************************
* Jun 14, 2019 
* Sample code for Cognomotiv
* Skandakumar Balasunderam 
***********************************************/

#include <stdio.h>
#include <stdlib.h> 


/**********************************************
* Using recursion
**********************************************/
float fib_r(unsigned int n)
{

   if (n == 0)
   {
     return 0;
   }
   if (n == 1)
   {
     return 1;
   }
   if (n>1)
   {
     return (fib_r(n-1) + fib_r(n-2));
   }

} 

/************************************************
* Using iteration
************************************************/
float fib_i(unsigned int n)
{
   float i=0;
   float a=0,b=1,f=0;

   if (n == 0)
   {
     a = 0;
     return 0;
   }
   if (n == 1)
   {
     b = 1;
     return 1;
   }
   if (n>1)
   {
      for(i=1;i<n;i++)
      {
         f=a+b;
         a=b;
         b=f;
      }
   }
   return f;
} 


/************************************************
* main function
************************************************/
int main(int argc, char** argv)
{

   int a=0;

   if (argc < 2)
   {
      printf("Please enter a number between 1 and 100\n");
      exit (0);
   }

   if (strncmp(argv[1],"-",1)==0)
   {
      printf("Number must be greater than or equal to zero\n");
      return 0;
   }

   a = atoi(argv[1]);
   //printf("recursive fib: %f\n",fib_r(a));
   printf("iterative fib: %f\n",fib_i(a));

   for (i=1;i<101;1++)
   {
      printf("iterative fib: %d  %f\n",fib_i(i));
   }

   return 0;
}
