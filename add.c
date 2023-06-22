#include "monty.h"
/**
 * f_add - Adds the top two elements of the stack.
 *
 * @head: Pointer to the head of the stack.
 * @counter: Line number where the instruction appears.
 *
 * Return: No return value.
 */
void f_add(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
