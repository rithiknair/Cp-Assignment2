#include<stdio.h>
void main()
{
  int i,k;
  int space=0;
  for(i=1;i<=5;i++)
  {
  	for(k=5;k>=space;k--)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("%d",k);
	}
	for(k=i-1;k>=1;k--)
	{
		printf("%d",k);
	}
	printf("\n");
	space++;
  }
}
