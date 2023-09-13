#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);

int main(int argc, char *argv[]) {
    int num_bytes;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    print_opcodes(num_bytes);

    return 0;
}

void print_opcodes(int num_bytes) {
    char *ptr = (char *)print_opcodes;
    int i;

    for (i = 0; i < num_bytes; i++) {
        printf("%02x", ptr[i] & 0xFF);
    }

    printf("\n");
}

