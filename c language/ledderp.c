# include <stdio.h>
  int main(){
  double purchase,discount;

  printf("enter your purchase");
  scanf("%d",&purchase);

  if(purchase<100){
    printf("no discount");
  }
  else if(purchase>101 && purchase<500){
    printf("u have to discount 10%% \n");
     discount = purchase*10/100.0;
  }

  else if(purchase>501 && purchase<1000){
    printf("u have to discount 10%% \n");
     discount = purchase*10/100.0;

   }
  }
