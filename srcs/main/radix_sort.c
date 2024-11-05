/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:54:07 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/11/04 08:14:46 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static  int get_max_bit(t_stacks **stack)
{
    t_stacks    *head;
    int         max;
    int         max_bit;

    head = *stack;
    max = head->index;
    max_bit = 0;
    while (head)
    {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    while ((max >> max_bit) != 0)
        max_bit++;
    return (max_bit);
}

void    radix_sort(t_stacks **stack_a, t_stacks **stack_b)
{
    t_stacks    *head_a;
    int         i;
    int         j;
    int         size;
    int         max_bit;

    i = 0;
    head_a = *stack_a;
    size = ft_lstsize(head_a);
    max_bit = get_max_bit(stack_a);
    while (i < max_bit)
    {
        j = 0;
        while (j++ < size)
        {
            head_a = *stack_a;
            if (head_a && ((head_a->index >> i) & 1) == 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
        }
        while (ft_lstsize(*stack_b) != 0)
            pa(stack_a, stack_b);
        i++;
    }
}

/*
    It looks like you’re encountering a segmentation fault in your `radix_sort` function. Let's go through the code to 
    identify potential issues.

### Key Areas to Check

1. **Pointer Management**:
   - You have pointers like `head_a` which is reassigned inside the loop. If you're not careful with the state of the list 
   and how you manipulate it, you might end up accessing invalid memory.

2. **Loop Logic**:
   - In `radix_sort`, the logic where you're using `ra()` or `pb()` should maintain the integrity of the stack. 
   If you remove nodes from `stack_a` without proper checks, you may end up dereferencing a null pointer.

3. **Memory Allocation**:
   - Ensure that your `ft_lstnew` and other memory allocation functions are correctly creating nodes and that you're not 
   leaking memory or trying to access freed memory.

4. **Freeing Memory**:
   - The function `free_stack` is meant to free the stack, but you also need to ensure that you're not trying to access the 
   stack after it's freed.

### Segmentation Fault in `radix_sort`

Looking closely at this section:

```c
while (j++ < size)
{
    head_a = *stack_a; // This can lead to issues
    if (((head_a->index >> i) & 1) == 1) // Potential dereference of an invalid head_a
        ra(stack_a);
    else
        pb(stack_a, stack_b);
}
```

- Here, if `ra(stack_a)` is called, it rotates the stack, which can change the head of `*stack_a`. 
When the next iteration of the loop begins, `head_a` points to the old head, which may no longer be valid if it has been removed.
- You might need to adjust your logic so that you re-fetch the head after any modification to the stack.

### Suggested Fixes

1. **Update Head after Operations**:
   - After you perform operations that modify `*stack_a`, you need to refresh `head_a`:
     ```c
     head_a = *stack_a; // Refresh the head after a modification
     ```

2. **Check List Size**:
   - Always check the size of the list before dereferencing pointers to prevent accessing invalid memory.

3. **Debugging Output**:
   - You could add some debug print statements to trace the values of `head_a`, the indices, and the state of 
   the stacks at various points to understand where the logic might be failing.

### Updated Loop Logic

Here's a quick update for your loop in `radix_sort`:

```c
while (i < max_bit)
{
    j = 0;
    while (j < size)
    {
        head_a = *stack_a; // Get current head
        if (head_a && ((head_a->index >> i) & 1) == 1) // Check if head_a is valid
            ra(stack_a);
        else
            pb(stack_a, stack_b);
        j++;
    }
    while (ft_lstsize(*stack_b) != 0)
        pa(stack_a, stack_b);
    i++;
}
```

### Summary

By making sure that you're always referencing valid memory and refreshing pointers after any mutation, 
you should be able to avoid segmentation faults. Debugging with prints can also provide insights into 
what’s happening during execution. Give this a try and see if it resolves your issue!
*/