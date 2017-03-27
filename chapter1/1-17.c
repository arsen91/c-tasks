#include <stdio.h>

#define MAXLINE 1000

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = mygetline(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%d\n", len);
            printf("%s\n", line);
        } else {
            printf("%s\n", "You are not big enough to be printed, sorry");
        }
    }

    return 0;
}

int mygetline(char s[], int lim) {
    int c;
    int i = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        s[i] = c;
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