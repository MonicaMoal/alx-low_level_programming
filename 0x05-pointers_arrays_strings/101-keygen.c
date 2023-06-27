#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generateRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

int main(void) {
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
