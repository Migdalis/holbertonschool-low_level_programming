#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - Data for a list
 * @str: Pointer to string
 * @len: Length of a string
 * @next: Pointer to next element
 *
 * Description: Data for a list
 */
typedef struct list
{
        char *str;
        int len;
        struct list *next;        
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);

#endif /*LISTS_H*/