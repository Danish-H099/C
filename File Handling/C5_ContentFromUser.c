#include <stdio.h>
#include <string.h>
int main(){
    FILE *ptr;
    int i;
    char str[50];

    ptr=fopen("z5.txt","w");

    printf("Enter the content :");
    gets(str);

    fputs(str,ptr);
    fclose(ptr);

return 0;
}