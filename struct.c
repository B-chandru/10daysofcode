#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct details
    {
      char name[10];
      int age;
    };
    
    struct details sheet;
    
    printf("\nEnter your Name :");
    scanf("%s",sheet.name);
    printf("Enter your age :");
    scanf("%d",&sheet.age);
    printf("hi %s",sheet.name);
    if(sheet.age <18)
    {
        printf (" you can't access the details bcoz ur age is less then 18 :< ");
    }else{
     printf(" access granted :)");
    }
    return 0;
}
