#include <stdio.h>
void primeFactors(int n)

int main (void)
{


int n,c;

printf("Enter the number");

scanf ("%d",&n);

primeFactors(n);

printf("%d",c);

return 0;
}



void primeFactors(int n);
{
     if (n%2 == 0)
    {
        c=2;
      }

    while (n%2==0)
    {
    n=n/2;
    }
