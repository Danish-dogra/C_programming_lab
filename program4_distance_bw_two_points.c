//Program to find the Euclidean distance between two points in a plane.

#include<stdio.h>
#include<math.h>

int main(){

    int x1,y1,x2,y2;

    printf("Enter the co-ordinates of first two points: \n");
    scanf("%d%d",&x1,&y1);

    printf("Enter the co-ordinates of second two points: \n ");
    scanf("%d%d",&x2,&y2);

    double d= sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));

    printf("The distance between two points is : %1f",d);



    return 0;
}
