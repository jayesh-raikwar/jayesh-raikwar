#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char *sent=(char*)malloc(30*sizeof(char));
printf("Enter the sentence\n");
gets(sent);
int i,j=0,count;
for(i=65;i<123;i++){
      if(i>90 && i<97){
      	continue;
}
j=0,count=0;
while(sent[j]!='\0'){
	if(sent[j]==i){
		count++;
	}
	j++;
}
if(count!=0){
printf("%c : %d\n",i,count);
}
}
	return 0;
}
