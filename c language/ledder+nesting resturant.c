# include <stdio.h>
   int main (){
    char choice;
   int number_person;
   double price;
   double tax;

   printf("enter your choice 'v' for veg or 'n' for non veg");
   scanf("%c",&choice);
   printf("how many person want to eat");
   scanf("%d",&number_person);

   if(choice=='v'){
        if(number_person<4 && number_person>0){
            price=200*number_person;
        }
        else if(number_person<4 ){
            price=180*number_person;



        }

   }

   else if(choice=='n'){

      if(number_person<4 && number_person>0){
            price=300*number_person;
        }
        else if(number_person<4 && number_person>0){
            price=270*number_person;

        }

   }

   else{
    printf("invalid choice");
   }

   printf("do you want to take beverage 'y' or 'n'");
   scanf("% c", &choice);
   printf("how many person want to drink");
   scanf("%d",&number_person);

   if(choice=='y'){
    price=price+(number_person*50);

   }
   else if(choice=='n'){
           price=price;
           }

   else {
    printf("invalid choice");
   }

   if(price>1000){
    tax=price*(10/100.0);

   }

   else{
    tax=price*(5/100.0);
   }
      printf("total service tax: %lf\n",tax);
      printf("total price: %lf",price+tax);
}
