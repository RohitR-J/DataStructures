#include<stdio.h>
int main()
{

int size,arr[100],pos,i,item;
printf("Enter the size of array\n");
scanf("%d",&size);
printf("Enter %d elements\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("The array is:\n");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
printf("\nEnter the position to delete element\n");
scanf("%d",&pos);
item = arr[pos-1];
for(i=pos-1;i<size-1;i++)
{
arr[i] = arr[i+1];2=3
}
size--;
printf("The updated array is:\n");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
printf("\nThe deleted element is %d\n",item);
return 0;
}
