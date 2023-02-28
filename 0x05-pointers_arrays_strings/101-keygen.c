#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWD_LEN 2772

/**
 * main - generates random valid passwords
 *
 * Return: 0 Always.
 */
int main(void) {
    char buffer[1024];
    int sum = 0, remaining = PASSWD_LEN;

    srand((unsigned int) time(NULL));

    while (remaining < PASSWD_LEN) {
        int r = rand() % 128;
        if (sum + r > PASSWD_LEN) {
            continue;
        }
        buffer[sizeof(buffer) - remaining] = (char) r;
        remaining -= r;
        sum += r;
    }

    printf("%s\n", buffer);

    return 0;
}

