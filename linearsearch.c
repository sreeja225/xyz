#include<stdio.h>
int main()
{
int i,x,n,a[100];
printf("enter no. of elements");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter element to be searched");
scanf("%d",&x);
for(i=0;i<n;i++){
if(a[i]==x){
break;
}}
if(i<n)
printf("element is found at index %d",i);
else
printf("element is not found");
}
