// 디렉토리 삭제하기 rmdir(2)
// 원형 : int rmdir(const char *pathname)
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    if(rmdir("han") == -1)
    {
        perror("han");
        exit(1);
    }
    printf("han 디렉토리가 삭제되었습니다.\n");
}