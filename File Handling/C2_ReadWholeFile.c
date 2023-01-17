#include <stdio.h>
int main(){
    FILE *ptr;
    char ch;
    ptr=fopen("z2.txt","r");
    ch=fgetc(ptr);      //   fgetc gets you the value of character at the ptr
    while(ch!=EOF){     //   EOF is End Of File
        printf("%c",ch);
        ch=fgetc(ptr);  //   no need to increament cause cursor moves forward each time it reads
                        //   a character
    }
return 0;
}