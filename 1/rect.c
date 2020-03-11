#include<stdio.h>
void main()
{
int i, n, x[10], y[10], x1, x2, y1, y2;
printf("Enter no of points: ");
scanf("%d", &n);
printf("Enter %d points: \n", n);
for(i=1; i<=n; i++)
scanf("%d%d", &x[i], &y[i]);
printf("Points entered are: \n");
for(i=1; i<=n; i++)
printf("(%d,%d)\t", x[i], y[i]);
printf("\n Enter point A: ");
scanf("%d%d", &x1, &y1);
printf("\n Enter point B: ");
scanf("%d%d", &x2, &y2);
printf("Point A: (%d,%d)\n Point B: (%d,%d)\n", x1, y1, x2, y2);
for(i=1; i<=n; i++)
{
if(((x1<x[i])&&(x[i]<x2))&&((y1<y[i])&&(y[i]<y2)))
printf("Point (%d,%d) lies inside the rectangle \n", x[i], y[i]);
else
if((((x[i]==x1)||(x[i]==x2))&&((y1<=y[i])&&(y[i]<=y2)))||(((x1<=x[i])&&(x[i]<=x2))&&((y[i]=y1)||(y
[i]==y2))))
printf("Point (%d,%d) lies on rectangle \n", x[i], y[i]);
else
printf("Point (%d,%d) lies out side the rectangle. \n", x[i], y[i]);
}}
