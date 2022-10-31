//area of rectangle and circle(e)
#include<stdio.h>
int main()
{
    float length,breadth,rarea,rperi;
    //for the rectangle 
    printf("ENTER THE LENGTH OF RECTANGLE : ");
    scanf("%f",&length);
    printf("ENTER THE BREDATH OF THE RECTANGLE : ");
    scanf("%f",&breadth);
    rperi = 2*(length+breadth);
    rarea = length*breadth;
    printf("THE PERIMETER TOF THE RECTANGLE IS : %f \n",rperi);
    printf("THE AREA OF THE RECTANGLE IS : %f \n",rarea);
    //now for the circle
    float radius,cir,area;
    const float pi=3.14;
    printf("ENTER THE RADII OF THE CIRCLE ");
    scanf("%f",&radius);
    //now circumference 
    cir= 2*pi*radius;
    area= pi*radius*radius;
    printf("THE AREA OF THE CIRCLE IS ; %f \n",area);
    printf("THE CIRCUMFERENCE OF THE CIRCLE IS  : %f \n",cir);
    return 0;
}
