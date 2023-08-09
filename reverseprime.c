//reverse prime number upto n
// I\P : 2 10 O/P : 7 5 3 2
#include<stdio.h>
int main()
{
	int a,b,i,j,f;
	printf("Enter a,b:\n");
	scanf("%d%d",&a,&b);
	if(b%2==0)
	b--;
	for(i=b;i>=a;i=i-2)
	{
		f=1;
		for(j=3;j<=sqrt(i);j=j+2)
		{
			f=0;
			break;
		}
		if(f==1)
		printf("%d\t",i);
	}
	if(a<=2)
	printf("2\n");
}
