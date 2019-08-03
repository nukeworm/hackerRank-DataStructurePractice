/*
	Problem Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include<stdio.h>
int main(){
	int n,max,c=0;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&a[0]);
	max=a[0];
	for(int i=1;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			c=0;
			max=a[i];
		}
		if(a[i]==max)
			c++;
	}
	printf("%d",c);
}
