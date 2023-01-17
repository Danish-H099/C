#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int i;
    char str[50];

    ptr=fopen("z5.txt","r");

    fgets(str,13,ptr); // read first 11 character of file n one null character  
                       // and store in the string str 
                       // if content in file has less characters than specified
                       // in the fgets then it automatically stop reading once it reaches the end.
                       // if file has multiple lines fgets only read first line... To eliminate
                       // this problem we write fgets in loop
    printf("%s",str);

return 0;
}



