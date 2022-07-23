#include<stdio.h>
int main(){
	int i,arr_size,miss;
	int arr[]={1,2,3,7,8,9,10};
	arr_size=sizeof(arr)/sizeof(int);
    for(i=0;i<arr_size;i++){
    	if((arr[i+1]-arr[i])!=1){
		break;	
		}
	}
    arr[i]+=1;
	while(arr[i]!=arr[i+1]){
	  printf("%d ",arr[i]);
	  	  arr[i]+=1;
	}
	return 0;
}
