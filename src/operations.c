#include <unistd.h>
#include <stdio.h>
#include "../42Barcelona_libft/libft.h"
#include "../inc/pushswap.h"
// TODO
//  sa - swap top two in stack A.
void sa(t_stack **lst) 
{
    t_stack *tmp;
    tmp = *lst;
    tmp->pre = tmp->next;
    while (tmp != NULL) {
     printf("%d ", tmp->content);
     tmp = tmp->next;
   }
}
//  sb - swap top two in stack B.
//  ss - run both above at the same time.
//  ra - Top number goes to bottom of stack A.
//  rb - Top number goes to bottom of stack B.
//  rr - run both above at the same time.
//  rra - Bottom number goes to top of stack A.
//  rrb - Bottom number goes to top of stack B.
//  rrr - run both above at the same time.
//  pa - Send top of B to top of A.
//  pb - - Send top of A to top of B.