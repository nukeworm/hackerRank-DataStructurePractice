/* 
    Problem Link: https://www.hackerrank.com/challenges/maximum-element/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size=10000;   
    int stack[size],n,qr,x,max=-2147483648,top=size-1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&qr);
        if(qr==1){
            scanf("%d",&x);
            stack[top]=x;
            top--;
        }
        else if(qr==2)
            top++;
        else{
            for(int j=size-1;j>=top;j--)
                max=stack[j]>max?stack[j]:max;
            printf("%d\n",max);
        }
    }
    return 0;
}
