#include <stdio.h>
#include <stdlib.h>

int compare(void *first ,void *second){
	if(*(int*)first > *(int*)second)
		return 1;
	else if(*(int*)first < *(int*)second)
		return -1;
	else 
		return 0;
}

int main(void){

	int N;
	scanf("%d", &N);

	int *arr = (int*)malloc(sizeof(int)*N);
	int i;
	int sum = 0;
	
	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}

	qsort(arr, N, sizeof(int), compare);

	sum = arr[0];
	for(i=1; i<N; i++){
		if(i%2==1){
			sum -= arr[i];
		}
		else{
			sum += arr[i];
		}
	}
	
	printf("%d", sum);
	return 0;
}	
