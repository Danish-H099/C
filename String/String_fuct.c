#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="Danish hussain";

    //Strlen();
    printf("The length of the string is %d",strlen(str1));

    //strcpy();
    char str2[24];
    strcpy(str2,str1);
    printf("\nstring 1 is %s",str1);
    printf("\nstring 2 is %s",str2);

    //strcmp(); 0 if same , +ve if 2nd larger than 1st and -ve if 1st larger
    int a=strcmp(str1,str2);
    printf("\n%d",a);

    //strcat();
    strcat(str1,str2);
    printf("\nstring 1 is %s",str1);

return 0;
}