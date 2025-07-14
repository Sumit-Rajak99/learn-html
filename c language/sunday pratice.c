# include <stdio.h>
  int main(){
   char choice;
   int categroy;
   int discount;

   printf("enter your choice 'm' for music concert or 'c' for comedy");
   scanf("%c",&choice);

   if(choice='m'){

      printf("enter 1 for vip pass, 2 for regular, 3 for genral");
      scanf("%d",&categroy);

     if(categroy='1'){
        printf("price=2000");

     }
     else if(categroy='2'){
        printf("price=1000");
     }
     else if(categroy='3'){
        printf("price=500");
     }
     else{
        printf("invalid input");
     }

   }
 else if(choice='c'){

      printf("enter 1 for vip pass, 2 for regular, 3 for genral");
      scanf("%d",&categroy);

     if(categroy='1'){
        printf("price=1500");

     }
     else if(categroy='2'){
        printf("price=800");
     }
     else if(categroy='3'){
        printf("price=400");
     }
     else{
        printf("invalid input");
     }
   }
   else{
        printf("invalid input");
     }

  }
