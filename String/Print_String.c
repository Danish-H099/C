#include <stdio.h>
int main(){
    // char str[]={'d','a','n','i','s','h','\0'};

    char str[]="Danish";

    // ------< Print using Loop >-----------//
    
    // printf("String is ");
    // for (int i=0; str[i]!='\0';i++){
    //     printf("%c",str[i]);
    // }

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