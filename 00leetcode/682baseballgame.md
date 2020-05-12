push랑 print까지 구현함

그다음부터 하면 됨

```c

typedef struct  s_node
{
    int             content;
    struct s_node   *next;
}               t_node;

void            push(t_node **stack, int n)
{
    t_node  *new;
    
    new = (t_node *)malloc(sizeof(t_node));
    new->content = n;
    new->next = *stack;
    *stack = new;
}

void            print_stack(t_node  *stack)
{
    t_node *curr;
    
    curr = stack;
    while (curr != NULL)
    {
        printf("%d ", curr->content);
        curr = curr->next;
    }
    printf("\n");
}
int calPoints(char ** ops, int opsSize)
{
    
    t_node  *stack;
    int     i;
    
    stack = NULL;
    push(&stack, 3);
    push(&stack, 2);
    print_stack(stack);
    /*i = 0;
    while (i < opsSize)
    {
        
    }*/
    return (0);
}
```

