#include <stdio.h>
int main(void) {
	// your code goes here
	int T,N,K;
	scanf("%d",&T);
	for(int j=0;j<T;j++){
	    scanf("%d%d",&N,&K);
	    int arr[N];
	   int count=0;
	for(int i=0;i<N;i++){
	    scanf("%d",&arr[i]);
	if(arr[i]>K){
	    count++;
	}
	}
		printf("%d\n",count);
	}
	return 0;
}
