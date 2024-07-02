#include<stdio.h>
int main()
{
    char x[] = "durgaprasad";
    char *ptr = x;
    printf("%c",*ptr);
    printf("%c",*(ptr++ +1));
    printf("%c",*((ptr-- +5)-1)+3);
    printf("%c",*(++ptr + 1)-5);
    printf("%c%c%c",*ptr,*++ptr,*--ptr);



return 0;
}
