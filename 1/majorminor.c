#include<stdio.h>
#include<math.h>
#define pi 3.142
void main()
{
int i, n;
float h, k, a, b, t, x[10], y[10];
printf("Enter no of points: ");
scanf("%d", &n);
printf("Enter co-ordinates of center: ");
scanf("%f%f", &h, &k);
printf("Enter length of semimajor & semiminor axis: ");
scanf("%f%f", &a, &b);
t=(2*pi)/n;
x[0]=a*cos(t);
y[0]=b*sin(t);
printf("Initial points are (%f,%f)\n", x[0]+h, y[0]+k);
for(i=0; i<n; i++)
{
x[i+1]=(x[i]*cos(t))-(y[i]*(a/b)*sin(t));
y[i+1]=((b/a)*x[i]*sin(t))+(y[i]*sin(t));
}
printf("The points are: \n");
for(i=0; i<n; i++)
printf("(%f,%f)\t", x[i]+h, y[i]+k);
printf("\n");
}
