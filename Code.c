#include<stdio.h>
#include<string.h>
void main ()
 {
  printf("\t\t\t\t\t\t\t MAIN MENU\n");
  printf("\t\t\t\t\t\t-----NORMAL CALCULATOR----");
  //this is for the styling, not necessary
char operator;
printf("\nEnter an operator(+,-,*,/): ");
scanf("%c", &operator);
// asks for the operator
double operand1;
double operand2;
printf("Enter two numbers: ");
scanf("%lf %lf", &operand1, &operand2);
switch (operator)
{
   case '+':
    {
       printf("%.2lf + %.2lf = %.2lf",operand1, operand2, operand1+operand2);
       break;
    }
   case '-':
   {
           printf("%.2lf - %.2lf = %.2lf",operand1, operand2, operand1 - operand2);
       break;
   }
    case '*':
    {
           printf("%.2lf X %.2lf = %.2lf",operand1, operand2, operand1*operand2);
       break; 
    }
    case '/':
    {
         if (operand2 == 0)
	      {
       	  printf("Invalid when 0 is given as input\n");
	       }
	       else
	       {
         printf("%.2lf / %.2lf = %.2lf",operand1, operand2, operand1 / operand2);
	       }
// if else statement for operand2 being 0
            break; 
   }
      default:
        printf("Unregistered operator provided!Please try again");
//if operator input is not registered, this shows 
}
printf("\nThanks for using it\n");
printf("\t\t\t\t\t\t\tTHE END");
}