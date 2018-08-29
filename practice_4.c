#include <stdio.h>
#include <math.h>

int main(void){

	int score[11] = {6,13,4,18,1,20,5,12,9,14,11};
	int score2[11] = {6,10,15,2,17,3,19,7,16,8,11};
	int A,B,C,D,E;
	int N;
	int x,y;
	double degree;
	double dist;
	int sum = 0;

	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	scanf("%d", &N);

	int i;

	for(i=0; i<N; i++){

		scanf("%d %d", &x, &y);
		dist = sqrt((x*x)+(y*y));

		if(dist < A){
			sum += 50;
		}
		else{
			degree = atan2(y, (double)x);
			degree = (degree*180)/3.141592;
			
			if(degree<0){

				degree = -degree + 9;
				if(B < dist && dist < C){
                                sum += 3*score2[(int)(degree/18)];
                        	}
                        	else if(D < dist && dist < E){
                                	sum += 2*score2[(int)(degree/18)];
                        	}	
                        	else if(E < dist){
                                	sum += 0;
                        	}
                        	else{
                                	sum += score2[(int)(degree/18)];
                        	}

			}
			else{
				degree += 9;
		
				if(B < dist && dist < C){
					sum += 3*score[(int)(degree/18)];
				}
				else if(D < dist && dist < E){
					sum += 2*score[(int)(degree/18)];
				}
				else if(E < dist){
					sum += 0;
				}
				else{
					sum += score[(int)(degree/18)];
				}	
			}
	
		}
	}
		printf("%d", sum);
	
	return 0;
}
									
	

	
