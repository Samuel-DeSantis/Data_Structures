#include "queue.h"

Queue::Queue() {

  tail = 0;
  head = QUEUE_SIZE - 1;
  count = 0;
}

void Queue::clear() {

  tail = 0;
  head = QUEUE_SIZE - 1;
  count = 0;
}

bool Queue::isEmpty() { return !count; }
int Queue::size() { return count;}

void Queue::enqueue(QueueType d)

  if (count == QUEUE_SIZE)
    throw ContainerFullException();

  data[tail] = d;
  tail = ++tail % QUEUE_SIZE;
  count++;
}

QueueType Queue::dequeue() {

  if (count == 0)
    throw ContainerEmptyException();

  count--;
  return data[++head%QUEUE_SIZE];
}

