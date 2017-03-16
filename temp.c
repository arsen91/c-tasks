#include <stdio.h>

int main()
{
    int c;
    char arr_w [20];
    int wordCount = 0;
    int nc = 0;

    for (int i = 0; i < 20; i++) {
        arr_w[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t') {
            arr_w[wordCount] = nc-1;
            ++wordCount;
            nc = 0;
        }
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j <= wordCount; ++j) {
            if (arr_w[j] > 0) {
                putchar('*');
                --arr_w[j];
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}