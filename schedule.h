#ifndef SCHEDULE_H
#define SCHEDULE_H

typedef struct node
{
    char name[45];
    char sex[2];
    char telephone[15];
    int age;
    struct node *next;
}node;


#endif