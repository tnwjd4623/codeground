#include<stdio.h>

int main(void){

	int A;
	int B;
	int D;
	int result = 1;

	scanf("%d %d %d", &A, &B, &D);
	
	D = D-A;
	int tmp = A-B;

	result += D/tmp;

	if(D%tmp != 0){
		result++;
	}


	printf("%d", result);

	return 0;
}
	
	
