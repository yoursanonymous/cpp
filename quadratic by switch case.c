#include <stdio.h>
#include<math.h>
int main()
{
    float x1,x2,a,b,c;
    int disc;
    printf("enter the values of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    disc=(b*b)-(4*a*c);
    switch(disc>0){
    case(1):
    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("root x1=%f,x2=%f",x1,x2);
    break;

    case(0):
    switch(disc<0){
    case(1):
    printf("the roots are imaginary\n");
    break;
    case(0):
    x1=((-1)*b)/(2*a);
    printf("both roots are equal & root is:%f",x1);
    break;
    }
    }
    return 0;
}
