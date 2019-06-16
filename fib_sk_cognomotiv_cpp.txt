/***********************************************
* Jun 14, 2019 
* Sample code for Cognomotiv
* Skandakumar Balasunderam 
***********************************************/ 

#include <iostream>

using namespace std;

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
      cout << "Please enter a number between 1 and 100\n";
      exit (0);
   }

   if (strncmp(argv[1],"-",1)==0)
   {
      cout << "number must be greater than or equal to zero\n";
      return 0;
   }

   a = atoi(argv[1]);
   //cout << "recursive fib: " << fib_r(a) << "\n";
   cout << "iterative fib: " << fib_i(a) << "\n";

   for (i=1;i<101;1++)
   {
      cout << "iterative fib: " << i << " " << fib_i(i) << "\n";
   }

   return 0;
}