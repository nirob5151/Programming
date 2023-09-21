 #include<stdio.h>
int recursion(int x){
    if(x>0){
        return x*recursion(x-1);
    }else{

        return 1;
    }
}
int main (){

int t,n;
printf("how many facterial: \n");
scanf("%d",&n);
t=recursion (n);
printf("%d",t);
return 0;

}