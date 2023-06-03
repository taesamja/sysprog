// Create Symbolic link using the symlink() function

#include <unistd.h>

int main()
{
    symlink("linux.txt", "linux.sym");

    return 0;
}