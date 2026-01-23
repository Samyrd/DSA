//Assignment 29
/*
1. 
#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int i;

    printf("Enter elements in an array:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of the elements of an array is: %d", sum);

    return 0;
}


//2.
#include<stdio.h>
int main(){
	int arr[10];
	int sum=0;
	int i,avg;
	
	printf("Enter the elements \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+arr[i];
	}
	avg=sum/10;
	printf("The average of numbers is %d",avg);
}




//3.
#include<stdio.h>
int main(){
	int i,SumEven=0, SumOdd=0;
	int arr[10];
	printf("Enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			SumEven=SumEven+arr[i];
		}
		else{
			SumOdd=SumOdd+arr[i];
		}
	}
	printf("The sum of Even Number is %d",SumEven);
	printf("The sum of Odd Number is %d",SumOdd);
	
	return 0;
}



//4.
#include<stdio.h>
int main(){
	int i,arr[10];
	int Max;
	printf("Enter the elements of the array");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	Max=arr[0];
	for(i=1;i<10;i++){
		if(arr[i]>Max){
			Max=arr[i];
		}
	}
	printf("The maximum element of the array is: %d",Max);
	
	
	return 0;
}



#include<stdio.h>
int main(){
	int i, arr[5];
	int Min;
	printf("Enter the elements of the array");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	Min=arr[0];
	for(i=1;i<5;i++){
		if(arr[i]<Min){
			Min=arr[i];
		}
	}
	printf("The minimum element of the array is : %d",Min);
	
	return 0;
}

*/

#include <stdio.h>

int main() {
    int arr[5];
    int i,temp,j;

    printf("Enter elements in an array:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<5;i++){
    	for(j=0;j<4-i;j++){
    		if(arr[j]>arr[j+1]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
	printf("Array after sorting");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
    
    printf("\n");
    return 0;
}

