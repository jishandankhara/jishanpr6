#include<stdio.h>
void main(){
	char j[99],i[99];
		printf("Enter the string:");
		gets(j);
		strcpy(i,j);
		strrev(i);
		if(strcmp(j,i)==0){
		    printf("given string is Palindrome.\n");
	}else{
	printf("given string is not Palindrome.");
		}
}
