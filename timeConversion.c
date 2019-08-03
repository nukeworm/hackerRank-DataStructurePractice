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
	strncpy(time,time,8);
	time[8]='\0';
	//AM
	if(mer[0]=='A'){
		if(((time[0]-'0')*10)+(time[1]-'0')==12){
            time[0]='0';
            time[1]='0';
        }
		printf("%s",time);
	}
	//PM
	else{
		if(((time[0]-'0')*10)+(time[1]-'0')==12){
            time[0]=1+'0';
            time[1]=2+'0';
            printf("%s",time);
        }
        else{
			hr=(((time[0]-'0')*10)+(time[1]-'0'))+12;
			strcpy(time,&time[2]);
			time[8]='\0';
			printf("%d%s",hr,time);
		}
	}
	
}
