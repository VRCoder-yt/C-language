#include <stdio.h>
int main()
{
    int length, breadth, area;

    printf("Enter lenghth of a rectangle : ");
    scanf("%d", &length);

    printf("Enter breadth of a rectangle : ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("area of rectangle is : %d", area);
    return 0;
}