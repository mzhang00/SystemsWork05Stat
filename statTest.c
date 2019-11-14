#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

int main(){
    struct stat sb;
    stat("makefile", &sb);
    printf("File size of makefile: %ld\n", sb.st_size);
    printf("Permissions of makefile: %o\n", sb.st_mode);
    printf("Time of last access of makefile: %s\n", ctime(&sb.st_atime));
    return 0;
}
