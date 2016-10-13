#include<stdio.h>
int main()
{
	int i,j,k;
	printf("  \t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
	printf("--------------------------------------------------------------------------\n");
	for (j=1;j<=9;j=j+1)
	{
	    printf("%d.\t",j);
		for (i=1;i<=9;i=i+1)
		{
			k=i*j;
			printf("%d\t",k);
		}
		printf("\n");
	}
	return 0;
 }
