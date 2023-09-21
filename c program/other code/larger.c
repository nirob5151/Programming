#include <stdio.h>
int main()
{
  int n,i;
  int max1, max2;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n; i++){
      scanf("%d",&a[i]);
  }
   max1=a[0];
  max2=a[1];
  for(i=0;i<n; i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2 && a[i]<max1){
        max2=a[i];
    }
  }
  printf("Max1 = %d \nMax2 = %d \n",max1,max2);

    return 0;
}