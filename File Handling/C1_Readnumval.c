// Opening and reading a file with a numeric value in it

#include <stdio.h>
int main(){
    int num;
    FILE *ptr;  // FILE is a structure that points to the file and ptr is pointer to 
                // the structure FILE

    ptr=fopen("z1.txt","r"); // opening the file in read mode
    
    if(ptr==NULL){
        printf("Failure in finding the file");
    }

    else{
    fscanf(ptr,"%d",&num);  // Scans the file
    printf("The value of num is %d",num);
    fclose(ptr); // close the file
    }
return 0;
}