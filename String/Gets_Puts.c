// gets is used to receive multiword string from user
// puts is used to print multiword string and places the cursor on the next line 

#include <stdio.h>
int main(){
    char str[50];
    printf("Enter the string :");
    gets(str);
    // printf("String is %s", str);
    printf("The string is ");
    puts(str);
    printf("End");
return 0;
}