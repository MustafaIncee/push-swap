
#include "push_swap.h"

void free_stack(char **str)
{
    int i;
    i = 0;

    while(str[i])
    {
        free(str[i]);
        i++;
    } 
    free(str);  
}

void free_arg(char *av)
{
    free(av);
    ft_error("Error");
}

void is_duplicate(t_data *s)
{
    int i;
    int j;

    i = 0;
    while(s->size_a > i)
    {
        j = i + 1;
        while(s->size_a > j)
        {
            if(s->a[i] == s->a[j])
                ft_error("Error");
            j++;
        }
        i++;
    }
}

int is_sorted(t_data *s)
{
    int i;
    int j;
    i = 0;
    j = s->size_a - 1;
    while(i < j)
    {
        if (s->a[i] > s->a[i + 1])
            return (1);
        i++;
    }
    return (0);
}


void check_args(t_data *s, int ac, char **av)
{
    char *str;
    int i;

    i = 0;
    str = initialize_args(s, ac, av);
    while(str[i])
    {
        if(!is_numerical(str[i]))
            free_arg(str);
        i++;
    }
    i = 0;

    while(str[i])
    {
        if((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
            free_arg(str);
        if(ft_isdigit(str[i]) && (str[i + 1] == '-' || str[i + 1] == '+'))
            free_arg(str);
            i++;
    }
    free(str);
}