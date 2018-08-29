#include <stdio.h>

int main(void){
	
	int answer = 0;
	int n;
	scanf("%d", &n);
	int i;

	int arr[n];

	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int arr2[200001] = {0};

	int j,k;

	for(i=0; i<n-1; i++){
		for(j = 0; j<=i; j++){
			if(arr[i]+arr[j] <= 100000 && arr[i]+arr[j]>=-100000){
				arr2[arr[i]+arr[j]+100000] = 1;
			}
		}
		for(k = 0; k<=i; k++){
			if(arr[i+1]-arr[k]<=100000 && arr[i+1]-arr[k]>=-100000&&arr2[arr[i+1]-arr[k]+100000]==1){
				answer++;
				break;
			}
		}		
		
	}

	printf("%d", answer);
	
	return 0;
}	
