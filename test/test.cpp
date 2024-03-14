#include <stdio.h>
#include <string.h>

int flag = 0x44434241;

int main(int argc, char **argv) {
    char input[1024];
    int m = 0x1;

    if (argc < 2) return 1;
    strncpy(input, argv[1], 1023);
    printf(input);
    printf("\n");

    return 0;
}
