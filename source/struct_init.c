#include "push_swap.h"

t_func  init()
{
    t_func  start;
    
    start.sa = swap_sa;
    start.sb = swap_sb;
    start.ss = swap_ss;
    start.ra = swap_ra;
    start.rb = swap_rb;
    start.rr = swap_rr;
    start.pa = swap_pa;
    start.pb = swap_pb;
    start.rra = swap_rra;
    start.rrb = swap_rrb;
    start.rrr = swap_rrr;
    return (start);
}