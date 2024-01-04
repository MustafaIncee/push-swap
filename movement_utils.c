#include "push_swap.h"

void ra(t_data *s)
{
    int tmp;
    int i;

    tmp = s->a[0];
    i = 0;
    while(i < s->size_a -1)
    {
        s->a[i] = s->a[i + 1];
        i++;
    }
    s->a[s->size_a - 1] = tmp;
    write(1, "ra\n", 3);
}

void rb(t_data *s)
{
    int tmp;
    int i;

    tmp = s->b[0];
    i = 0;
    while(i < s->size_b -1)
    {
        s->b[i] = s->b[i + 1];
        i++;
    }
    s->b[s->size_b - 1] = tmp;
    write(1, "rb\n", 3);
}

void rr(t_data *s)
{
    ra(s);
    rb(s);
    write(1, "rr\n", 3);
}

void rra(t_data *s)
{
    int tmp;
    int i;

    tmp = s->a[s->size_a - 1];     /// 10 20 30 40
    i = s->size_a - 1;            // 0  1  2  3
                                  //  3  0   1   2
    while(i > 0)
    {
        s->a[i] = s->a[i - 1];
        i--;
    }   
    s->a[0] = tmp;
    write(1, "rra\n", 4);
}

void rrb(t_data *s)
{
    int tmp;
    int i;

    tmp = s->b[s->size_b - 1];     /// 10 20 30 40
    i = s->size_b - 1;            // 0  1  2  3
                                  //  3  0   1   2
    while(i > 0)
    {
        s->b[i] = s->b[i - 1];
        i--;
    }
    s->b[0] = tmp;
    write(1, "rrb\n", 4);                              
}
