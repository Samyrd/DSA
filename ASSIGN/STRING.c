#include<stdio.h>

void ex1(){
	char str[10]={'B','H','O','P','A','L'};
	int i;
	for(i=0;i<10;i++){
		printf("%d",str[i]);
	}
}

void ex2(){
	char str[10]={'B','H','O','P','A','L'};
	int i;
	for(i=0;i<10;i++){
		printf("%c",str[i]);   
	}
}

/* Null character is non-printable or which is not displayed on the screen.....*/
void ex3(){
	char str[10]={'B','H','O','P','A','L'};
	int i;
	for(i=0;i<=5;i++){   /*//can't decide the size, as we are not sure about the size of the string.*/
		printf("%c",str[i]);   
	}
}
void ex4(){
	char str[10]={'B','H','O','P','A','L'};
	int i;
	for(i=0;str[i]!='\0';i++){    /*//run the loop till we meet the null terminator...or null character*/
		printf("%c",str[i]);   
	}
}

void ex5(){
	char str[10]={'B','H','O','P','A','L'};
	int i;
	for(i=0;str[i];i++){    /*//till str[i] is true...*/
		printf("%c",str[i]);    /*  //Note:printf knows the significance of null character */
	}
}

void ex6(){
	char str[10]={'B','H','O','P','A','L'};    
	printf("%s",str);   
	}


void ex7(){
	char str[10]={'B','H','O','P','A','L'};
	/*//puts("%s",str); //can use puts to print string  */
 	printf("%s",str);    
	}


void ex8(){
	char str[10]={"BHOPAL"};    
	printf("%s",str);   
	}

void ex9(){
	char str[10]={"BHOPAL"};    
	printf(str);   
	}


//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//TAKING INPUT FOR A STRING..........

//Below code is not the correct way to take user input


void ex10(){
	char str[20];
	int i;
	printf("Enter your name");
	for(i=0;i<=19;i++){
		scanf("%c",&str[i]);
	}   
	printf("Name: %s",str);
}

//Below code is not the correct way to take user input
void ex11(){
	char str[20];
	int i;
	printf("Enter your name");
	for(i=0;str[i];i++){        //yaha toh null character toh kabhi aaya nhi....print wale case me tha but scanf wale case me aisa nhi ...
		scanf("%c",&str[i]);    //str[i] me garbage value hai...
	}   
	printf("Name: %s",str);
}


//printf aur scanf me directly..%s laga ke str ko pass kr denge...

void ex12(){
	char str[20];
	int i;
	printf("Enter your name");
    scanf("%s",str);        //scanf stores only one word...that's why we can't use scanf for taking the input..
	printf("Name: %s",str);
}


void ex13(){
	char str[20];
	printf("Enter your name");
    gets(str);     //gets is depricated
	printf("Name: %s",str);
}

void ex14(){
	char str[20];
	printf("Enter your name");
    fgets(str,20, stdin);     //use fgets instead of gets
	printf("Name: %s",str);
}


int main(){
	ex14();
	printf("\n");
	return 0;
}
