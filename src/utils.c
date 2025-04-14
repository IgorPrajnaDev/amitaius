#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int* text_to_numbers(const char* text) {
    int i = 0;

    // Descobrir tamanho
    while (text[i] != '\0') i++;

    // Alocar array de inteiros
    int* numbers = malloc(i * sizeof(int));
    if (numbers == NULL) return NULL;

    // Converter cada letra
    for (int j = 0; j < i; j++) {
        char c = toupper(text[j]); // garante que seja maiúscula

        if (c >= 'A' && c <= 'Z') {
            numbers[j] = c - 'A' + 1;
        } else {
            numbers[j] = 0; // caractere não-alfabético vira 0
        }
    }

    return numbers;
    }
