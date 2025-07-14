# include <stdio.h>
  int main (){
  int dim1,dim2;
  char choice;
  printf("S for square\n R for rectangle\n C for circle\n");
  printf("enter your choice");
  scanf("%c",&choice);

   switch (choice){
   case 'S' : printf("enter side:");
               scanf("%d",&dim1);
               printf("area square %d",dim1*dim1);
               break;

  case 'R':    printf("enter length and breadth:");
               scanf("%d%d",&dim1,&dim2);
               printf("area rectangle %d",dim1*dim2);
               break;
   case 'C' : printf("enter redius ");
               scanf("%d",&dim1);
               printf("area circle %lf",3.141*dim1*dim2);
               break;
   }
  }


