#include<stdio.h>
#include<math.h>
void main()
{
int i, n, j, m, po, ne, ze;
float x[10], y[10], zx, zy, cr;
printf("Enter no of vertices: ");
scanf("%d", &n);
printf("Enter co-ordinatesn of vertices: \n");
for(i=0; i<n; i++)
{
scanf("%f,%f", &x[i], &y[i]);
}
printf("Enter no of points to check: ");
scanf("%d", &m);
for(j=0; j<m; j++)
{
po=0; ne=0; ze=0;
printf("Enter vertices of points: \n");
scanf("%f%f", &zx, &zy);
for(i=0; i<n; i++)
{
cr=((zx-x[i])*(zy-y[i+1])-(zx-x[i+1])*(zy-y[i]));
if(cr>0)
po=po+1;
else if(cr<0)
ne=ne+1;
else
ze=ze+1;}
if(po==n||ne==n)
printf("Point (%f,%f) lies inside polygon \n", zx, zy);
else if(po+ze==n || ne+ze==n)
printf("Point (%f,%f) lies on polygon \n", zx, zy);
else
printf("Point (%f,%f) lies outside polygon \n", zx, zy);
}
}
