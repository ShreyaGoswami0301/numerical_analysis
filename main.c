#include<stdio.h>
#include<math.h>
 int main()
{
    int n, i, j;
    float x[10], y[10], f[10][10], X, h, u, s=0.00, p=1.00;
    printf("---------Output----------");
    printf("Enter the value of number - 1");
    scanf("%d", &n);
    for(i=0;i<=n; i++){
        printf("Enter the values of x[i] and y[i] respectively");
        scanf("%f",&x[i]);
        scanf("%f",&y[i]);
        
    }
    printf("Enter the value of X for which you would like to find the value of y");
    scanf("%f",&X);
    h=x[1]-x[0];
    u=(X-x[0])/h;
    s=y[0];
    for(j=0; j<=n; j++)
        f[0][j]=y[j];
    for(i=1; i<=n; i++){
        for(j=0; j<=n-i; j++)
            f[i][j]=f[i-1][j+1]-f[i-1][j];
        
        
    }
    for(i=1; i<=n; i++)
    {
        p=p*(u-i+1)/i;
        s=s+p*f[i][0];
    }
    printf("\n y(%f)=%f\n", X, s);
    
    
    
    
    
}


