
#include "push_swap.h"


void bmin(t_data *s)
{
    int i;

    i = 0;
    s->min_b = s->b[0];
    while(i < s->size_b)
    {
        if(s->b[i] < s->min_b)
        {
            s->min_b = s->b[i];
        }
        i++;
    }
}

void b_max(t_data *s)
{
    int i;

    i = 0;

    s->max_b = s->b[0];
    while(i < s->size_b)
    {
        if(s->b[i] > s->max_b)
        {
            s->max_b = s->b[i];
        }
        i++;
    }
}

int find_to_little(t_data *s)
{
    int i;
    int index;
    int min;

    i = 0;
    index = 0; 
    min = s->min_b;
    while(i < s->size_b)
    {
        if(s->b[i] < min)
        {
            min = s->b[i];
            index = i;
        }
        i++;
    }
return  (index);
}

int find_to_big(t_data *s)
{
    int i;
    int index;
    int max;

    i = 0;
    index = 0; 
    max = s->max_b;
    while(i < s->size_b)
    {
        if(s->b[i] > max)
        {
            max = s->b[i];
            index = i;
        }
        i++;
    }
return  (index);
}

int min_index_a(t_data *s)
{
    int i;
    int index;

    index = 0;
    i = 1;
    while(i < s->size_a)
    {
        if(s->a[i] < s->a[index])
        {
            index = i;
        }
        i++;
    }
    return (index);
}

