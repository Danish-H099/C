#include <stdio.h>

void encrypt(char *str);

int main(){
    char str[42];
    printf("Enter you msg :");
    gets(str);
    char *msg=str;
    encrypt(msg);
    printf("Encrypted msg is :%s",str);
return 0;
}

void encrypt(char *str){
    while(*str!='\0'){
        *str=*str+1;
        str++;
    }
}
