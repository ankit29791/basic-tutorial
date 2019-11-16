#include <stdio.h>
int sum ();
int main()
{
	printf("enter num\n");
	sum ();
return 0; 

}
int sum()
{int a,b,sum;
	printf("in func\n");
	scanf("%d %d",&a,&b);
        sum=a+b;
        printf("sum=%d\n", sum);
	return 0;
}	
