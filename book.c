#include <malloc.h>
#include <string.h>
#include "book.h"

struct Book *createBook(char name[50]) {
    struct Book *book = (struct Book *) malloc(sizeof(struct Book));

    book->name = malloc(sizeof(char) * 50);
    strcpy(book->name, name);

    return book;
}


