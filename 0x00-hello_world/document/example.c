#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int fd;
    char buffer[1024] = "When you invoke GCC, it normally does preprocessing, compilation, assembly and linking. The overall options allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler";

    /* Open file with error handling*/
    fd = open("example.txt", O_RDWR | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error opening the file");
        exit(EXIT_FAILURE);
    }

    /* Write to the file */
    write(fd, buffer, strlen(buffer));

    /* Close the file*/
    if (close(fd) == -1) {
        perror("Error closing the file");
        exit(EXIT_FAILURE);
    }

    return 0;
}
