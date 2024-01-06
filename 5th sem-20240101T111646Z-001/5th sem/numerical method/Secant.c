#include<stdio.h>
float f(float x)
{
    return(x*x*x-8*x-5); // f(x)= x^3-8x-5
}
float main()
{
    float x0,x1,x2,err;
    int count=1,itr;
    printf("\n\nEnter the values of x0 and x1:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&x0,&x1);
    printf("Enter the values of allowed error and maximun number of iterations:\n");
    scanf("%f %d",&err,&itr);
    do
    {
        if(f(x0)==f(x1))
        {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
        return;
        }
        x2=(x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        x0=x1;
        x1=x2;
        printf("Iteration No-%d    x=%f\n",count,x2);
        count++;
        if(count==itr)
        {
        break;
        }
    } while(fabs(f(x2))>err);
    printf("\n The required solution is %.4f\n",x2);

}
