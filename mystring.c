/*
 * Ethan Shenker
 * Systems Pd. 10
 */

#include <stdio.h>
#include "mystring.h"

int mystrlen(char *s)
{
    int length = 0;
    while (*s) // make sure we're not encountering the NULL end of string
    {
        length++;
        s++;
    }
    return length;
}

char *mystrcat(char *s1, char *s2)
{
    char *start = s1;
    while (*s1)
    {
        s1++;
    }

    while (*s2)
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
    char *start = s1;
    int i;
    for (i = 0; i < size; i++)
    {
        if (!s2)
        {
            *s1 = 0;
            break;
        }
        else
        {
            *s1 = *s2;
        }
    }

    while (i < size)
    {
        *s1 = 0;
    }

    return start;
}

char *mystrchr(char *s, int c)
{
    while (*s)
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    if (!c)
    {
        return s;
    }
    return NULL;
}

int mystrcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
        {
            if (s1 > s2)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        s1++;
        s2++;
    }
    if (!*s1 && !*s2)
    {
        return 0;
    }
    else
    {
        if (!*s1)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
}