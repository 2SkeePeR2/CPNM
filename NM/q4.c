#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void jacobi(){
    float a[20][20], x[20], e, big, temp, relerror, sum;
    int n, i, j, maxit, itr;
    char ch;
    printf("\n\nENTER THE SIZE OF THE EQUATION :: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n\nEnter the coefficints of  equation %d and RHS \n", i);
        for (j = 1; j <= n + 1; j++)
            scanf("%f", &a[i][j]);
    }
    printf("\n\nEnter relative error and number of iteration ::  \n");
    scanf("%f%d", &e, &maxit);
    for (i = 1; i <= n; i++)
        x[i] = 0;
    for (itr = 1; itr <= maxit; itr++)
    {
        big = 0;
        for (i = 1; i <= n; i++)
        {
            sum = 0;
            for (j = 1; j <= n; j++)
            {
                if (i != j)
                    sum = sum + a[i][j] * x[j];
            }
            temp = (a[i][n + 1] - sum) / a[i][i];
            relerror = fabs((x[i] - temp) / temp);
            if (relerror > big)
                big = relerror;
            x[i] = temp;
        }
        if (big <= e)
        {
            printf("Converges to a solution in %d iterations\n", itr);
            for (i = 1; i <= n; i++)
                printf("\n%.4f\t", x[i]);
            getch();
            exit(1);
        }
    }
    printf("does not converge in %d iteration \n", maxit);
    getch();
}

void gaussElimination(){
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
        printf("\nx%d=%f\t",i,x[i]);
    }
}

double gaussEliminationWithPivot(int m, int n, double a[m][n]){
    int i,j,k;
    for(i=0;i<m-1;i++){
        for(k=i+1;k<m;k++){
            double  term=a[k][i]/a[i][i];
            for(j=0;j<n;j++){
                a[k][j]=a[k][j]-term*a[i][j];
            }
        }
    }
}

void readMatrix(int m, int n, double matrix[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%lf",&matrix[i][j]);
        }
    } 
}

void printMatrix(int m, int n, double matrix[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%lf\t",matrix[i][j]);
        }
        printf("\n");
    } 
}

void copyMatrix(int m, int n, double matrix1[m][n], double matrix2[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matrix2[i][j]=matrix1[i][j];
        }
    } 
}

void gep(){
    int m,n,i,j;
    printf("Enter the size of the matrix:\nNo. of rows (m)\n");
    scanf("%d",&m);
    printf("No.of columns (n)\n");
    scanf("%d",&n);
    double a[m][n];
    double U[m][n];
    printf("\nEnter the elements of matrix:\n");
    readMatrix(m,n,a);
    copyMatrix(m,n,a,U);
    gaussEliminationWithPivot(m,n,U);
    printf("\nThe Upper Triangular matrix after Gauss Eliminiation is:\n\n");
    printMatrix(m,n,U);
}

int main(){
    int num;
    printf("Enter 1 for jacobi's iterative method\nEnter 2 for gauss elimination method\nEnter 3 for gauss elimination with pivot\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        jacobi();
        break;

    case 2:
        gaussElimination();
        break;
    
    case 3:
        gep();
        break;
    
    default:
        printf("Wrong input\n");
        break;
    }
    return 0;

}