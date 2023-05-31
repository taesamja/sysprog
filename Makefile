# 사용법 : make target=파일이름
# Usage : make target="file name" ex)make target=ch2_01
CC = gcc
CFLAGS = -Wall -Werror

all: $(target)

$(target): $(target).o
	$(CC) $(CFLAGS) $(target).o -o $(target)

$(target).o: $(target)
	$(CC) $(CFLAGS) -c $(target).c

clean:
	rm -rf *.o
