# include <stdio.h>
  int main(){
  char choice;
  int categroy;
  double price;

  printf("enter choice 'm' for monthly,'a' for annual");
  scanf("%c",&choice);

    if(choice=='m'){

        printf("enter 1 for premium,2 for standard,3 for basic");
        scanf("%d",&categroy);

        if(categroy==1){
            price= 2000;
        }
        else if(categroy==2){
            price= 1500;
        }
        else if(categroy==3){
          price= 2000;
        }
        else{
        printf("invalid input");
        }
        printf("you want a personal trainer: 'y' or 'n' \n");
        scanf(" %c",&choice);
        if(choice=='y')
           {
               price=price+500;
           }
        else if(choice=='n')
           {
               price=price;
           }
        else {
        printf("invalid input");

              }


    }
    else if(choice=='a'){
        printf("enter 1 for premium,2 for standard,3 for basic");
        scanf("%d",&categroy);
        if(categroy==1){
            price= 20000;
        }
        else if(categroy==2){
           price= 15000;
        }
        else if(categroy==3){
        price= 10000;
        }
      else {
        printf("invalid input");

         }
        printf("you want a personal trainer: 'y' or 'n' \n");
        scanf(" %c",&choice);
        if(choice=='y')
           {
               price=price+5000;
           }
        else if(choice=='n')
           {
               price=price;
           }
        else {
        printf("invalid input");

              }

    }


    printf("%lf",price);

  }
