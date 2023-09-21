#include <stdio.h>
int main()
{
    int i,*ptr;
    printf("pointers access\n\n");
    i=20;
    ptr=&i,
    printf("ptr=%u\n",ptr);
    printf("ptr=%d,i=%d\n",ptr,i);
    *ptr=*ptr *10;
    printf("ptr=%d,i=%d\n",ptr,i);

}