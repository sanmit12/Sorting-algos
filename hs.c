#include<stdio.h>
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
void heapify(int a[], int n, int i) 
{ 
    int lar = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2;
  
     if (l < n && a[l] > a[lar]) 
        lar = l; 
     if (r < n && a[r] > a[lar]) 
        lar = r; 
     if (lar != i) 
    { 
        swap(&a[i], &a[lar]); 
  
        
        heapify(a, n, lar); 
    } 
} 
  void heapSort(int a[], int n) 
{ 
    
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(a, n, i); 
  
  
    for (int i=n-1; i>=0; i--) 
    {   i

_         swap(&a[0], &a[i]); 
  
       
        heapify(a, i, 0); 
    } 
} 
  
void printArray(int a[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        printf("%d ",a[i]);
    printf("\n"); 
} 
  
int main() 
{ 
    int a[20],y,i; 
 printf("Enter the no of elements that the array defined by you should contain ");
scanf("%d",&y); 
    printf("Enter the elements in the array");
    for(i=0;i<y;i++)
	scanf("%d",&a[i]);
  
    heapSort(a, y); 
  
   printf("Sorted Array is");
    printArray(a, y); 
} 