//#include<stdio.h>
//int main(){
//	int x=10;
//	int *ptr;//declaration of pointer
//	ptr=&x; //initialisation of pointer
//	printf("value of x= %d", *ptr);
//	*ptr=20; //updating the value of x
//	printf("value of x=%d",*ptr);
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main(){
//	
//	int x=10;
//	float y=1.3f;
//	char z='p';
//	
//	int *ptr_x =&x;
//	float *ptr_y=&y;
//	char *ptr_z=&z;
//	
//	printf("Address of int Variable= %p\n",&x);
//	printf("Address stored in int Variable = %p\n",ptr_x);
//	printf("\n");
//	printf("Size of Integer Pointer: %lu\n",sizeof(ptr_x));
//	printf("Size of Float Pointer: %lu\n",sizeof(ptr_y));
//	printf("Size of Char Pointer: %lu\n",sizeof(ptr_z));
//	
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int * f1(){
//	int i;
//	int *p;
//	int size=5;
//	p=(int*) calloc(size,4);
//	
//	printf("Enter 5 values:\n");
//	for(i=0;i<=size;i++){
//		scanf("%d",p+i);
//	}
//	return p;
//}

//void f2(){
//	int i;
//	int *p;
//	int size=5;
//	p=(int*) calloc(size,4);
//	printf("Enter 5 values:\n");
//	for(i=0;i<=size;i++){
//		scanf("%d",p(i+1));
//	}
//	free(p);

//}



//calloc
void f1(){
	int i,size=5;
	char ch;
	int *p;
	p=(int*) calloc(size,4);
	printf("Enter 5 values:\n");
	for(i=0;i<size;i++){
		scanf("%d",p+i);
	}
	printf("Do you want to enter 5 more values: Y/N");
	scanf(" %c",&ch);
	if(ch=='Y'|| ch=='y'){
		size=size+5;
		p=realloc(p,size*4);
		printf("Enter 5 values:\n");
		for(i=5;i<=9;i++){
			scanf("%d",p+i);
		}
	}
	printf("stored values are :\n");
	for(i=0;i<size;i++){
		printf("%d\n",*(p+i));
	}
	free(p);
}




int main(){
//	int *ptr;
//	ptr=f1();
//	
//	printf(" Entered values are: \n",ptr);
//	
	//f1();
	
	f1();
	printf("\n");
	
	return 0;
}



