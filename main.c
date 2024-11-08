#include <stdio.h> 
#include "askname.h" 
int main(int argc, char **argv) 
{ 
    char first[255], last[255]; 
    askname(first); 
    askname(last);
    askname(lastlast);
    printf("Hello, %s %s!\n", first, last); 
    return 0; 
} 