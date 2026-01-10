#include<stdio.h>
int main(){
	int x=10;
	int *ptr;//declaration of pointer
	ptr=&x; //initialisation of pointer
	printf("value of x= %d", *ptr);
	*ptr=20; //updating the value of x
	printf("value of x=%d",*ptr);
	
	return 0;
}

#include<stdio.h>
int main(){
	
	int x=10;
	float y=1.3f;
	char z='p';
	
	int *ptr_x =&x;
	float *ptr_y=&y;
	char *ptr_z=&z;
	
	printf("Address of int Variable= %p\n",&x);
	printf("Address stored in int Variable = %p\n",ptr_x);
	printf("\n");
	printf("Size of Integer Pointer: %lu\n",sizeof(ptr_x));
	printf("Size of Float Pointer: %lu\n",sizeof(ptr_y));
	printf("Size of Char Pointer: %lu\n",sizeof(ptr_z));
	
	printf("\n");
	return 0;
}
