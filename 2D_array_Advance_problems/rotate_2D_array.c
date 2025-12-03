/*    • Rotate Matrix Elements
Examples:
Input 
1 2 3
4 5 6 
7 8 9
Output: 
4 1 2
7 5 3 
8 9 6   */

#include<stdio.h>
int main(){

	int arr[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	int row =0;
	int col =0;
	int m=3,n=3;

	printf("input array\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	//output array
	while(row < n && col < m)
	{
		if(row+1==m || col+1==n)
			break;

		int prev = arr[row+1][col];
		//printf("%d",prev);

		//first row
		for(int i=col;i<n;i++)
		{
			int cur = arr[row][i];
			arr[row][i]=prev;
			prev=cur;
		}
		row++;
		//last column
		for(int i=row;i<m;i++)
		{
			       int cur = arr[i][n-1];
				arr[i][n-1]=prev;
				prev=cur;
		}
		n--;
		//last row
		if(row < m){
			for(int i=n-1;i>=col;i--)
			{
				int cur = arr[m-1][i];
				arr[m-1][i]=prev;
				prev=cur;
			}
		}
		m--;
		//first column
		if(col < n)
		{
	         	for(int i=m-1;i>=row;i++)
		        {
			 int cur = arr[i][col];
			  arr[i][col]=prev;
			  prev=cur;
			}
		}
		col++;
		//arr[][]=prev;
	}
	
	printf("***after array***\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
