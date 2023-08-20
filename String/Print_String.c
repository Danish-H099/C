#include <stdio.h>
int main(){
    // char str[]={'d','a','n','i','s','h','\0'};

    char str[]="Danish";
    
    // char str[50];
    // printf("Enter the String :");
    // scanf("%s",str); // automatically adds the null character when the enter key is pressed but size will remain always 50

    // ------< Print using Loop >-----------//
    
    // printf("String is ");
    // for (int i=0; str[i]!='\0';i++){
    //     printf("%c",str[i]);


    // ------< Print using pointer >-----------//

    // char *ptr = str;
    // printf("String is ");
    // while (*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    // }


    printf("String is %s",str);
    printf("\nString size is :%d",sizeof(str));
return 0;
}