
#include "push_swap.h"

int first_stack_movement(t_data *s, int index)
{
     if(s->size_a / 2 >= index)
     return (index);
        else
        return (s->size_a - index);
}

int second_stack_movement(t_data *s, int index)
{
    if(s->size_b / 2 >= index)
    return (index);
        else
        return (s->size_b - index);
}

int	minmove(t_data *s)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	j = 0;
	temp = s->min_count[0];
	while (s->size_a > i)
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

void total_movement(t_data *s)
{
    int i;
    int ftl_index;
    int ftb_index;

    i = 0;

    while (i < s->size_a)
    {
        bmin(s);
        if(s->a[i] < s->min_b)
        {
            ftl_index = find_to_little(s);
            s->min_count[i] = first_stack_movement(s, i) + second_stack_movement(s, ftl_index) - rr_movement(s, i, ftl_index) + 1;

        }
        else
        {
            ftb_index = find_to_big(s);
            s->min_count[i] = first_stack_movement(s, i) + second_stack_movement(s, ftb_index) + 1;
        }
        i++;
    
}
s->min = minmove(s);
}