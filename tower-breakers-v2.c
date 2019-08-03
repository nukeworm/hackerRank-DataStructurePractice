/*
	Problem Link: https://www.hackerrank.com/challenges/tower-breakers-again-1/
  
  v2
*/

#include<stdio.h>
int main(){
	int t,n,c;
	
	//Number of game rounds
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
		
		//Number of towers
		scanf("%d",&n);
		int a[10000];
		
		//Size of towers
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		c=0;
		for(int i=0;i<n;i++){
			
			//When height is not 1
			if(a[i]!=1){
				for(int j=1;j<a[i];j++)
					c=(c+1)%2;
			}
		    //next player turn
			c=(c+1)%2;
		}
		printf("%d\n",c==1?1:2);
	}
}
