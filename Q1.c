#include <stdio.h>

main()
{
	int employeeID[12];
	printf("Enter the employeeID\n");
	int i;
	for(i = 0 ; i < 12 ; i++){
		scanf("%d",&employeeID[i]);
	}
	
	int checkID;
	printf("Enter ID To Check Whether It Exists Or Not ");
	scanf("%d",&checkID);
	
	for(i = 0 ; i < 12 ; i++ ){
		if(checkID == employeeID[i]) printf("ID Found In The Array\n");
		else printf("ID Not Found In The Array");
	}
}

