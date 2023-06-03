// Create a hard link using the link() function

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    struct stat statbuf;

    stat("linux.txt", &statbuf);
    printf("Before link count = %d\n", (int)statbuf.st_nlink);

    link("linux.txt", "linux.ln");

    stat("linux.txt", &statbuf);
    printf("After link count = %d\n", (int)statbuf.st_nlink);

    return 0;
}