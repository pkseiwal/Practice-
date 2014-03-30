#include<stdio.h>
int main()
{
	int a[]={'d','e','a','b','f'},i,j,k;
	for(j=1;j<5;j++){
	for(i=0;i<j;i++)
	{
		if(a[i]<a[j]){
		}
		else if(a[i]>a[j]){
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		}
	}
	}
	for(j=0;j<5;j++){
	printf("%c ",a[j]);
	}
}
