#ifndef CMD_FIFO_H
#define CMD_FIFO_H

// A simple and terrifying fifo queue in C.
// This is an "optimisation" to add length, save space and improve speed.
// Don't let the head/tail "pointers" overflow.



typedef struct queue {
  size_t head;
  size_t tail;
  size_t size;
  void** data;
  size_t (*_queue_count_) (struct queue*);
  void*  (*_queue_read_)(struct queue*);
  int (*_queue_write_)(struct queue*, void*);
  void (*_queue_clr_)(struct queue*);
} queue_t;


queue_t cmdQueue;

/* ============================================================================================= */
/* DEFINES                                                                                       */
/* ============================================================================================= */


/* ============================================================================================= */
/* STRUCTURES                                                                                    */
/* ============================================================================================= */



/* --------------------------------------------------------------------------------------------- */



/* ============================================================================================= */


/* ============================================================================================= */



/* ============================================================================================= */
/* EVENT FUNCTIONS                                                                               */
/* ============================================================================================= */



#endif
