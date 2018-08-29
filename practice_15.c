#include <stdio.h>
#include <stdlib.h>

int main(void){

	int N;
	int M;
	int count = 0;

	scanf("%d", &N);
	scanf("%d", &M);

	int *arr = (int*)malloc(sizeof(int)*M);
	int *arr2 = (int*)malloc(sizeof(int)*M);

	int i,j;

	for(i=0; i<M; i++){
		scanf("%d %d", &arr[i], &arr2[i]);
	}

	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			if(i!=j && arr2[i]==arr2[j]){
				count = 1;
				break;
			}
		}
		if(count==1)
			break;
	}


	if(count==1){
		printf("0");
	}

	else{
		printf("1");
	}

	return 0;
}
	
		
