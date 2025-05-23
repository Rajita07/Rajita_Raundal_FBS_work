#include <stdio.h>

// a. mystrcpy
char* mystrcpy(char* dest, const char* src) {
    char* temp = dest;
    while ((*dest++ = *src++));
    return temp;
}

// b. mystrlen
int mystrlen(const char* str) {
    int len = 0;
    while (*str++) len++;
    return len;
}

// c. mystrcmp
int mystrcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++; s2++;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

// d. mystrcat
char* mystrcat(char* dest, const char* src) {
    char* temp = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return temp;
}

// e. mystrncpy
char* mystrncpy(char* dest, const char* src, int n) {
    int i;
    for (i = 0; i < n && src[i]; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

// f. mystrupper
char* mystrupper(char* str) {
    char* temp = str;
    while (*str) {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;
        str++;
    }
    return temp;
}

// g. mystrlower
char* mystrlower(char* str) {
    char* temp = str;
    while (*str) {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + 32;
        str++;
    }
    return temp;
}

// h. mystrrev
char* mystrrev(char* str) {
    int i = 0, j = mystrlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
    return str;
}

// i. mystrstr
char* mystrstr(const char* haystack, const char* needle) {
    if (!*needle) return (char*)haystack;
    for (; *haystack; haystack++) {
        const char* h = haystack;
        const char* n = needle;
        while (*h && *n && *h == *n) {
            h++; n++;
        }
        if (!*n) return (char*)haystack;
    }
    return NULL;
}

// j. mystrcasecmp
int mystrcasecmp(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        char c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        char c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2) return c1 - c2;
        s1++; s2++;
    }
    return *s1 - *s2;
}

// k. mystrchr
char* mystrchr(const char* str, int c) {
    while (*str) {
        if (*str == c) return (char*)str;
        str++;
    }
    return (c == '\0') ? (char*)str : NULL;
}

// l. mystrrchr
char* mystrrchr(const char* str, int c) {
    char* last = NULL;
    while (*str) {
        if (*str == c) last = (char*)str;
        str++;
    }
    return (c == '\0') ? (char*)str : last;
}

// m. mystrncmp
int mystrncmp(const char* s1, const char* s2, int n) {
    while (n && *s1 && (*s1 == *s2)) {
        s1++; s2++; n--;
    }
    return (n == 0) ? 0 : *(unsigned char*)s1 - *(unsigned char*)s2;
}

// n. mystrnstr
char* mystrnstr(const char* haystack, const char* needle, int n) {
    int len = mystrlen(needle);
    if (len == 0) return (char*)haystack;
    for (int i = 0; i <= n - len; i++) {
        if (haystack[i] == needle[0] && mystrncmp(haystack + i, needle, len) == 0) {
            return (char*)(haystack + i);
        }
    }
    return NULL;
}

// o. mystrncat
char* mystrncat(char* dest, const char* src, int n) {
    char* temp = dest;
    while (*dest) dest++;
    while (n-- && *src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return temp;
}

// p. mystrncasecmp
int mystrncasecmp(const char* s1, const char* s2, int n) {
    while (n && *s1 && *s2) {
        char c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        char c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if (c1 != c2) return c1 - c2;
        s1++; s2++; n--;
    }
    return 0;
}
// q. mystrdup
char* mystrdup(const char* str) {
    int len = mystrlen(str);
    char* dup = (char*)malloc(len + 1);
    if (dup) {
        mystrcpy(dup, str);
    }
    return dup;
}

// r. mystrndup
char* mystrndup(const char* str, int n) {
    int len = mystrlen(str);
    if (n < len) len = n;
    char* dup = (char*)malloc(len + 1);
    if (dup) {
        mystrncpy(dup, str, len);
        dup[len] = '\0';
    }
    return dup;
}
// s. mystrtok
char* mystrtok(char* str, const char* delim) {
    static char* last = NULL;
    if (str == NULL) str = last;
    if (str == NULL) return NULL;

    while (*str && strchr(delim, *str)) str++;
    if (*str == '\0') return last = NULL;

    char* token = str;
    while (*str && !strchr(delim, *str)) str++;
    if (*str) {
        *str++ = '\0';
    }
    last = str;
    return token;
}
