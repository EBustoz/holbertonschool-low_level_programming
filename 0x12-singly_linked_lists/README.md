0x12. C - Singly linked lists

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
When and why using linked lists vs arrays
How to build and use linked lists

Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


0. Print list
1. List length
2. Add node
3. Add node at the end
4. Free list

By Edgar Butstos ( HolbertonSchool)
ebustozm@gmail.com
