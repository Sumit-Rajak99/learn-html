# include <stdio.h>
   int main(){
  char choice;
  int category;
  int price=5000;
  printf("make your choice\n");
  printf("type 'D' for domestic\n 'N' for international\n");
  scanf("%c",&choice);
  if(choice=='D'){

    printf("enter 1 for 3 days\n ,2 for 7 days");
    scanf("%d",&category);}
    if(category==1){
    printf("price=5000RS");

  if (category==2){
 printf("price=8000Rs");

}

  }

  else if(choice=='N'){
    printf("enter '1' for 3 day\n,2 for 7 days");
    scanf("%d",&category);

    if(category==1){
       printf("price=20000Rs");

        }
    else if(choice==2){
     printf("price=35000Rs");

 }
    else{
    printf("invalid input");
 }

}     else {
    printf("invalid input");
}
 }

