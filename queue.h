#pragma once

#include "book.h"
#include <stdbool.h>

struct Queue {
    int maxSize;
    int front;
    int rear;
    int size;

    struct Book *values[];
};

struct Queue *createQueue(int maxSize);

struct Book *front(struct Queue *queue);

void push(struct Queue *queue, struct Book *book);
void pop(struct Queue *queue);

int size(struct Queue *queue);
bool full(struct Queue *queue) ;
bool empty(struct Queue *queue) ;
