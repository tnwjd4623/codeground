#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	int tmp, temp;
	int result=1;
	int curr = 0;
	int vector = 0;
	int i,j;
	int total=0;
	scanf("%d", &n);
	for(i=0; i<n-1; i++){
		result *=10;
	}
	temp = result;

	int **count = (int**)malloc(sizeof(int*)*n);
	int **room  = (int**)malloc(sizeof(int*)*n);

	for(i=0; i<n; i++){
		count[i] = (int*)malloc(sizeof(int)*n);
		room[i] = (int*)malloc(sizeof(int)*n);
	}

	for(i=0; i<n; i++){
		scanf("%d", &tmp);
		for(j=0; j<n; j++){
			count[i][j] = 0;
			if(tmp < result){ 
				room[i][j] = 0;
			}
			else{
				if(tmp!=0 && result!=0){
					room[i][j] = tmp/result;
					tmp %= result;
				}
			}
			result /= 10;
		}	
		result = temp;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", room[i][j]);
		}
	printf("\n");
	}
	i=0;
	j=0;
	while(i>=0&&j>=0&&i<n&&j<n){
		if(room[i][j] ==0){
			if(vector==0){
				j++;
			}
			else if(vector==1){
				j--;
			}
			else if(vector==2){
				i++;
			}
			else if(vector==3){
				i--;
			}
		}
		else if(room[i][j] == 1){
			if(vector==0){
				count[i][j]++;
				i--;
				vector = 3;
			}
			else if(vector==1){
				count[i][j]++;
				i++;
				vector = 2;
			}
			else if(vector==2){
				count[i][j]++;
				j--;
				vector = 1;
			}
			else if(vector==3){
				count[i][j]++;
				j++;
				vector = 0;
			}
		}
		else if(room[i][j]==2){
			if(vector==0){
				count[i][j]++;
				i++;
				vector = 2;
			}
			else if(vector==1){
				count[i][j]++;
				i--;
				vector = 3;
			}
			else if(vector==2){
				count[i][j]++;
				j++;
				vector = 0;
			}
			else if(vector==3){
				count[i][j]++;
				j--;
				vector = 1;
			}
		}
	}
				
	for(i=0; i<n;i++){
		for(j=0; j<n; j++){
			if(count[i][j]!=0){
				total++;
			}
		}
	}
	printf("%d", total);	

return 0;
}	 
