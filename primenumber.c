#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j,f;
	printf("Enter a,b:\n");
	scanf("%d%d",&a,&b);
	if(b%2!=0)
	b--;
	for(i=a;i<=b;i=i+2)
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
}
