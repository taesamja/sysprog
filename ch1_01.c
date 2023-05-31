#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern int errno;

int main()
{
    if(acces("test.txt", F_OK) == -1)
    {
        printf("errno = %d\n", errno);
    }
    printf("test.txt 파일은 존재합니다. \n");

    return 0;
}