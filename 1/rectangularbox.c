# include<stdio.h>
void main()
{
int x[10],y[10],z[10],a[20],b[20],c[20];
int i,n,j,xmax=0,ymax=0,zmax=0,xmin=1000,ymin=1000,zmin=1000;
printf("enter vertices of rectangular box:\n");
for(i=0;i<8;i++)
scanf("%d%d%d",&x[i],&y[i],&z[i]);
for(i=0;i<8;i++)
{
if (x[i]>xmax)
xmax=x[i];
if (x[i]<xmin)
xmin=x[i];
if (y[i]>ymax)
ymax=y[i];
if (y[i]<ymin)
ymin=y[i];
if (z[i]>zmax)
zmax=z[i];
if (z[i]<zmin)
zmin=z[i];
}
printf("enter no of point to de sort:");
scanf("%d",&n);
printf("enter coordinate of point:\n");
for(i=0;i<n;i++)
scanf("%d%d%d",&a[i],&b[i],&c[i]);
for(i=0;i<n;i++){
if((xmin<a[i])&&(a[i]<xmax)&&(ymin<b[i])&&(b[i]<ymax)&&(zmin<c[i])&&(c[i]<zmax))
printf("\n the point (%d,%d,%d) lies inside the rectangular box",a[i],b[i],c[i]);
else
if ((xmin>a[i])||(xmax<a[i])||(ymin>b[i])||(ymax<b[i])||(zmin>c[i])||(zmax<c[i]))
printf("\n the point (%d,%d,%d) lies outside the rectangular box",a[i],b[i],c[i]);
else
printf("\n the point (%d,%d,%d) lies on the rectangular box",a[i],b[i],c[i]);
}
printf("\n");
}
