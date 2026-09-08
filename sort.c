#include<stdio.h>
void quicksort(int a[],int f,int l){
	int i,j,pivot,temp;
	if(f<l){
		pivot = f;
		j = f;
		i = l;
	while(i<j){
		while(a[i]<=a[pivot]&&i<l)
		i++;
		while(a[j]>a[pivot])
		j--;
	if(i<j){
		    temp = a[i];
		    a[i] = a[j];
		    a[j] = temp;
				}
	}
	temp = a[pivot];
	a[pivot] = a[j];
	a[j] = temp;
	quicksort(a,f,j-1);
	quicksort(a,j+1,l);
	}
}
int main(){
	int i,size,a[25];
	printf("enter the array size:");
	scanf("%d",&size);
	printf("enter the elements into array:\n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,size-1);
	printf("sorted elements:\n");
	for(i=0;i<size;i++)
	printf("%d",a[i]);
	return 0;
}
