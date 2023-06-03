// Read the path of the original file using the realpath() function

#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char buf[BUFSIZ];

    realpath("linux.sym", buf);
    printf("linux.sym : REALPATH = %s\n", buf);

    return 0;
}