#include<stdio.h>
int main()
{
    int a,b,res,choice;
    printf("=====BITWISE OPERATIONS=====\n");
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("\n-----MENU-----\n");
    printf("1.bitwise AND(&)\n");
    printf("2.bitwise OR(|)\n");
    printf("3.bitwise XOR(^)\n");
    printf("4.bitwise NOT(~)\n");
    printf("5.left shift(<<)\n");
    printf("6.right shift(>>)\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case1:
            res=a&b;
            printf("bitwise And result=%d",res);
            break;
        case2:
            res=a|b;
            printf("bitwise OR result=%d",res);
            break;
        case3:
            res=a^b;
            printf("bitwise XOR result=%d",res);
            break;
        case4:
            res=~a;
            printf("bitwise NOT result=%d",res);
            break;
        case5:
            res=a<<b;
            printf("left shift result=%d",res);
            break;
        case6:
            res=a>>b;
            printf("right shift result=%d",res);
            break;
        default:
            printf("invalid choice,");
        }
            return 0;
    } 





     
