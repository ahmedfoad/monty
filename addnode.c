#include "monty.h"
/**
 * f_pop - Removes the top element of the stack.
 *
 * @head: Pointer to the head of the stack.
 * @counter: Line number where the instruction appears.
 *
 * Return: No return value.
 */
void f_pop(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(temp);
}
