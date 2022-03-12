#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

// data types definition
typedef int QData;

typedef struct _queue
{
	QData *arr;
	size_t elementNum;
	size_t maxSize;
} Queue;

// functions definition
Queue *CreateQueue(size_t size);
void DestroyQueue(Queue *pQueue);

bool IsQueueEmpty(Queue queue);
bool IsQueueFull(Queue queue);

void AssignQData(QData *dest, QData orign);

QData Peek(Queue queue);

void EnQueue(Queue *pQueue, QData data);
QData DeQueue(Queue *pQueue);

#endif