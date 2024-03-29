#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#define STACK 0
#define QUEUE 1





/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void mnty_push(stack_t **stack, unsigned int line_number);
void mnty_pall(stack_t **stack, unsigned int line_number);
int exec_mnty(FILE *fle_fd);
void (*read_op_func(char *opcode))(stack_t**, unsigned int);
void mnty_pint(stack_t **stack, unsigned int line_number);
void mnty_pop(stack_t **stack, unsigned int line_number);
void mnty_swap(stack_t **stack, unsigned int line_number);
void mnty_add(stack_t **stack, unsigned int line_number);
void mnty_nop(stack_t **stack, unsigned int line_number);
void mnty_sub(stack_t **stack, unsigned int line_number);
void mnty_div(stack_t **stack, unsigned int line_number);
void mnty_mul(stack_t **stack, unsigned int line_number);
void mnty_mod(stack_t **stack, unsigned int line_number);
void mnty_pchar(stack_t **stack, unsigned int line_number);
void mnty_pstr(stack_t **stack, unsigned int line_number);
void mnty_rotl(stack_t **stack, unsigned int line_number);
void mnty_rotr(stack_t **stack, unsigned int line_number);
void mnty_stack(stack_t **stack, unsigned int line_number);
void mnty_queue(stack_t **stack, unsigned int line_number);





#endif
