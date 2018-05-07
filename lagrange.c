#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j;
    float x[20], y[20], d[20], a[20][20], u=1.0, s=0.0;
printf("----------Output----------");
printf("The total given data:");
    scanf("%d", &n);
    printf("/n /n Enter the values of x[i] and y[i]");
    for(i=0; i<n; i++)
    {
        printf("\n Enter the values of x[i] and y[i]");
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
        
    }
    printf("Enter the interpolating point:");
    scanf("%f", &x[0]);
    for(i=1; i<=n; i++)
    {
        d[i]=1.0;
        for(j=1;j<=n;j++)
        {
            if(j==i)
                a[i][j]=x[0]-x[j];
            else
                a[i][j]=x[i]-x[j];
            d[i]=d[i]*a[i][j];
            
                
            
        }
        
        s=s+y[i]/d[i];
        u=u*a[i][i];
        
    }
    printf("\n y(%f)=%f", x[0], u*s);
}


