#include<stdio.h>
#include<math.h>
float fun(float x)
{
    return(x*x*x-(3*x)+1.06);
}
void bisection(float *x, float a, float b, int *itr)
{
    *x=(a+b)/2;
    ++(*itr);
    printf("The number of iterations X%3d=%7.5f\n \n", *itr, *x);
}
int main()
{
    int maxitr, itr=0;
    float a, b, x, x1, aler;
    printf("Enter the value of a, b, maximum number of iterations and allowed number of errors=");
    scanf("%f %f %d %f",&a, &b, &maxitr, &aler);
    bisection(&x, a, b, &itr);
    do{
        if(fun(a)*fun(x)<0)
            a=x;
        else
            b=x;
        bisection(&x,a, b, &itr);
        if(fabs(x1-x)<aler)
        {
            printf("The number of iterations are %d and root is %6.4f", itr, x1);
            return 0;
        }
        x1=x;
    
    }while(itr<maxitr);
        printf("the solution does not converge or iterations are not sufficient");
        return 1;
}
    
    
    
            
            
            
        
    
    
    

