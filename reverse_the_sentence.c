#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char *sent=(char*)malloc(30*sizeof(char));
printf("Enter the sentence\n");
gets(sent);
int j=0,i=1,k;
int arr[10];
arr[0]=0;
while(sent[j]!='\0'){
     if(sent[j]==' '){
     	arr[i]=j;
     	i++;
	 }
	j++;
}
arr[i]=j;
for(i;i>-1;i--){
   for(k=arr[i-1];k<=arr[i];k++){
   	printf("%c",sent[k]);
   }
}
return 0;
}
