#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    if(rename("han", "bit") == -1)
    {
        perror("rename : ");
        exit(1);
    }
    printf("디렉토리 이름이 정상적으로 변경되었습니다.\n");

    return 0;
}