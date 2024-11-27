#include<stdio.h>
int main()
{
int n,i=1,s=0;
 scanf("%d", &n);
 while(n<=5)
 	{n=i+s;
      s=i;
      i=n;
	}
  printf("%d",n);
  return 0;
}
