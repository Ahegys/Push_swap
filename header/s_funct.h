#ifndef S_FUNCT_H
#define S_FUNCT_H
//
typedef struct l_func
{
    int    *(*sa)(int *);
    int    *(*sb)(int *);
	int		*(*ss)(int *, int *);
	void    (*ra)(int *);
    void    (*rb)(int *);
    void    (*rr)(int *);
    void    (*pa)(int *);
    void    (*pb)(int *);
    void    (*rra)(int *);
    void    (*rrb)(int *);
    void    (*rrr)(int *);
}               t_func;

#endif
