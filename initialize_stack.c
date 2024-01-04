

#include "push_swap.h"

void initialize(t_data *s, char **av)
{
    s->size_a = word_count(av);
    s->size_b = 0;
    s->a = (int *)malloc(sizeof(int) * s->size_a);
    s->b = (int *)malloc(sizeof(int) * s->size_a);
    s->min_count = (int *)malloc(sizeof(int) * s->size_a);
}


    void initialize_stack(t_data *s, char **av, char **str)
{
    int i;

    i = 0;

    initialize(s, av);
    while (i < s->size_a)
    {
        s->a[i] = ft_atol(str[i]);
        i++;
    }
}


char *initialize_args(t_data *s, int ac, char **av)
{
    char **str;
    char *arg;
    int i;

    i = 1;
    arg = ft_strdup("");
    while(ac > i)
    {
        arg = ft_strjoin2(arg, av[i]);
        arg = ft_strjoin2(arg, " ");
        i++;
    }
    str = ft_split(arg, ' ');
    initialize_stack(s, av, str);
    free_stack(str);
    return (arg);
}

