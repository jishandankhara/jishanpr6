#include <stdio.h>
void main(){
char s[99];  
int  i,j,k,n,count=0;
printf("Enter a string : ");
gets(s);
   for(j=0;s[j];j++);
   n=j; 
   printf("frequency count character in string:\n");
    for(i=0;i<n;i++){
    count=1;
    if(s[i]){
	for(j=i+1;j<n;j++){   
	    if(s[i]==s[j]){
        count++;
        s[j]==0;}}  
	printf("number of %c's = %d \n",s[i],count);}
}} 
 	 
     
   
