#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.h"

int main(){

    FILE *fptr;
    char filename[15];
    char ch;
    ssize_t read;
    size_t len = 0;
    char * line = NULL;
    node* head = NULL;
    node* tmp  = NULL;
    
    printf("Enter file of commands: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if(fptr == NULL){
        printf("Can't open file.");
        exit(0);
    }
    
    while ((read = getline(&line, &len, fptr)) != -1) {
        printf("Retrieved line of length %zu :\n", read);
        printf("%s", line);
        head = append(head, line);

    }
    
}
