#ifndef _QUEUE_H
#define _QUEUE_H

#include <exceptions.h>

const int QUEUE_SIZE = 16;

typedef int QueueType;

class Queue {
 public:
  Queue();
  ~Queue() { }

  void clear();

  bool isEmpty();
  int size();

  void enqueue(QueueType d);
  QueueType dequeue();

 private:
  QueueType
    data[QUEUE_SIZE];
  int
    tail,
    head,
    count;
};

#endif

