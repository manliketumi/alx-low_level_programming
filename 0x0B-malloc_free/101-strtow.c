#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - function splits string into two words
 * @str: string
 * Return: NULL
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);
	int word_index, i = 0;
	int j;

	if (num_words == 0)
		return (NULL);

	char **words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	while (str[i])
	{
		while (is_space(str[i]))
			i++;

		if (str[i])
		{
			int word_start = i;

			while (str[i] && !is_space(str[i]))
				i++;

			int word_end = i;

			word[word_index] = strdup_word(str + word_start, str + word_end);
			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(words[j]);
					free(words);
					return (NULL);
			}
			word_index++
		}
	}
	words[word_index] = NULL;
	return (words);
}
