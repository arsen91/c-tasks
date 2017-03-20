#include <stdio.h>

#define MAXLINE 10

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = mygetline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        // printing if line is exceeded maxline
        if (max > MAXLINE) {
            printf("%s %d\n", "The line is very big: ", max);
        }
        printf("%s", longest);
    }

    return 0;
}

int mygetline(char s[], int lim) {
    int c;
    int i = 0;

    // counting after maxline exceeded.
    while ((c = getchar()) != EOF && c != '\n') {
        if (i < lim-1) {
            s[i] = c;
        }
        i++;
    }
    if (c == '\n') {
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;

    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}