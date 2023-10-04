 Switch Statement in C
 
	=>Switch statement allows us to execute one statement from many statement 
	and that statement are called case.
	=>In Switch statement inside the body of switch a number of cases are used
	and a parameter are passed and form which case this parameter is matched 
	executed.
	
	SYNTAX:
	switch=>keyword
	()=>parameter
	ex:n=20;
	
		switch(n)
		{
			case 1:
				statement 1;
				break;
			case 2:
				Statement 2;
				break;
			case n;
				Statement 2;
				break;
			default:
				default Statement;
				
		}
		
		=>In the switch statement a value / number is passed in the place
		of parameter and that case will execute which is equal to that value/number.
		=>If no case matched with parameter then default case will execute.
		
	
	Example:
	#include<stdio.h>
	#include<conio.h>
	void main(){
		int n=50;
		switch(n)
		{
			case 1:
				printf("The value is matched");
				break;
			case 2:
				printf("The value is matched");
				break;
			case 3;
				printf("The value is matched");
				break;
			case 4;
				printf("The value is matched");
				break;
			case 5;
				printf("The value is matched");
				break;
			default:
				printf("The value is not matched");
				
		}
		getch();
	}
	
	
difference between if else and Switch


#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5;
	if(n==1){
		printf("The value is matched");
	}
	else if(n==2){
		printf("The value is matched");
	}
	else if(n==3){
		printf("The value is matched");
	}
	else if(n==4){
		printf("The value is matched");
	}
	else if(n==5){
		printf("The value is matched");
	}
	else{
		printf("The value is not matched");
	}
	getch();
}

1)input any number and print day of week.
2)input any number and print month name and number of days.