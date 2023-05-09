// 디렉토리 생성하기 mkdir(2)
// 원형 : int mkdir(const char *pathname, mode_t mode)
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    if(mkdir("han", 0755) == -1)
    {
        perror("han");
        exit(1);
    }
    printf("han 디렉토리가 생성되었습니다.\n");
}