#include<stdio.h>
int main(){
    int i,j,n,key;
    scanf("%d",&n);
    
    
     int a[n];
    for ( i=0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }



   for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
 printf("\n");
    for ( i = 1; i < n; i++)
    {
      key=a[i];
      j=i-1;

      while(j>=0 && a[j]>key){
          a[j+1]=a[j];
          j--;
      }
     
    a[j+1]=key;
    
    }
     for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
int arr[7];
int k = sizeof(arr)/sizeof(arr[0]);
     printf("\n%d ",k);
}