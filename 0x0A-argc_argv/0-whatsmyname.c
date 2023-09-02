#include "main.h"
#include <stdio.h>

/**
 * main - To print the name of the file and a new line
 * @argc: this is an argument count
 * @argv: arguments passed to main as an array of strings
 * Return: Return 0
 */

int main(int argc, char *argv[]) {
    if (argc >= 1) {
        printf("%s\n", argv[0]);
    }

    return 0;
}
