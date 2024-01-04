
#include "push_swap.h"

int	a_min(t_data *s)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < s->size_a)
	{
		if (s->a[index] > s->a[i])
			index = i;
		i++;
	}
	return (index);
}


void sort(t_data *s)
{
    if(s->size_a > 5)
    {
        pb(s);
        pb(s);
        while(s->size_a > 0)
        {
              multi_sort(s);
              regulate_a(s);
        }
        reset_b(s);
        while(s->size_b > 0)
        {
            pa(s);
        }
    }
     else
            little_sort(s);
}

int main(int ac, char **av)
{
    t_data *s;

    s = malloc(sizeof(t_data));
    check_args(s, ac, av);
    is_duplicate(s);
    if (is_sorted(s) == 0)
        exit(0);
    sort(s);
}