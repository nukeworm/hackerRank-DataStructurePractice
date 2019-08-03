/*
	Problem Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include<stdio.h>
int main(){
	int n,max,c=0;
	scanf("%d",&n);
	int a[n];
	max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			c=1;
			max=a[i];
		}
		else if(a[i]==max)
			c++;
	}
	printf("%d",c);
}
