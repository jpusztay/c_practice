#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fptr;
    char filename[15];
    char ch;
    scanf("%s", filename);
    fptr = fopen(filename, r);
    if(fptr == NULL){
        printf("Can't open file.");
    }
    

}
