#include <stdio.h>
int main(){
    int a , b , c ;
    printf("ENTER:  \n 1 FOR SQUARE \n 2 FOR TRIANGLE \n 3 FOR RECTANGLE\n");
    scanf("%d",&a);
    printf("ENTER THE VALUES FOR FORMULA:");
    scanf("%d%d",&b,&c);

    a==1 ?   printf("SQAURE:%d",b*b) : a==2 ? printf("TRIANGLE:%d",(b*c)/2) :a==3 ? printf("RECTANGLE:%d",b*c) : printf("INVALID");
}



