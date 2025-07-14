# include <stdio.h>
 int main (){
   char choice ;
   int categroy;
   double discount = 0;
   double price ;
   char student;

    printf("enter your choice 'm' for music concert,'c' for comedy: \n");
    scanf("%c",&choice);


    if(choice=='m'){
        printf("enter 1 for vip pass, 2 for regular,3 genral. \n");
        scanf("%d",&categroy);

          if(categroy==1){
              price=2000;
          }
           else if(categroy==2){
              price=1500;
           }
           else if(categroy==3){
               price=1000;
           }
           else  {
            printf("invalid input");
           }
      }
      else if(choice=='c'){
        printf("enter 1 for vip pass, 2 for regular,3 genral. \n");
        scanf("%d",&categroy);

          if(categroy==1){
           price=2000;
          }
           else if(categroy==2){
         price=2000;
           }
           else if(categroy==3){
         price=2000;
           }
           else  {
            printf("invalid input");
           }
      }

      printf("your are student 'y' for Yes and 'n' for No. \n");
      scanf(" %c", &student);

        if(student =='y'){
            discount=price*10.0/100.0;
        }
       printf(" final Price: %lf \n", price-discount);

        return 0;
 }

