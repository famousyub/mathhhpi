#include<stdio.h>
#include<string.h>

int main(int argc , const char *argv[])
{
  

    if(argc > 1){

        printf("hello %s  %s ",argv[1],argv[2]);

    }

    else {

        printf("hello guest");
    }

    
}