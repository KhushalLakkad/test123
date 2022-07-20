#include<stdio.h>
int main()
{
	int arr[5][5];
	int rows,cols;
	
	
	for(rows=0;rows<3;rows++)//1<3 2<3
	{
		for(cols=0;cols<3;cols++)// 1<3 2<3
		{
			scanf("%d",&arr[rows][cols]);
		}
		
	}
	
	//1 2 3 4
	
	for(rows=1;rows<3;rows++)//2<3 
	{
		for(cols=1;cols<3;cols++)// 1<3 
		{
			printf("%d ",arr[rows][cols]);// arr[1][1]=1 arr[1][2] = 2
		}								//		arr[2][1]=3 arr[2][2] =4
		
		printf("\n");
		
	}
	
	
}