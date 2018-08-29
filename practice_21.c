#include <stdio.h>
#include <stdlib.h>


int main(void){

	int N;
	int M;
	int K;
	int sum = 0;

	scanf("%d %d %d", &N, &M, &K);

	int *arr = (int*)malloc(sizeof(int)*N);
	int *arr2 = (int*)malloc(sizeof(int)*M);

	int i;

	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}

	for(i=0; i<M; i++){
		scanf("%d", &arr2[i]);
	}

	for(i=0; i<N; i++){
		sum += arr2[arr[i]-1];
	}
	free(arr);
	free(arr2);

	if(sum > K){
		printf("N");
	}

	else{
		printf("Y");
	}

	return 0;
}		
	
