# include <stdio.h>
   int main (){
    char choice;
    int categroy;

    printf("enter your choice 'm' for monthly or 'a' for annual ");
    scanf("%c",&choice);

      if(choice='m'){
        printf("enter 1 for premium, 2 for Standard ,3 for basic");
        scanf("%d",&categroy);


        if(categroy='1'){
         printf("price=2000");
      }
        if(categroy='2'){
        printf("price=1500");
       }
       else if(categroy='3'){
        printf("price=1000");
       }
   }
 else if(choice='a'){
        printf("enter 1 for premium, 2 for Standard ,3 for basic");
        scanf("%d",&categroy);


        if(categroy='1'){
         printf("price=20000");
      }
        if(categroy='2'){
        printf("price=15000");
       }
       else if(categroy='3'){
        printf("price=10000");
       }
   }
   }
