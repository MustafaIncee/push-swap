
#include "push_swap.h"

void pa(t_data *s)
{
    int tmp;
    int i;

    i = 0;

    if (s->size_b == 0)
        return;

    tmp = s->b[0];
    while(i < s->size_b -1)
    {
        s->b[i] = s->b[i + 1];
        i++;
    }
    s->size_a++;
    s->size_b--;
    
    i = 0;
    while(i < s->size_a -1)
    {
        s->a[i + 1] = s->a[i];
        i++;
    }
    s->a[0] = tmp;
    write(1, "pa\n", 3);
}

void pb(t_data *s)
{
    int tmp;
    int i;

    i = 0;

    if (s->size_a == 0)
        return;

    tmp = s->a[0];
    while(i < s->size_a -1)
    {
        s->a[i] = s->a[i + 1];
        i++;
    }
    s->size_b++;
    s->size_a--;
    
    i = 0;
    while(i < s->size_b -1)
    {
        s->b[i + 1] = s->b[i];
        i++;
    }
    s->b[0] = tmp;
    write(1, "pb\n", 3);
}

void sa(t_data *s)
{
    int tmp;

    tmp = s->a[0];
    s->a[0] = s->a[1];
    s->a[1] = tmp;
    write(1, "sa\n", 3);
 
}
void sb(t_data *s)
{
    int tmp;

    tmp = s->b[0];
    s->b[0] = s->b[1];
    s->b[1] = tmp;
    write(1, "sb\n", 3);
}

void ss(t_data *s)
{
    sa(s);
    sb(s);
    write(1, "ss\n", 3);
}