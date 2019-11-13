#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){
    struct stat sb;
    printf("hello\n");
    stat("makefile", &sb);
    printf("hello\n");

    return 0;
}
