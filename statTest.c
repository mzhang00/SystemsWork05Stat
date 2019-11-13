#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){
    struct stat sb;
    stat("makefile", &sb);
    printf("File size of makefile: %ld\n", sb.st_size);

    return 0;
}
