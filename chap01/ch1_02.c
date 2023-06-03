#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

extern int errno;

int main() 
{
    FILE *fp;

    fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
        printf("errno = %d\n", errno);
        exit(1);
    }
    printf("test.txt파일이 존재합니다.\n");
    return 0;
}