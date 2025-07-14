# include <stdio.h>
  int main (){
   char choice;
   int categroy;

   printf("enter your choice 's' for sedan, 'c' for suv");
   scanf("%c",&choice);

   if(choice=='s'){
    printf("enter 1 for 1 day,2 for 1 week");
    scanf("%d",&categroy);

       if(categroy==1){
       printf("2000");
   }
      else if(categroy==2){
        printf("12000");
      }
      }


  else if (choice=='c');
        printf("enter 1 for 1 day,2 for 1 week");
        scanf("%d",&categroy);

        if(categroy==1){
         printf("3000");
        }
        else if(categroy==2){
            printf("18000");
        }


  }
