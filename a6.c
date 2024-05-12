#include <stdio.h>
#include <string.h>

// Функция для удаления всех экземпляров заданного символа из строки
void remove_char(const char *source, char target, char *result) {
    int j = 0;
    for (int i = 0; source[i] != '\0'; i++) {
        if (source[i] != target) {
            result[j] = source[i];
            j++;
        }
    }
    result[j] = '\0'; // Завершающий нуль-символ
}

int main() {
    const char *original = "Hello, World!";
    char target = 'o'; // Символ для удаления
    char result[100];  // Убедитесь, что размер достаточен

    remove_char(original, target, result);

    printf("Original: %s\n", original);
    printf("Without '%c': %s\n", target, result);

    return 0;
}
