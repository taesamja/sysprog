# 사용법 : make target=파일이름
# Usage : make target="file name" ex)make target=ch2_01
# 실행파일만 지우는 방법 : find -type f -executable -delete
CC = gcc
CFLAGS = -Wall -Werror

all: $(target)

$(target): $(target).o
	$(CC) $(CFLAGS) $(target).o -o $(target)

$(target).o: $(target)
	$(CC) $(CFLAGS) -c $(target).c

clean:
	rm -rf *.o
