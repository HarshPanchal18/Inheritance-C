#include <stdio.h>
#include "ll.h"

int main()
{
    struct list_int *ll = new_list_int(10);
    print_addrs(ll);
    return 0;
}

// gcc main.c ll.c -o main
// ./main
/*
00000000001E6AB0 head
00000000001E6AB0 head->list->next
00000000001E6AB8 head->list->prev
00000000001E6AC0 head value
*/
