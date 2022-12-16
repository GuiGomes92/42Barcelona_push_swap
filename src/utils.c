#include "../defines.h"

int ft_check_error(int argc, char **argv)
{
    int i;

    i = 0;
    //check if not number
    while(i <= argc)
    {
        if (ft_atoi(argv[i]) == 0)
        {
            write(1, "Error", 5);
            return(-1);
        }
        i++;
    }
	//check if duplicates
	//check if not min int or max int
	return(0);
}

// print the linked list value
void printLinkedlist(t_stack *p) {
   while (p != NULL) {
     printf("%d ", p->num);
     p = p->next;
   }
}

int create_node() {
  // Initialize nodes
    t_stack *head;
    t_stack *one = NULL;
    t_stack *two = NULL;
    t_stack *three = NULL;

  // Allocate memory
    one = malloc(sizeof(t_stack));
    two = malloc(sizeof(t_stack));
    three = malloc(sizeof(t_stack));

  // Assign value values
    one->num = 1;
    two->num = 2;
    three->num = 3;

  // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

  // printing node-value
    head = one;
    printLinkedlist(head);
  return(0);
}