#include <stdio.h>

#define MAX_LETTERS 50
#define MAX_FR 15

int main()
{
    char all_letters[MAX_LETTERS];
    char frequencies[MAX_LETTERS];
    int frequencies_qty[MAX_FR] = {0};
    int frequencies_length = 0;
    int all_letters_length = 0;
    int frequencies_qty_length = 0;
    int c;

    while((c = getchar()) != EOF) {
        all_letters[all_letters_length] = c;
        ++all_letters_length;
    }

    putchar('\n');

    for (int i = 0; i < MAX_LETTERS; i++) {
        if (all_letters[i] && (all_letters[i] == all_letters[i+1] || all_letters[i] == all_letters[i-1])) {
            frequencies[frequencies_length] = all_letters[i];
            ++frequencies_length;
        }
    }

    for (int i = 0; i < frequencies_length; i++) {
        if (frequencies[i] && frequencies[i] != frequencies[i+1]) {
            putchar(frequencies[i]);
            putchar('\t');
        }
    }
    putchar('\n');

    for (int i = 0; i < frequencies_length; i++) {
        if (frequencies[i] && frequencies[i] == frequencies[i+1]) { 
            ++frequencies_qty[frequencies_qty_length];
        } else {
            ++frequencies_qty[frequencies_qty_length];
            ++frequencies_qty_length; 
        }
    }

    for (int i = 0; i < MAX_FR; i++) {
        for (int j = 0; j < frequencies_qty_length; j++) {
            if (frequencies_qty[j] > 0) {
                putchar('*');
                putchar('\t');
                --frequencies_qty[j];
            } else {
                putchar('\t');
            }
        }
        putchar('\n');
    }
    
    return 0;
}