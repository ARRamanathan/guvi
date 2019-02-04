
#include <stdio.h>

int main() {
	// your code goes here
	int num1, num2, sum=0,i=0;
	scanf("%d %d",&num1,&num2);
	//scanf("%d",&num2);
	int arr[100];
	//printf("num_2");
	for (i=0; i<num1; i++)
		scanf("%d" ,&arr[i]);
	
	for (i=0; i<num2; i++)
		sum=sum+arr[i];
		
	printf("%d",sum);
}
