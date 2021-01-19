#include<stdio.h>
float avg_scores(float a[],int n);
main()
{
	int count=-1;
	float a[10],avg;
	do
	{
		count+=1;
		printf("Input your score:(Input a negative number to stop)");
		scanf("%f",&a[count]);
	}while(a[count]>=0);
	avg=avg_scores(a,count);
	printf("There are %d subjects.\n",count);
	printf("average score:%f",avg);
}
float avg_scores(float a[],int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum/n;
}
