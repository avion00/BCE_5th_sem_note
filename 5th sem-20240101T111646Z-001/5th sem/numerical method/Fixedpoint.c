#include<conio.h>
#include<stdio.h>
#include<math.h>
#define g(x) (exp(-x))
#define gd(x) -(exp(-x))
#define e 0.0001
int main(void)
{
float x0,x1,f1, error ;
int i=1;
printf("Using Fixed Point Method / Iterative Method to find root of exp(-x)-x=0\n");
printf("Enter value for x0\n");
printf("x0: ");
scanf("%f",&x0);
 if(fabs(gd(x0))>1)
 {
                        printf("\nThe equation is not convergent");
                        goto c;
 }
 else
{
printf("steps \tx0  \tx1=g(x0) \tError\n");
printf("\n-------------------------------------------\n");
b:x1=g(x0);
 error=fabs(x1-x0);
printf("%d \t%.6f \t%.6f \t%.6f\n",i,x0,x1,error);
i++;
}
if(fabs((x1-x0))<=e)
{
printf("\n===========================================\n");
printf("The root is %.6f",x0);
goto c;
}
else
{
x0=x1;
goto b;
}
c:
getch();
}
