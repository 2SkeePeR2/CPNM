#include<stdio.h>
#define PI 3.14159265358979323846

int arearec(int x,int y){
    return x*y;
}

int perirec(int x, int y){
    return 2*(x+y);
}

float areacir(int r){
    return PI*r*r;
}

int main(){
    int l,b,r;
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    int reca = arearec(l,b);
    int recp = perirec(l,b);
    float cira = areacir(r);
    printf("The area of rectangle is %d and it's perimeter is %d\n", reca, recp);
    printf("The area of circle is %.2f", cira);
    return 0;
}