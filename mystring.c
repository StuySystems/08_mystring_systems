/*
 * Ethan Shenker
 * Systems Pd. 10
 */

#include <stdio.h>
#include "mystring.h"

int mystrlen(char *s)
{
    int length = 0;
    while (*s != 0 && *s != '\0') // make sure we're not encountering the NULL end of string
    {
        length++;
        s++;
    }
    return length;
}

char *mystrcat(char *s1, char *s2)
{
    char *start = s1;
    while (*s1 != 0 && *s1 != '\0')
    {
        s1++;
    }

    while (*s2 != 0 && *s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';

    return start;
}

char *mystrncpy(char *s1, char *s2, int size)
{
    return 0;
}

char *mystrchr(char *s, int c)
{
    return 0;
}

int mystrcmp(char *s1, char *s2)
{
    return 0;
}