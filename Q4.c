#include <stdio.h>

int main(){
	int numbers[6];
	printf("Enter the six numbers \n");
	int i;
	for(i = 0 ; i < 6 ; i++){
		scanf("%d",&numbers[i]);
	}
	int temp;
	for(i = 6 ; i > 0 ; i--){
		temp = numbers[i];
		numbers[i] = numbers[i - 1];
		numbers[i - 1] = temp;
	}
	for(i = 0 ; i < 6 ; i++){
		printf("%d \n",numbers[i]);
	}
}

