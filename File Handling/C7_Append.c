// Append means adding content in a file without deleting previous content

#include <stdio.h>
int main(){
    FILE *ptr;
    char str[500];
    ptr=fopen("z2.txt","a");
    printf("Enter the content you want to append :");
    gets(str);
    fprintf(ptr,"%s",str);
    fclose(ptr);

return 0;
}