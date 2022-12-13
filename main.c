#include <stdio.h>
#include "book.h"
#include "queue.h"

const int maxSize = 5;

int main() {
    struct Queue *queue = createQueue(maxSize);

    push(queue, createBook("Title"));
    push(queue, createBook("Other Title 2"));
    push(queue, createBook("Other Title 3"));
    push(queue, createBook("Other Title 4"));
    push(queue, createBook("Other Title 5"));

    pop(queue);
    pop(queue);
    pop(queue);
    pop(queue);

    push(queue, createBook("New title 6"));
    push(queue, createBook("New title 7"));

    pop(queue);

    printf("%s", front(queue)->name);

    return 0;
}
