#include<stdio.h>


float f(float x)
{
    return (1/(1+x));
}

int main()
{
    float x0, x1, h, s0, s1, y[20], x[20], ans;
    int i, n;
    printf("Enter the values of x0, x1, and n");
    scanf("%f %f %d", &x0, &x1, &n);
    h=(x1-x0)/n;
    if(n%2==1){
        n=n+1;
    }
    h=(x1-x0)/n;
    printf("Refined value of n= %3d and h= %7.5f",n, h);
    printf("The values of Y:\n");
    for(i=0; i<=n; i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);
        printf("%7.5f\n", y[i]);
    }
    s0=0;
    s1=0;
    for(i=1;i<n;i++){
        if(i%2==1)
        {
            s0=s0+y[i];
        }
        else{
            s1=s1+y[i];
        }
    }
    ans=h/3*(y[0]+y[n]+(4*s0)+(2*s1));
    printf("/n The answer is= %7.5f",ans);
   
    
    
}
