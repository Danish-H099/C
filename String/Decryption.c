#include <stdio.h>

void decrypt(char *str);

int main(){
    char str[42];
    printf("Enter the msg you got :");
    gets(str);
    char *msg=str;
    decrypt(msg);
    printf("msg is :%s",str);
return 0;
}
//
void decrypt(char *str){
    while(*str!='\0'){
        *str=*str-1;
        str++;
    }
}
