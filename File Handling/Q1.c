// Q1->Wap to genenerate multiplication table of a given number in txt format.

#include <stdio.h>
int main(){
    int n;
    FILE *ptr;
    ptr=fopen("z4.txt","w");
    printf("Enter the number whose table you want :");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d*%d=%d\n",n,i,n*i);
    }
return 0;
}