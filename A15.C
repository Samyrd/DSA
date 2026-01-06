//1.Armstrong number I
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int num;
//	printf("Enter a number:\n");
//	scanf("%d",&num);
//	int count=0;
//	int x=num;
//	int sum=0;
//	//calculation of digits..
//	while(x){
//		x=x/10;
//		count++;
//	}
//	//finding the sum
//	x=num;
////	for(x=num;x;x=x/10){
//	while(x){
//		int digit=x%10;
//		sum=sum+pow(digit,count);
//		x=x/10;
//	}
//	//checking armstrong 
//	if(sum==num){
//		printf("Armstrong num+ber");
//	}
//	else{
//		printf("Not a armstron number");
//	}
//}



//1.Armstrong number II: within 1 t0 1000;
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int num;
//	for(num=1;num<1000;num++){
//	int x=num;
//	int count=0;
//	int sum=0;
//	//calculation of digits..
//	while(x){
//		x=x/10;
//		count++;
//	}
//	//finding the sum
//	x=num;
////	for(x=num;x;x=x/10){
//	while(x){
//		int digit=x%10;
//		sum=sum+pow(digit,count);
//		x=x/10;
//	}
//	//checking armstrong 
//	if(sum==num){
//		printf("%d\n",num);
//	}
//}
//}

#include<stdio.h>
//
//int main(){
//	int num,i;
//	int a=-1,b=1,c;
//	printf("Enter a number:");
//	scanf("%d",&num);
//	for(i=0;i<num;i++){
//		c=a+b;
//		printf("%d\t",c);
//		a=b;
//		b=c;
//	}
//	return 0;
//}

int main(){
	int num,i;
	int a=-1,b=1,c;
	printf("Enter a number:");
	scanf("%d",&num);
	while(c<=num){
		c=a+b;
		if(num==c){
			printf("NUMBER IS IN SERIES");
			break;
		}
		
		a=b;
		b=c;
		num--;
}
	return 0;
}


