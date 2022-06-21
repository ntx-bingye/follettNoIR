#include <stdlib.h>
#include <assert.h>
#include "cmd_fifo.h"
#include "modbus.h"

void queue_clr(queue_t *queue);
size_t queue_count(queue_t *queue);
void* queue_read(queue_t *queue);
int queue_write(queue_t *queue, void* handle);

queue_t cmdQueue ={
  .head = 0,
  .tail = 0,
  .size = QUEUE_SIZE,
  .data = NULL,
  ._queue_count_ = queue_count,
  ._queue_read_  = queue_read,
  ._queue_write_ = queue_write,
  ._queue_clr_   = queue_clr
};

void queue_clr(queue_t *queue) 
{
    void *handle = queue_read(queue);  
    while (NULL != handle)
    {
        free(handle);  //release memory
        handle = queue_read(queue); 
    };
}

size_t queue_count(queue_t *queue) {
  return queue->head - queue->tail;
}

void* queue_read(queue_t *queue) {
    if (queue->tail == queue->head) {
        return NULL;
    }
    void* handle = queue->data[queue->tail];
    queue->data[queue->tail] = NULL;
    queue->tail = (queue->tail + 1) % queue->size;
    return handle;
}

int queue_write(queue_t *queue, void* handle) {
    if (((queue->head + 1) % queue->size) == queue->tail) {
        return -1;
    }
    queue->data[queue->head] = handle;
    queue->head = (queue->head + 1) % queue->size;
    return 0;
}