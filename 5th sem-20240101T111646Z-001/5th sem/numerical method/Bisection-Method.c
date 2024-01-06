#include<stdio.h>                    /*including header files*/
#include<conio.h>
#include<math.h>
#define err 0.0005                    /*defining the error term*/
#define f(x) x*x*x-4*x-9             /*defining the function f(x)*/
void main()
{
int i=1;                     /*declaring variables*/
float x0,x1,x2;
double f0,f1,f2;
printf("\nEnter the value of x0: ");
scanf("%f",&x0);      /*generating input/output statements*/
printf("\nEnter the value of x1: ");
scanf("%f",&x1);
printf("\n---------------------------------------------------------------\n");
printf("\nIteration x0\t   x1\t   x2\t     f0\t     f1\t     f2\n");                       /*generating the tabular form*/
printf("\n-------------------------------------------------------------\n");
do                     /*initialization of do loop*/
{
f0=f(x0);
f1=f(x1);
x2=(x0+x1)/2;
f2=f(x2);       /*assigning of values*/
printf("\n%d\t%f %f %f %lf %lf %lf",i,x0,x1,x2,f0,f1,f2);      /*values of the process*/
if(f0*f2<0)     /*the main process*/
x1=x2;
else
x0=x2;
i++;
}while(fabs(x0-x1)>err);   /*check if the error term is met*/
printf("\n--------------------------------------\n");
printf("Approximate Root: %f",x2); /*final answer*/
getch();
}
