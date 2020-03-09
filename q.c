#include<stdio.h> 
#include<conio.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int a[], int l, int h) 
{ 
    int p = a[h];    
    int i = (l-1); 
    for (int j = l; j <= h- 1; j++) 
    { 
        if (a[j] < p) 
        { 
            i++;    
            swap(&a[i], &a[j]); 
        } 
    } 
    swap(&a[i + 1], &a[h]); 
    return (i + 1); 
}  
void quickSort(int a[], int l, int h) 
{ 
    if (l<h) 
    {        
  
  int j = partition(a,l,h);        
        quickSort(a, l, j - 1); 
        quickSort(a, j + 1, h); 
    } 
	
}   
/*void printArray(int a[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", a[i]); 
    printf("n"); 
} */  
void main() 
{ 
    int a[50],x,i;
	printf("Enter the no. of ele u wanna insert\n");
	scanf("%d",&x);
	printf("Enter the %d values\n",x);
	for(i=0;i<=x-1;i++)
	{
		scanf("%d",&a[i]);
	}
    quickSort(a, 0, x-1); 
    printf("Sorted array:\n "); 
	for(i=0;i<=x-1;i++)
		  printf("%d\t",a[i]);
	  getch();
}