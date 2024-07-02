#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,result;
    char operator;


    printf("enter the arthmetic operator to use a caluclation");
    scanf("%c",&operator);

    printf("enter a and b numbers");
    scanf("%d%d",&a,&b);

    switch(operator)
    {
        case '+':
                    result = a + b;
                    break;
        case '-':
                    result = a - b;
                    break;
        case '*':
                   result = a * b;
                    break;
        case '/':
                    result = a / b;
                    break;
        case '%':
                   result = a % b;
                    break;
        default :
                    printf("invalid operator");


    
     printf("result is %d",result);
	}

return 0;
}

