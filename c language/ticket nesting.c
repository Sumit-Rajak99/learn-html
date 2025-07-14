# include <stdio.h>
  int main(){
   char choice;
   int category;
   double discount;
   char student;
   printf("please make choice 'm' for music concert\n or 'c' for comedy\n");
   scanf("%c",&choice);

  if(choice=='m'){
    printf("enter 1 for Vip pass,2 for regular,3 for genral");
    scanf("%d",&category);
       if(category==1){
        printf("2000");
       }
       else if(category==2){
        printf("1000");
       }
       else if(category==3){
        printf("500");
       }
          else {
            printf("invalid input");

        }
  }

  else if(choice=='c'){

    printf("enter 1 for vip, 2 for regural ,3 for genral");
    scanf("%d",&category);

       if(category==1){
        printf("1500");
       }
       else if(category==2){
        printf("800");
       }
       else if(category==3){
        printf("400");
       }
      else{
            printf("invalid input");
          }
    }
  }

