#include <stdio.h>
int main(){
    FILE *ptr;
    int num=13;
    char ch[]="My Favorite Number";
    ptr=fopen("z3.txt","w");
    fprintf(ptr,"%d \n%s\n",num,ch);
    fclose(ptr);
return 0;
}