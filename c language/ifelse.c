# include <stdio.h>
int main(){
  int year;
  double salary,bonus;
  printf("enter your salary");
  scanf("%lf",&salary);
  printf("enter your year");
  scanf("%d",year);

  if(year>5){
    bonus=salary*5.0;
    printf("your salary is %d");
  }
else{
    printf("your not eligible for bonus");
}

}
