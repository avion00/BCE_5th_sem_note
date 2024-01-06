#include<stdio.h>
#include<conio.h>
#include<math.h>                  /*header files included*/
float f(float x)                  /*declaring the function f(x)*/
{
 float y;
 y=x*x+2*x-2;
 return y;
}
float f1(float x)                 /*declaring the function f'(x)*/
{
 float z;
 z=2*x+2;
 return z;
}
void main()
{
 int n=0;
 float x0,xn,err=1,h;
 printf("\nEnter the initial value of x = ");       /*asking for the intial value of x*/
 scanf("%f",&x0);
 printf("\n n\t xn \t\t f(xn)\t\t f'(xn)\t\tx(n+1)\n");    /*designing the table*/
 while(fabs(err)>.0005)
 {
  h=-(f(x0)/f1(x0));                    /*working formula*/
  xn=x0+h;
  err=xn-x0;
  printf("\n %d\t %.10f\t %.10f\t %.10f\t %.10f\n",n,x0,f(x0),f1(x0),xn);     /*formatting values in output*/
  x0=xn;
  n++;
 }
 printf("\n One real root of the given equation is %.5f (correct upto 5 decimal places)",xn);        /*printing the final answer*/
 getch();
}
