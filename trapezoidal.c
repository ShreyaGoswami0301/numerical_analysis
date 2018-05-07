#include<stdio.h>
#include<math.h>

float f(float x)
{
    return ((x*x*x)+(x*x)+1);
}
int main()
{
    float x0, x1, h, y[20], x[20], s, ans;
    int i, n;
    printf("Provide the values for x0, x1 and n");
    scanf("%f %f %d", &x0, &x1, &n);
    h=(x1-x0)/n;
    printf("The values of Y=\n");
    for(i=0; i<=n; i++)
    {
        x[i]=h+x0*i;
        y[i]=x[i];
        printf("\n %7.5f",y[i]);
    }
    s=0.0;
    for(i=1; i<n; i++)
    {
        s=s+y[i];
    }
    
    ans=h/2*(y[0]+y[n]+(2*s));
    printf("The total number of iterations are %3d and the value of y=%7.5f", i, ans);
    
}
