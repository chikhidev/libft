/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchikhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:15:22 by abchikhi          #+#    #+#             */
/*   Updated: 2023/11/08 22:59:58 by abchikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int				i;
	unsigned int	in_word;

	i = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && in_word == 0)
		{
			in_word = 1;
			i++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (i);
}

static int	free_everything(char **array, int index)
{
	while (index > 0)
		free(array[--index]);
	free(array);
	return (0);
}

static char	*extract_word(char const *s, char c)
{
	int			len;
	char const	*starting;
	char		*word;
	int			i;

	len = 0;
	starting = s;
	i = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = starting[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static int	fill_and_test(char const *s, char c, char **result)
{
	int		i;
	char	*word;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word = extract_word(s, c);
			if (word == NULL)
				return (free_everything(result, i));
			result[i++] = word;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (fill_and_test(s, c, result) == 0)
		return (NULL);
	return (result);
}
