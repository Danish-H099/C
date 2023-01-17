// we open a file in write mode.If file exit and contain some content and we write
// something in it then original content gets deleted and is overwritten by new content

#include <stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("z1.txt","w");
    int num=22;
    fprintf(ptr,"%d",num);  //  we use fprintf for writing in formated 
                            
return 0;
}

// for unformatted writting we use
//   fputc("a",ptr); -> to add a character
//   fputs(str,ptr); -> to add a string str

