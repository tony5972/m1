#include<stdio.h>
void main()
{
int i, n;
float x[10], y[10], x1, x2, y1, y2, m, c;
printf("ENter no of points : ");
scanf("%d",&n);
printf("Enter %d points : \n", n);
for(i=1; i<=n; i++)
scanf("%f%f", &x[i], &y[i]);
printf("Points entered are : ");
for(i=1; i<=n; i++)
printf("(%f%f)\t", x[i], y[i]);
printf("\n Enter point A : ");
scanf("%f%f", &x1, &y1);
printf("\n Enter point B : ");
scanf("%f%f", &x2, &y2);
printf("Point A : (%f,%f)\n Point B : (%f,%f)\n", x1, y1, x2, y2);
if(x2-x2==0)
{
for(i=1; i<=n; i++)
{
if(x[i]==x1)
printf("Point(%f,%f) lies on the line \n", x[i], y[i]);
else
printf("Point (%f,%f) does not lie on the line \n", x[i], y[i]);
}
}else
{
m=(y2-y1)/(x2-x1);
c=y1-(m * x1);
printf("Slope of line : %f\n Y intersept %f \n", m, c);
for(i=1; i<=n; i++)
{
if(y[i]==(m*x[i])+c)
printf("Point (%f,%f) lies on the line \n", x[i], y[i]);
printf("Point (%f,%f) does not lie on line \n", x[i], y[i]);
}
}
}
