#include "monty.h"

/**
 * rotl - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void rotl(stack_t **stack, unsigned int line_number)
{
        stack_t *tm = *stack;
        (void) line_number;

        if (!stack || !*stack || !(*stack)->next)
                return;
        (*stack)->next->prev = NULL;
        while (tm->next)
                tm = tm->next;
        tm->next = *stack;
        (*stack) = (*stack)->next;
        tm->next->next = NULL;
        tm->next->prev = tm;
}

/**
 * rotr - s
 * @stack: Doubly linked 
 * @line_number: line File execution
 */
void rotr(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp;
        (void) line_number;

        if (!stack || !*stack || !(*stack)->next)
                return;

        tmp = *stack;
        while (tmp->next)
                tmp = tmp->next;

        tmp->next = *stack;
        tmp->prev->next = NULL;
        tmp->prev = NULL;

        (*stack)->prev = tmp;
        *stack = tmp;

}
