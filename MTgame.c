#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int team_a = 0;
	int N,n;
	int K;
	int A;
	int B;
	
	int i,j,k;
	scanf("%d %d %d", &A, &B, &n);
	char *arr = (char*)malloc(sizeof(char)*n);

	for(i=0; i<n; i++){
		team_a = 0;
		scanf("%d %d", &N, &K);
		j = A+(B*K);

		for(k=N-B; k<N; k++){
			if((k%j)>=A && (k%j)<=A*K){
				team_a = 1;
				break;
			}
		}
		
		if(team_a==1)
			arr[i] = 'a';
		else
			arr[i] = 'b';
	}

	printf("%s", arr);
	free(arr);
	return 0;
}
