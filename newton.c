#include<stdio.h>
#include<math.h>
float f(float x)
{
    return ((x*x*x)-(3*x)+1.06);
}
float fd(float x)
{
    return ((3*x*x)-(3*x));
}

int main()
{
    int itr, maxitr;
    float x0, x1, aler, h;
    printf("\nEnter the value of x0, maximum number of iterations and allowed errors=");
    scanf("%f %d %f", &x0, &maxitr, &aler);
    for(itr=1; itr<=maxitr; itr++)
    {
        h=f(x0)/fd(x0);
        x1=x0-h;
        printf("The iteration number %3d x produces %7.5f \n",itr, x1);
        if(fabs(h)<aler)
        {
            printf("The total number of iterations are %3d and the root= %7.5f \n", itr, x1);
            return 0;
        }
        
            x0=x1;
            
    }
        printf("The no of iterations are not sufficient");
        return 1;
    }
    

