#include <stdio.h>

main(){
	int min;
	int userAges[8];
	int i;
	printf("Enter 8 Numbers \n");
	for(i = 0 ; i < 8 ; i++){
		scanf("%d",&userAges[i]);
	}
	min = userAges[1];
	for(i = 0 ; i < 8 ; i++){
		if(userAges[i] < min ) min = userAges[i];
	}
	printf("The minimum age is %d\n",min);
}
