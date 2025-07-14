# include <stdio.h>
int main(){
  float a,b,h;
  printf("enter \n 1 for square\n 2 for triangle\n 3 for rectangle");
scanf("%f",&a);
a==1 ?
(
printf("enter the value for formula"),
scanf("%f",&b),
printf("square%f",b*b)
):
a==2 ?
(
printf("enter the value for formula"),
scanf("%f",&b,&h),
printf("triangle%f",(b+h)/2)
):
a==3 ?
(
printf("enter the value for formula"),
scanf("%f",&b,&h),
printf("rectangle%f",b*h)
):
printf("invalid input");



}
