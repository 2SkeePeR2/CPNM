#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20
#define SIZE 10
int main()
{
	int c;
	printf("Enter 1 to solve the equation with Gauss-Elimination Method \n");
	printf("Enter 2 to solve the equation with Jacobi Method \n");
	printf("Enter 3 to solve the equation with Gauss-Jordan Method \n");
	scanf("%d",&c);
	switch(c){
		case 1:{
			int i,j,k,n;
    float A[20][20],c,x[10],sum=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1; j<=n; j++) 
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\t",i,x[i]); /* x1, x2, x3 are the required solutions*/
    }
    
			break;
		}
		case 2:{
			float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;
 printf("Enter tolerable error:\n");
 scanf("%f", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

			break;
		}
		case 3:{
			float a[SIZE][SIZE], x[SIZE], ratio;
		 int i,j,k,n;
		 /* Inputs */
		 printf("Enter number of unknowns: ");
		 scanf("%d", &n);
		 /* 2. Reading Augmented Matrix */
		 printf("Enter coefficients of Augmented Matrix:\n");
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n+1;j++)
			  {
				   printf("a[%d][%d] = ",i,j);
				   scanf("%f", &a[i][j]);
			  }
		 }
	
		 for(i=1;i<=n;i++)
		 {
			  if(a[i][i] == 0.0)
			  {
				   printf("Mathematical Error!");
				   break;
			  }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];
					    for(k=1;k<=n+1;k++)
					    {
					     	a[j][k] = a[j][k] - ratio*a[i][k];
					    }
				   }
			  }
		 }
		 /* Obtaining Solution */
		 for(i=1;i<=n;i++)
		 {
		  	x[i] = a[i][n+1]/a[i][i];
		 }
		 /* Displaying Solution */
		 printf("\nSolution:\n");
		 for(i=1;i<=n;i++)
		 {
		  	printf("x[%d] = %0.3f\n",i, x[i]);
		 }
			break;
		}
		default:{
			printf("Invalid Choice!\n");
			break;
		}
	}
    return(0);
}
