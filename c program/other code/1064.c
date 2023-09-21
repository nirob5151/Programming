#include <stdio.h>
 
int main()
{
    int i,n=0;
    float num,sum=0;
    for(i=1;i<=6;i++){
        scanf("%f",&num);
        if(num>0){
          sum = sum + num;
          n++;
        }
    }
    float average = sum/n;
    printf("%d valores positivos\n",n);
    printf("%.1f\n",average);
    return 0;
}