# 사용법 : make file=파일이름
# Usage : make file="file name" ex)make file=ch2_01
# 실행파일만 지우는 방법 : find -type f -executable -delete
CC = gcc
CFLAGS = -Wall -Werror

all: $(file)

$(file): $(file).o
	$(CC) $(CFLAGS) $(file).o -o $(file)

$(file).o: $(file)
	$(CC) $(CFLAGS) -c $(file).c

clean:
	rm -rf *.o
