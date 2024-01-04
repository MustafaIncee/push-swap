
#include "push_swap.h"

void  count_a_stack(t_data *s, int index)
{
    s->ra_count = 0;
    s->rra_count = 0;
    if(s->size_a / 2 >= index)
    s->ra_count = index;
        else
        s->rra_count = s->size_a - index;   
}

void count_b_stack(t_data *s, int index)
{
    s->rb_count = 0;
    s->rrb_count = 0;
    if(s->size_b / 2 >= index)
    s->rb_count = index;
        else
        s->rrb_count = s->size_b - index;
}

int rr_movement(t_data *s, int index_a, int index_b)
{
    int count;

    count = 0;
    count_a_stack(s, index_a);
    count_b_stack(s, index_b);
    if(s->ra_count >= s->rb_count)
    count = s->ra_count;
        else
        count = s->rb_count;
    return (count);
}