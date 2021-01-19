//数组中最大元素的下标
#include<stdio.h>
void fun(int *s,int n,int *k);
main()
{
	int a[20],b=-1,k;
	do
	{
		b++;
		printf("input integers:");
		scanf("%d",&a[b]);
	}while(a[b]!=0);
	fun(a,b,&k);
	printf("最大数的下标为:%d\n",k);
}
void fun(int *s,int n,int *k)
{
	int i,j;
	j=0;
	for(i=1;i<n;i++)
	{
		if(s[i]>s[j])
		{
			*k=i;
			j=i;
		}
	}
}
