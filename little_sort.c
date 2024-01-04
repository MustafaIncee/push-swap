
#include "push_swap.h"

void little_sort_two(t_data *s)
{
    if(s->a[0] > s->a[1])
    sa(s);
}

void	little_sort_three(t_data *s)
{
	if (s->a[0] < s->a[1] && s->a[1] < s->a[2])
		return ;
	if (s->a[0] < s->a[1])
	{
		if (s->a[0] > s->a[2])
			rra(s);
		else
		{
			rra(s);
			sa(s);
		}
	}
	else
	{
		if (s->a[0] < s->a[2])
			sa(s);
		else if (s->a[1] < s->a[2])
			ra(s);
		else
		{
			sa(s);
			rra(s);
		}
	}
}

void	little_sort_four(t_data *s)
{
	while (a_min(s) != 0)
	{
		if (a_min(s) == 1)
			ra(s);
		else if (a_min(s) == 2)
			rra(s);
		else if (a_min(s) == 3)
			rra(s);
	}
	pb(s);
	little_sort_three(s);
	pa(s);
}

void little_sort_five(t_data *s)
{
    while(a_min(s) != 0)
    {
         if(a_min(s) >= 2)
            rra(s);
            else
            ra(s);

    }
    pb(s);
    little_sort_four(s);
    pa(s);
}

void little_sort(t_data *s)
{
    if(s->size_a == 2)
    little_sort_two(s);
    else if(s->size_a == 3)
    little_sort_three(s);
    else if(s->size_a == 4)
    little_sort_four(s);
    else if(s->size_a == 5)
    little_sort_five(s);
    free(s->a);
    free(s->b);
    free(s);
    exit(0);
}