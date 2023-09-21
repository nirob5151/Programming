#include<stdio.h>
#define MAX_COURSES 100

int main()
{
int t, n, i, flag = 1;
scanf("%d", &t);
while(t--)
{
scanf("%d", &n);
int min_score[MAX_COURSES], assignment1[MAX_COURSES], assignment2[MAX_COURSES], exam[MAX_COURSES];
for(i=0; i<n; i++)
{
scanf("%d%d%d%d", &min_score[i], &assignment1[i], &assignment2[i], &exam[i]);
if(assignment1[i]+assignment2[i]+exam[i]<min_score[i])
{
flag = 0;
}
}
if(flag == 1)
{
printf("PASS\n");
}
else
{
printf("FAIL\n");
}
flag = 1;
}
return 0;
}