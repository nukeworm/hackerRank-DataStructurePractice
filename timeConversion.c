/*
	Problem Link: https://www.hackerrank.com/challenges/time-conversion/problem
*/

#include<string.h>
#include<stdio.h>
int main(){
	int n=10,hr;
	char time[n],mer[2];
	scanf("%s",&time);
  
	//get the meridian in 'mer'
	strcpy(mer,&time[8]);
	mer[2]='\0';
  
  //Remove meridian from original string
	strncpy(time,time,8);
	time[8]='\0';
  

	if(mer[0]=='A')                 //AM
		printf("%s",time);
	else{                           //PM
		hr=(((time[0]-'0')*10)+(time[1]-'0'))+12;
		strcpy(time,&time[2]);
		time[8]='\0';
		printf("%d%s",hr,time);
	}
}
