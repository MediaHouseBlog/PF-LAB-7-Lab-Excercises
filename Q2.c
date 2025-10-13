#include <stdio.h>

main()
{
	float marks[10];
	float average=0.0;
	
	printf("Enter Marks Of Specific Subject Of 10 Students\n");
	int i;
	for(i = 0 ; i < 10 ; i++){
		scanf("%f",&marks[i] );
	}
	for(i = 0 ; i < 10 ; i++){
		average += marks[i]/10;
	}
	printf("The Average Marks Of The Subject Are %0.3f\n",average);
}
