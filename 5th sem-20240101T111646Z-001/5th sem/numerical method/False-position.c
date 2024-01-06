#include<stdio.h>
#include<conio.h>
#include<math.h>            /*included header files*/
#define esp 0.0001          /*defining error term*/
#define f(x) x*x*x-2*x-5   /*defining the function*/
void main()
{
 float x0,x1,x2,f1,f2,f0;
 int count=1;
 do
 {
  printf("\n Enter the value of x0: ");
  scanf("%f",&x0);           /*loop to get x0*/
 }while(f(x0)>0);
 do
 {
   printf("\n Enter the value of x1: ");
   scanf("%f",&x1);          /*loop to get x1*/
 }while(f(x1)<0);
 printf("\n ****************************************************** \n");
 printf("  n  x0\t    x1\t       x2\t       f0\t       f1\t        f2");
 printf("\n ****************************************************** \n");                 /*formatting the output*/
 do
 {
  f0=f(x0);
  f1=f(x1);
  x2=x0-((f0*(x1-x0))/(f1-f0));         /*working formula loop*/
  f2=f(x2);
  printf("\n %d  %f  %f  %f  %f  %f  %f",count,x0,x1,x2,f0,f1,f2);
  if(f0*f2<0)
  x1=x2;
  else
  x0=x2;
  count++;
 }while(fabs(f2)>esp);
 printf("\n ****************************************************** \n");
 printf("\n\n Approximate Root = %f",x2);  /*final answer*/
 getch();
}
