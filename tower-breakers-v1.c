/*
	Problem Link: https://www.hackerrank.com/challenges/tower-breakers-again-1/
  
  Done by shifting the aray elements forward.
*/

#include<stdio.h>
int main(){
	int t,n,c,tmp;
	
	//Number of game rounds
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		
		//Number of towers
		scanf("%d",&n);
		int a[10000];
		
		//size of towers
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		//Player 1 has the first turn	
		c=0;
		
		for(int i=0;i<n;i++){
			
			//if tower length is greater than 1 
			if(a[i]!=1){
				tmp=a[i];
				
				//last element cannot be shifted
				if(i!=n-1){
				for(int j=0;j<a[i]-1;j++)
					a[n+a[i]-2+j]=a[n-j-1];
				}
				
				//divide a[i] into equal parts
				for(int k=0;k<tmp;k++)
					a[i+k]=1;
				
				//update n
				n+=tmp-1;
			}
			
			//Next player turn
			c=(c+1)%2;
			
		}
		
		//winner
		printf("%d",c==1?1:2);
	}
}
