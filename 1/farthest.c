#include<stdio.h>
#include<math.h>
void main()
{
float x[20], y[20], d[20][20], dmin, dmax;
int i, j, n;
printf("Enter the no of co-ordinates: \n");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
printf("Enter the co-ordinates: \n");
scanf("%f%f", &x[i], &y[i]);
}
for(i=1; i<=n; i++)
{
for(j=i+1; j<=n; j++)
{
d[i][j]=sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
printf("\n\n Distance between (%4f,%4f)&(%4f,%4f)", x[i], y[i], x[j], y[j], d[i][j]);
}
}
dmin=dmax=d[1][2];
for(i=1; i<=n; i++)
{
for(j=i+1; j<=n; j++)
{
if(dmin>d[i][j])dmin=d[i][j];
else
if(dmax<d[i][j])
dmax=d[i][j];
}
}
for(i=0; i<n; i++)
{
for(j=i+1; j<=n; j++)
{
if(dmax==d[i][j])
printf("\n\n The point (%4f,%4f)&(%4f,%4f) are farthest apart. \n", x[i], y[i], x[j],
y[j]);
else
if(dmin==d[i][j])
printf("\n\n The point (%4f,%4f)&(%4f,%4f) are nearest \n", x[i], y[i], x[j], y[j]);
}
}
}
