#include <stdio.h>
  
//H�m nh?p m?ng
void input(int a[], int *n){ //*n l� truy?n v�o tham tr?(Tham chi?u trong c++) v?i m?c d�ch n sau khi tho�t kh?i h�m v?n gi? du?c gi� tr? khi b? thay d?i trong h�m
    printf("Nhap n: ");
    scanf("%d", n); //V� n l� 1 con tr? n�n ta kh�ng c?n &n
    printf("\n---NHAP MANG----\n");
    int i;
    for(i = 0; i< *n;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 

void InterchangeSort(int a[], int n){  
   int i,  j;
    for (i = 0; i < n - 1; i++)
    {
      
        for (j = i + 1; j < n; j++)
        {
         
             if(a[i] < a[j]) 
            {
               
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[1000]; 
    int n; 
 
    input(arr, &n);
    InterchangeSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
