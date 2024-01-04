
#include "push_swap.h"

void multi_sort(t_data *s)
{
    int i;
    int j;

    total_movement(s);
    i = minmove(s);
    j = minmove_b(s);
    count_a_stack(s, i);
    count_b_stack(s, j);
    while(s->ra_count > 0 && s->rb_count > 0)
    {
        rr(s);
        s->ra_count--;
        s->rb_count--;
    }
    while (s->rra_count > 0 && s->rrb_count > 0)
    {
        rrr(s);
        s->rra_count--;
        s->rrb_count--;
    }
}
