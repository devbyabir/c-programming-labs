#ifndef LAB_INPUT_H
#define LAB_INPUT_H

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* Read one bounded whitespace-separated token, preserving multi-value input.
 * Reject oversized tokens instead of silently accepting a numeric prefix.
 * Callers report the error and exit, so no retry/draining logic is needed. */
static inline int lab_read_token(char *token, size_t capacity)
{
    int ch;
    size_t length = 0;
    do
    {
        ch = getchar();
    } while (ch != EOF && isspace((unsigned char)ch));

    if (ch == EOF)
        return 0;

    while (ch != EOF && !isspace((unsigned char)ch))
    {
        if (length + 1 >= capacity || ch == '\0')
            return 0;
        token[length++] = (char)ch;
        ch = getchar();
    }
    token[length] = '\0';
    return !ferror(stdin);
}

static inline int lab_read_int(int *value)
{
    char token[128], *end;
    if (!lab_read_token(token, sizeof token))
        return 0;
    errno = 0;
    long parsed = strtol(token, &end, 10);
    if (errno == ERANGE || end == token || *end != '\0' || parsed < INT_MIN || parsed > INT_MAX)
        return 0;
    *value = (int)parsed;
    return 1;
}

static inline int lab_read_double(double *value)
{
    char token[128], *end;
    if (!lab_read_token(token, sizeof token))
        return 0;
    errno = 0;
    double parsed = strtod(token, &end);
    if (errno == ERANGE || end == token || *end != '\0' || !isfinite(parsed))
        return 0;
    *value = parsed;
    return 1;
}

#endif
