#include <stdio.h>

int main(){
	int n = 10;
	int array[10];
	printf("Enter the ten numbers \n");
	int i;
	for(i = 0 ; i < n ; i++){
		scanf("%d",&array[i]);
	}
	for(i = 0 ; i < n ; i++){
		if(array[i] > array[i+1]){
			printf("The Array Is Not Sorted In Ascending Order\n");
		break;
		}
	}
	printf("The Array Is In Sorted In Ascending Order");
}
