/*
	Problem Link: https://www.hackerrank.com/challenges/tower-breakers-again-1/
  v3
*/

#include<stdio.h>
int main(){
	int t,n,sum;
	
	//Number of game rounds
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
		
		//Number of towers
		scanf("%d",&n);
		int a[10000];
		sum=0;
		//sum of sizes of towers
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		
		printf("%d",sum%2==0?2:1);
	}
}
