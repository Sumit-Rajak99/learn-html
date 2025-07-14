
#include <stdio.h>

int main() {
char choice;
int categroy;

printf("enter i for international\n d for domestick");
scanf("%c",&choice);

if(choice=='i'){
    printf("enter 1 for ns or 2 for wi 3 for sa");
    scanf("%d",&categroy);

    if(categroy==1){
        printf("price=10000");
    }
    else if(categroy==2){
        printf("price=20000");

    }
    else if (categroy==3){
        printf("price=30000");
    }
    else{
        printf("invalid");
    }
}
 else if(choice=='d'){
    printf("enter 1 for india or 2 for pakistan 3 for bangladesh");
    scanf("%d",&categroy);

    if(categroy==1){
        printf("price=100000");
    }
    else if(categroy==2){
        printf("price=20");

    }
    else if (categroy==3){
        printf("price=30000");
    }
    else{
        printf("invalid");
    }
}
else{
    printf("invalid");
}
    return 0;
}
