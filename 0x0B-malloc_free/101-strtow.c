/*
 *function to split string to word
 */#include <stdlib.h>
#include <string.h>
#include"main.h"
/*
 * intoduce function to count words*/int gugs(char *str, int len)
{
int oliv = 0;
int j = 0;

while (j < len)
{
while (j < len && str[j] == ' ')
j++;
if (j < len && str[j] != ' ')
oliv++;
while (j < len && str[j] != ' ')
j++;
}

return (oliv);
}

/*
 * memory ballocation   to  array word*/void con(char **words, int wordIndex)
{
for (int k = 0; k < wordIndex; k++)
free(words[k]);
free(words);
}
/*
 * copy wprd and add it to array*/char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int len = strlen(str);
int oliv = gugs(str, len);
char **words = (char **)malloc((oliv + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

int wordIndex = 0;
int i = 0;
while (i < len)
{
while (i < len && str[i] == ' ')
i++;
int start = i;
while (i < len && str[i] != ' ')
i++;
int nen = i - start;
char *word = (char *)malloc((nen + 1) * sizeof(char));
if (word == NULL)
{
con(words, wordIndex);
return (NULL);
}

strncpy(word, str + start, nen);
word[nen] = '\0';
words[wordIndex] = word;
wordIndex++;
}

words[oliv] = NULL;

return (words);
}
