#include<stdio.h>
int main()
{

int size,i,pos,n,value;
printf("Enter the size of an array\n");
scanf("%d",&size);
int arr[size];
printf("Enter %d array elements\n",size);


for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Output:\n");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}

printf("please enter the location and value\n");
scanf("%d%d",&pos,&value);
return 0;
}
