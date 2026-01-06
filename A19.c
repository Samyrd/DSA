//
////1. To print no. of days in a month..
//#include<stdio.h>
//int main(){
//	int month_number;
//	printf("Enter the month number:");
//	scanf("%d",&month_number);
//	switch(month_number){
////		case 1:
////			printf("31");
////		case 5:
////			printf("31");
////		case 3:
////			printf("31");
////		case 7 ... 8:
////			printf("31");
////		case 10:
////			printf("31");
////		case 12:
////			printf("31");
////			break;
//		case 1:
//		case 5:
//		case 3:
//		case 7 ... 8:
//		case 10:
//		case 12:
//			printf("31");
//			break;
////		
////		case 4:
////			printf("30");
////		case 6:
////			printf("30");
////		case 9:
////			printf("30");
////		case 11:
////			printf("30");
////			break;
//			
//		case 4:	
//		case 6:
//		case 9:
//		case 11:
//			printf("30");
//			break;
//			
//		case 2:
//			printf("28");
//			break;
//		default:
//			printf("Enter valid month number\n");			
//	}
//	printf("\n");
//	return 0;
//}



//#include<stdio.h>
//int main(){
//	int n;
//	printf("Enter no. of days to  print months :");
//	scanf("%d",&n);
//	switch(n){
//		case 28 ... 29:
//			printf("February");
//			break;
//		case 31:
//			printf("January\t");
//			printf("March\t");
//			printf("May\t");
//			printf("July\t");
//			printf("August\t");
//			printf("October\t");
//			printf("December\t");
//			break;
//		case 30:
//			printf("April\t");
//			printf("June\t");
//			printf("September\t");
//			printf("November\n");
//			break;
//		default:
//			printf("No months with such number of days): ");
//	}
//	
//	printf("\n");
//	return 0;
//}



//2. Menu driven program..

//#include<stdio.h>
//int main(){
//	int choice,num1,num2,result;
//	printf("Enter your choice:");
//	printf("\n1.Addition");
//	printf("\n2.Subtraction");
//	printf("\n3.Multiplication");
//	printf("\n4.Division");
//	printf("\n5.Exit\t");
//	scanf("%d",&choice);
//	
//	//No need to write in each case asking user for input: That's why I have commented it out...
////	printf("Enter two numbers:");
////	scanf("%d%d",&num1,&num2);
//
//	//IF ke ander isliye likha taki default wala galat choice hone pe direct chal jaye..
//	if(choice>=1 && choice<=4){
//		printf("Enter two numbers:");
//		scanf("%d%d",&num1,&num2);
//	}
//
//	switch(choice){
//		case 1:
////			printf("Enter two numbers:");
////			scanf("%d%d",&num1,&num2);
//			printf("Result is %d",num1+num2);
//			break;
//		case 2:
////			printf("Enter two numbers:");
////			scanf("%d%d",&num1,&num2);
//			result=(num1>num2)?num1-num2:num2-num1;
//			printf("Result is %d",result);
//			break;
//		case 3:
////			printf("Enter two numbers:");
////			scanf("%d%d",&num1,&num2);
//			printf("Result is %d",num1*num2);
//			break;
//		case 4:
////			printf("Enter two numbers:");
////			scanf("%d%d",&num1,&num2);
//			printf("Result is %d",num1%num2);
//			break;
//		case 5:
//			exit(0);
//		
//		default:
//			printf("Entered wrong choice:");		
//			
//	}
//	printf("\n");
//	return 0;
//}



//3. Print unique message for each entered day number:

//#include<stdio.h>
//int main(){
//	int day_number;
//	printf("Enter day number:");
//	scanf("%d",&day_number);
//	switch(day_number){
//		case 1:
//			printf("Monday: Fresh Starts and Motivation");
//			break;
//		case 2:
//			printf("Tuesday: Action and Courage");
//			break;
//		case 3:
//			printf("Wednesday: Mid-week Boost and Mindset");
//			break;
//		case 4:
//			printf("Thursday: Strength and Persistence");
//			break;
//		case 5:
//			printf("Friday: Joy and Gratitude");
//			break;
//		case 6:
//			printf("Saturday: Reflection and Adventure");
//			break;
//		case 7:
//			printf("Sunday: Rest and Renewal");
//			break;
//		default:
//			printf("Enter valid day number):");
//	}
//	
//	printf("\n");
//	return 0;
//}


//4. 
//#include<stdio.h>
//int main(){
//	int a,b,c,choice;
//	printf("Enter your choice:");
//	printf("\n1.Isosceles");
//	printf("\n2.Equilateral");
//	printf("\n3.Right Angled Triangle\t");
//	scanf("%d",&choice);
//	
//	if(choice>=1 && choice<=3){
//		printf("Enter sides of triangle:");
//		scanf("%d%d%d",&a,&b,&c);
//	}
//	
//	if(!(a+b>c&&a+c>b&&b+c>a)){
//		printf("Enter valid sides of a triangle:");
//		return 0;
//	}
//	switch(choice){
//		case 1:
//			if(a==b||b==c||c==a)
//			{
//				printf("Valid sets of Isosceles triangle");
//			}
//			else{
//				printf("Not valid sets for Isosceles Triangle");
//			}
//			break;
//		case 2:
//			if(a==b&& b==c)
//			{
//				printf("Valid sets for Equilateral");
//			}
//			else{
//				printf("Not valid sets for Equilateral triangle");
//			}
//			break;
//		case 3:
//			if(c*c==a*a+b*b ||a*a == b*b + c*c || b*b == a*a + c*c){//handle each kyunki input kisi order me aa sakta hai..na ki first time sabse chota value aaye
//				printf("Valid set for Right Angle triangle");
//			}
//			else{
//				printf("Not a valid sets for Right Angle triangle");
//			}
//			break;
//		
//	}
//	printf("\n");
//	return 0;
//}


//5. Convert IF-ELSE INTO Switch Case:

#include<stdio.h>
int main(){
	int var;
	printf("Enter value for output:");
	scanf("%d",&var);
	
	switch(var){
		case 1:
			printf("good");
			break;
		case 2:
			printf("better");
			break;
		case 3:
			printf("best");
			break;
		default:
			printf("Invalid):");
	}
	printf("\n");
	return 0;
}
