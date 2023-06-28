#include <stdio.h>

char* _strcat(char* dest, char* src) {
    char* originalDest = dest;  // Store the original destination pointer for returning

    // Iterate over the destination string to find the null terminator
    while (*dest != '\0') {
        dest++;
    }

    // Copy the source string to the destination, including the null terminator
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Add the terminating null byte to the concatenated string

    return originalDest;  // Return the pointer to the resulting string (dest)
}

int main() {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
