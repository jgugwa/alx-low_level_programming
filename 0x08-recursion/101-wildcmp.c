#include "main.h"

/**
* wildcmp - compare two strings with "wildcard expansion" capabilities
* @s1: string 1
* @s2: string 2
* Return: 1 if strings can be considered identical, else 0
*/
#include "main.h"

int ref(char *s1, char *s2);
int ref1(char *s1, char *s2);
int ref2(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == '\0' || *s2 == '\0')
{
if (*s1 == '\0' && *s2 == '*')
return (wildcmp(s1, ++s2));
else if (*s1 == '*' && *s2 == '\0')
return (wildcmp(++s1, s2));
return (0);
}

if (*s1 == *s2 || *s1 == '?' || *s2 == '?')
return (ref(s1 + 1, s2 + 1));
else if (*s1 == '*')
return (ref1(s1, s2));
else if (*s2 == '*')
return (ref2(s1, s2));

return (0);
}

/*
*this is the first problem chunk*/int ref(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == '\0' || *s2 == '\0')
return (0);

if (*s1 == *s2 || *s1 == '?' || *s2 == '?')
return (ref(s1 + 1, s2 + 1));

return (0);
}

/*
 * this is the second part*/int ref1(char *s1, char *s2)
{
if (*(s1 + 1) == '*')
return (wildcmp(s1 + 1, s2));
else
{
while (*s2)
{
if (wildcmp(s1 + 1, s2))
return (0);
s2++;
}
return (0);
}
}

/*
 * this is third chunk*/int ref2(char *s1, char *s2)
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
else
{
while (*s1)
{
if (wildcmp(s1, s2 + 1))
return (1);
s1++;
}
return (0);
}
}
