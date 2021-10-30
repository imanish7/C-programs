#include <stdio.h>

//Compiler version gcc  6.3.0
int wave_array(int arr[],int n);
//int swap(&a,&b);

int main()
{int i,k,j,temp;
  int arr[10],n;
 
  int *new_wave;
  printf("enter the element u want");
  scanf("%d",&n);
  printf("enter the elements");
  for(j=0;j<n;j++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i+2)
  {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
  new_wave= wave_array(arr,n) ;
  printf("the wave array look like this");
  for( k=0;k<n;k++)
   printf("%d",new_wave[k]);
    // printf("%d",arr[k]);
  return 0;
}
int wave_array(int arr[],int n)
{
  int i,*a,*b;
  for(i=0;i<n;i+2)
  {*a=arr[i];
  *b=arr[i+1];
  swapz(a,b);
    
  }
  //return arr;
}
int swapz(int *a,int *b){
	
	int temp=*a;
    *a=*b;
    *b=temp;
    //return (a,b);
}
