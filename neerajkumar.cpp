#include<stdio.h>
#include<math.h>

int main()
{


  float x[10],y[10][10],sum,p,u,temp;
  int i,n,j,k=0,f,m;
  float fact(int);


  printf("\nthe number of entries are ..... ");
  scanf("%d",&n);





  for(i=0; i<n; i++)
  {
   printf("\n\n enter the %d term  of x: ",i);
   scanf("%f",&x[i]);
  }


  for(i=0; i<n; i++)
  {
  printf("\n\nenter the value of f(x) for %d term: ",i);
   scanf("%f",&y[k][i]);
} 


  printf("\n\nEnter the value of x for finding f(x): ");
  scanf("%f",&p);






  for(i=1;i<n;i++)
  {
    k=i;
    for(j=0;j<n-i;j++)
    {
     y[i][j]=(y[i-1][j+1]-y[i-1][j])/(x[k]-x[j]);
     k++;
    }
  }










 i=0;


  do
  {
   if(x[i]<p && p<x[i+1])
    k=1;
   else
    i++;
  }while(k != 1);
  f=i;

  sum=0;
  for(i=0;i<n-1;i++)
  {
   k=f;
   temp=1;
   for(j=0;j<i;j++)
   {
    temp = temp * (p - x[k]);
    k++;
   }
    sum = sum + temp*(y[i][f]);
  }
  printf("\n\n f(%.2f) = %f ",p,sum);









i=0;
  do
  {
   if(x[i]<p && p<x[i+1])
    k=1;
   else
    i++;
  }while(k != 1);
  f=i;

  sum=0;
  for(i=0;i<n-1;i++)
  {
   k=f;
   temp=1;
   for(j=0;j<i;j++)
   {
    temp = temp * (p - x[k]);
    k++;
   }
    sum = sum + temp*(y[i][f]);
  }
  printf("\n\n f(%.2f) = %f ",p,sum);

