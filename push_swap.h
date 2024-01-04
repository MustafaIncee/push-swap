#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_data
{
    int		*a;
    int		*b;
    int		size_a;
    int		size_b;
    int     min_move_a;
    int     min_move_b;
    int     min;
    int     min_b;
    int     min_a;
    int     max_a;
    int     max_b;
    int     *min_count;
    int     ra_count;
    int     rb_count;
    int     rra_count;
    int     rrb_count;
}			t_data;


void ra(t_data *s);
void rb(t_data *s);
void rr(t_data *s);
void rra(t_data *s);
void rrb(t_data *s);
void pa(t_data *s);
void pb(t_data *s);
void sa(t_data *s);
void sb(t_data *s);
void ss(t_data *s);
void rrr(t_data *s);
void free_stack(char **str);
void free_arg(char *av);
void is_duplicate(t_data *s);
int is_sorted(t_data *s);
void check_args(t_data *s, int ac, char **av);
void  count_a_stack(t_data *s, int index);
void count_b_stack(t_data *s, int index);
int rr_movement(t_data *s, int index_a, int index_b);
 int is_numerical(int c);
void initialize(t_data *s, char **av);
    void initialize_stack(t_data *s, char **av, char **str);
char *initialize_args(t_data *s, int ac, char **av);
void little_sort_two(t_data *s);
void    little_sort_three(t_data *s);
void    little_sort_four(t_data *s);
void little_sort_five(t_data *s);
void little_sort(t_data *s);
int a_min(t_data *s);
void sort(t_data *s);
int first_stack_movement(t_data *s, int index);
int second_stack_movement(t_data *s, int index);
int minmove(t_data *s);
void total_movement(t_data *s);
int minmove_b(t_data *s);
void regulate_a(t_data *s);
void regulate_b(t_data *s);
void reset_b(t_data *s);
void reg_a(t_data *s);
void reg_b(t_data *s);
void multi_sort(t_data *s);
void bmin(t_data *s);
void b_max(t_data *s);
int find_to_little(t_data *s);
int find_to_big(t_data *s);
int min_index_a(t_data *s);
void ft_error(char *str);
long ft_atol(char *str);
int word_count(char **str);
char    *ft_strjoin2(char *s1, char *s2);





#endif
