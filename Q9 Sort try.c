#include <stdio.h>

int main(){
	int n = 10;
	int array[10];
	printf("Enter the ten numbers \n");
	int i;
	for(i = 0 ; i < n ; i++){
		scanf("%d",&array[i]);
	}
	int temp;
	for(i = 0 ; i < n ; i++){
		if(array[i] > array[i+1]){
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	printf(" The new Sequence is \n");
	for(i = 0 ; i < n ; i++){
		printf("%d\n",array[i]);
	}
}
