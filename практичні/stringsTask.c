#include <stdio.h>
#include <string.h>

int main() {
    char user_string[100];
    printf("Write something (max 100 characters): ");
    scanf_s("%99[^\n]", user_string);
    int str_length = strlen(user_string);
    char result_string[str_length + 1];
    int j = 0;
    for (int i = 0; i < str_length; i++) {
        if (i % 2 == 0) {
            result_string[j++] = user_string[i];
        }
    }
    result_string[j] = '\0';
    printf("Filtered string: %s", result_string);
    return 0;
}
