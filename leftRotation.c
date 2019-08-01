#include<stdio.h>
/*
	HackerRank Problem Link : https://www.hackerrank.com/challenges/array-left-rotation/problem
	
*/
int main(){
	int n,rot;
	scanf("%d %d",&n,&rot);
	int arr[n];
  
  //Take input from final location of first element of array after rotation.
  
	for(int i=0;i<n;i++)
		scanf("%d",&arr[(i+n-rot)%n]);
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
