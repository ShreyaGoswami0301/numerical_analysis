#include<stdio.h>
#include<math.h>
float f(float x){
    return(x*x*x-(3*x)+1.06);
}

void regula(float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
    *x= x1-(((x1-x0)*fx1)/(f(x1)-f(x0)));
    ++(*itr);
    printf("The number of iterations X%3d= %7.5f",*itr, *x);

}

int main()
{
    float x0, x1, x2, x3, aler;
    int itr=0, maxitr;
    printf("Enter the value of x0, x1, maximum number of iteratons and allowed error=");
    scanf("%f %f %d %f", &x0, &x1, &maxitr, &aler);
    regula(&x2, x0, x1, f(x0), f(x1), &itr);
    do{
        if(f(x0)*f(x2)<0)
            x0=x2;
        else
            x1=x2;
        regula(&x3,x0, x1, f(x0), f(x1), &itr);
        if(fabs(x3-x2)<aler){
            printf("Total number of iterations %d, root=%6.4f", itr, x3 );
            return 0;
        }
        x2=x3;
    }while(itr<maxitr);
    printf("This solution does not converge or there are not sufficient iterations");
    return 1;
    
}
