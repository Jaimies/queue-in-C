#include <malloc.h>
#include "queue.h"

struct Queue *createQueue(int maxSize) {
    struct Queue *queue = (struct Queue *) malloc(sizeof(struct Queue) + sizeof(struct Book[maxSize]));

    queue->maxSize = maxSize;
    queue->front = 0;
    queue->rear = maxSize - 1;
    queue->size = 0;

    return queue;
}

struct Book *front(struct Queue *queue) {
    if (empty(queue)) return NULL;
    return queue->values[queue->front];
}

int nextIndex(struct Queue *queue, int value) {
    if (value >= queue->maxSize - 1) return 0;
    return value + 1;
}

void push(struct Queue *queue, struct Book *book) {
    if (full(queue)) return;

    queue->rear = nextIndex(queue, queue->rear);
    queue->values[queue->rear] = book;

    queue->size++;
}

void pop(struct Queue *queue) {
    if (empty(queue)) return;

    queue->values[queue->front] = NULL;
    queue->front = nextIndex(queue, queue->front);

    queue->size--;
}

int size(struct Queue *queue) {
    return queue->size;
}

bool full(struct Queue *queue) {
    return size(queue) >= queue->maxSize;
}

bool empty(struct Queue *queue) {
    return size(queue) == 0;
}
