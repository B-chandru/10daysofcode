#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,row,col;
scanf("%d",&num);
for( row=1; row<=num;row++,printf("\n")){
    for(col=1;col<=num;col++){
        if(row==col || row+col == num ){
            printf("* ");
        } else{
         printf(" ");

        }
    }
        for(col=1;col<=num;col++){
        if(row==col || row+col == num ){
            printf("* ");
        } else{
         printf(" ");

        }
    }

}
    return 0;
}
