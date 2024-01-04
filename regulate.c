
#include "push_swap.h"

int minmove_b(t_data *s)
{
    int	temp;
    int	i;
    int	j;

    i = 1;
    j = 0;
    temp = s->min_count[0];
    while (s->size_b > i)
    {
        if (temp > s->min_count[i])
        {
            temp = s->min_count[i];
            j = i;
        }
        i++;
    }
    return (j);
}


void regulate_a(t_data *s)
{
	int	j;

	total_movement(s);
	j = minmove(s);
	if (s->size_a / 2 >= j)
	{
		while (j--)
			ra(s);
	}
	else
	{
		j = s->size_a - j;
		while (j--)
			rra(s);
	}
	regulate_b(s);
	pb(s);
}

void regulate_b(t_data *s)
{
    int j;

    j = minmove_b(s);
    if (s->size_b / 2 >= j)
    {
        while (j > 0)
        {
            rb(s);
            j--;
        }
    }
    else
    {
        while (s->size_b - j > 0)
        {
            rrb(s);
            j++;
        }
    }
}

void reset_b(t_data *s)
{
    int i;

    b_max(s);
    i = s->max_b;
    if(s->size_b / 2 >= i)
    {
        while (i > 0)
        {
            rb(s);
            i--;
        }
    }
    else
    {
        while (s->size_b - i > 0)
        {
            rrb(s);
            i++;
        }
    }
}

void reg_a(t_data *s)
{
    int i;

    i = 0;

    while (i < s->size_a)
    {
        s->a[i] = s->a[i + 1];
        i++;
    }
}

void reg_b(t_data *s)
{
    int i;

    i = 0;

    while (i < s->size_b)
    {
        s->b[i] = s->b[i + 1];
        i++;
    }
}