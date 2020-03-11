#include<stdio.h>
#include<math.h>
#define pi 3.142
void main()
{
int i, n;
float h, k, r, t, x[10], y[10];
printf("Enter no of points: ");
scanf("%d", &n);
printf("Enter co-ordinates of center: ");
scanf("%f%f", &h, &k);
printf("Enter radius of circle: ");
scanf("%f", &r);
x[0]=r*cos(t);
y[0]=r*sin(t);
printf("Initial points are: (%f,%f)\n", x[0]+h, y[0]+k);
for(i=0; i<n; i++)
{
t=(2*pi)/n;
x[i+1]=(x[i]*cos(t))-(y[i]*sin(t));
y[i+1]=(x[i]*sin(t))+(y[i]*cos(t));
}
printf("The points are: \n");
for(i=0; i<n; i++)
printf("(%f,%f)\t", x[i]+h, y[i]+k);
printf("\n");
}
