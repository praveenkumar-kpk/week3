#include<stdio.h>

int main()
{
   int n,a,b,c;
   printf("give any 3 digit number");
   
   scanf("%d", &n);
   
   a=n/100;
   b=n/10-a*10;
   c=n-b*10-a*100;
   printf("the reverse of the number is %d %d %d",c , b, a);
   return 0;
}
