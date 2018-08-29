#include <stdio.h>

int p[2000002];
int pac(int n){

int main(void){

	int N, M;

	scanf("%d %d", &N, &M);

	//(N+M+2) C (N+1)
	
	double tmp1 = N+M+2;
	double tmp2 = N+1;
	double p=tmp1;
	double c=tmp2;

	double result;
	int i;
	long int answer;

	for(i=0; i<N; i++){
		tmp1--;
		tmp2--;

		p *= tmp1;
		c *= tmp2;
	}

	result = p/c;
	answer = (int)result%1000000007;

	printf("%d", answer-1);

return 0;
}

	
