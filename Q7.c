#include <stdio.h>

int main(){
	int index = 100;
	char str[index];
	int numbers[index];
	printf("Enter the string ");
	scanf("%s",str);
	int i;
	int j=0;
	for(i = 0 ; i < index ; i++){
		if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'){
			numbers[j] = (str[i] -'0');
			j++;
		}
	}
	int sum = 0;
	for(i = 0 ; i < j ; i++){
		printf("%d\n",numbers[i]);
		sum += numbers[i];
	}
	printf("%d",sum);
}
