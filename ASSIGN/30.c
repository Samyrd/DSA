
/*
//1.

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


//2.

#include<stdio.h>
int main(){
	int i,j,arr[5],temp;
	printf("Enter elements in an array");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
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
	printf("Second largest element of the array is %d",arr[3]);
	
	
	return 0;
}



//3. 

#include<stdio.h>
int main(){
	int i,j,arr[5],temp;
	printf("Enter elements in a array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
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
	
	printf("The second smallest number in the array is %d",arr[1]);
	return 0;
}

*/

//4.
#include<stdio.h>
int main(){
	int i,j,arr[5],temp;
	printf("Enter elements in the array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(arr[j]>arr[j+1]){   //if(arr[j]<arr[j+1]...it will print in descending order. No need to run the loop for i=4 to i=0
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("Arrray sorted in descending order:");
	for(i=4;i>=0;i--){
		printf("%d ",arr[i]);
	}
//	
//	for(i=0;i<=4;i++){
//		printf("%d",arr[i]);
//	}
	
	return 0;
}


/*
//5.
#include<stdio.h>
int main(){
	int i,arr1[5],arr2[5];
	printf("Enter elements in the array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<5;i++){
		arr2[i]=arr1[i];
	}
	
	printf("Array copied is :");
	for(i=0;i<5;i++){
		printf("%d ",arr2[i]);
	}
	
	printf("\nArray copied in reverse order :");
	for(i=4;i>=0;i--){
		printf("%d ",arr2[i]);
	}
	printf("\n");
	
	return 0;
}


//Two comapre two arrays:
#include <stdio.h>

int main() {
    int arr1[5], arr2[5];
    int i, flag = 1;

    printf("Enter elements of first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays
    for (i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Both arrays are equal");
    else
        printf("Arrays are not equal");

    return 0;
}

*/










