#include<stdio.h>

int main()
{
   int i=1,s=0,n;
   scanf("%d", &n);
   while(i<=n)
  {
    s=s+i;
    i++;
  }
   printf("%d",s);
   return 0;
}
