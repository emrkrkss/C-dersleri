#include <stdio.h> 
int main(){
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i = 0; i<3;i++)
    {
    	for(int j=0; j<i;j++)
    	{
    		int swap = a[i][j];
    		a[i][j]=a[j][i];
    		a[j][i]=swap;
		}
		for(int i = 0; i<3;i++)
		{
		for(int j=0; j<3;j++)
    	{
    		printf("½d", a[i][j]);
    	}
    	printf("\n");
    	}
}
}
