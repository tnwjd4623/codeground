#include <stdio.h>

int main(void){

	char s[10000];
	int n[4];
	int count=0;

	scanf("%s", s);

	int i;
	
	for(i=0; i<4;i++){
		n[i] = 0;
	}
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='h') n[0]++;
		else if(s[i]=='e') n[1]++;
		else if(s[i]=='l') n[2]++;
		else if(s[i]=='o') n[3]++;
	}

	while(1){
		n[0]--;
		n[1]--;
		n[2]=n[2]-2;
		n[3]--;

		if(n[0]>=0&&n[1]>=0&&n[2]>=0&&n[3]>=0){
			count++;
		}
		else{
			break;
		}
	}	
	printf("%d", count);

	return 0;

}		
