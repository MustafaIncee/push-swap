
#include "push_swap.h"

void rrr(t_data *s)
{
    rra(s);
    rrb(s);
    write(1, "rrr\n", 4);
}

void ft_error(char *str)
{

    int i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    	write(1, "\n", 1);
    exit(1);
}

long ft_atol(char *str)
{
    long result;
    size_t i;
    int sign;
    
    result = 0;
    sign =  1;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    result = result * sign;
    if(result > 2147483647 || result < -2147483648)
    ft_error("Error");
    return (result);
}

int word_count(char **str)
{
   int i;
   int j;
   int count;

    i = 1;
    j = 0;
    count = 0;

    //
    while(str[i])
    {
        j = 0;
        while((str[i][j] != '\0' && str[i][j] == ' '))
        j++;

        while (str[i][j] != '\0')
        {
            while (str[i][j] != '\0' && str[i][j] != ' ' )
            j++;
            count++;
            while (str[i][j] != '\0' && str[i][j] == ' ')
            j++;
        }
        i++;
    } 
    
    return count;
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	free(s1);
	return (str);
}

