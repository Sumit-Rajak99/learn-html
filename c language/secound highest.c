# include <stdio.h>
   int main(){
   int n1,n2,n3;
   printf("enter 3  digit number");
   scanf("%d%d%d",&n1,&n2,&n3);

   if(n1>n2 && n1>n3){
     printf("%d is highest\n",n1);
   }
    else {
        printf("%d is second highest\n",n3);
    }

   }
