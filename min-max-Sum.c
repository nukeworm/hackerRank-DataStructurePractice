/*
  Problem Link: https://www.hackerrank.com/challenges/mini-max-sum/problem
*/

#include<stdio.h>
int main() {
	int arr_count;
	scanf("%d",&arr_count);
	int arr[arr_count];
	//get array elements
	for(int i=0;i<arr_count;i++)
		scanf("%d",&arr[i]);
		
    int temp,minSum,maxSum;
    //sort the array
    for(int i=0;i<arr_count;i++){
        for(int j=0;j<arr_count-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //add first and last four indexes.
    minSum=arr[0]+arr[1]+arr[2]+arr[3];
    maxSum=arr[arr_count-1]+arr[arr_count-2]+arr[arr_count-3]+arr[arr_count-4];
    printf("%d %d",minSum,maxSum);
}
