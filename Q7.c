#include <stdio.h>

int main(){
	int index = 100;
	char str[index];
	int numbers[index];
	printf("Enter the string ");
	sanf("%s",str);
	int i;
	int j=1;
	for(i = 0 ; i < index ; i++){
		if(str[i] == '1' || str[i] == '2' ){
			numbers[j] a= str[i];
			j++;
		}
	}
}
