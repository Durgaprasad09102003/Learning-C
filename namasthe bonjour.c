#include<stdio.h>
void namasthe();
void bonjour();

int main()
{
    char ch;

    printf("enter f for  french or i for indian");
    scanf("%c",&ch);

    if(ch == 'i')
    {
        namasthe();
    }

    else if(ch == 'f')
    {
        bonjour();

    }
    else
    printf("incorrent input");
return 0;
}

void namasthe()
{
    printf("\n namasthe");

}

void bonjour()
{
    printf("\n bonjour");
}
