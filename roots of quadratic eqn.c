#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,imaginary,discriminant;

    printf("enter a,b,c vales for (ax^2+bx+c=0)");
    scanf("%f%f%f",&a,&b,&c);

    discriminant = (b*b) - (4*a*c);

    if(discriminant >0)
    {
            root1 = (-b + sqrt(discriminant))/ (2*a);
            root2 = (-b - sqrt(discriminant))/(2*a);
             printf("two roots are real %f %f",root1,root2);

    }
    else if(discriminant == 0)
    {
            root1 = root2 = -2/(2*a);
            printf("two roots are equal %f %f",root1,root2);

    }

    else (discriminant <0)
    {
            root1 = root2 =-b/(2*a);
         imaginary = sqrt(-discriminant) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                root1, imaginary, root2, imaginary);
    }
return 0;
}
