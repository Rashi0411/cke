#include <stdio.h>
void main(){
	int i, j, k, sample[3][5][1], size;
	size=3*5*1;
	printf("Enter %d elements: \n",size);
	for(i = 0; i < 3; ++i){
		for (j = 0; j < 5; ++j){
			for(k = 0; k < 1; ++k ){
				scanf("%d", &sample[i][j][k]);
			}
		}		
	}
	printf("The values are:\n\n");
	for(i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			for(k = 0; k < 1; k++){
				printf("sample[%d][%d][%d] = %d\n", i, j, k, sample[i][j][k]);
			}
		}
	}
}
