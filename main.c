//algoritmo burbuja
#include <stdio.h>

int main(){
  int i, k, j, temp, vector[] = {23,4,5,6,3,4,2,0,1};
	for(i=0;i < 9-1;i++){
		for(j=0; j<9;j++){
			if(vector[j] > vector[j+1]){
				temp = vector[j];
				vector[j]=vector[j+1];
				vector[j+1] = temp;
			}
		}
	}


	for(k=0; k<9;k++)
		printf("%d ",vector[k]);
	printf("\n");
	return 0;
}
