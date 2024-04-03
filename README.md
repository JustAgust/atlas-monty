# Monty

**Description**
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

# Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- Don’t forget to push your header file
- All your header files should be include guarded
- You are expected to do the tasks in the order shown in the project

### Data structures
We are to use the following data structures and include them in our header file monty.h.

#### First struct
'''c
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
'''
#### Second struct


/**
 \* struct instruction_s - opcode and its function
 \* @opcode: the opcode
 \* @f: function to handle the opcode
 \*
 \* Description: opcode and its function
 \* for stack, queues, LIFO, FIFO
 \*/

'''c
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
'''
## Author
Chase Sparks

## License
This is open source. Feel free to modify the code to your purposes but be warned, it may contain many bugs and may not work as it is.

## Acknowledgments
I acknowledge God almighty and His Son Jesus Christ. Without their sustaining power none of this would be possible. I acknowledge those who came before me, those Pioneers in this fascinating field. Those who worked diligently to give us this technological wonder.