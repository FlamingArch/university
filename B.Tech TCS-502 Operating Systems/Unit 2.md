**LECTURE 1: Multiprocessing**

# Multiprocessing

Multiprocessing is when multiple processors are involved.

## Load Balancing

Dividing processes among multiple processors is called load balancing.

## Types of Multiprocessing

1. Asymmetric Multiprocessing
2. Symmetric Multiprocessing

## Asymmetric Multiprocessing

In asymmetric multiprocessing, CPU 0 (first CPU) is assigned the role of master, and the rest of the processes are assigned the roles of a slave. The master decides what processor will handle what processes and is governing overall system processes.

## Symmetric Multiprocessing (SMP)

In symmetric multiprocessing, every processor has equal power and is all responsible for their work. Load Balancing is performed by a mechanism called Migration.

Migrations are of two types:

1. Push Migration
2. Pull Migration

## Push Migration

In push migration, a heavily utilized processor will check the load of the next processor, and if lightly utilized, will push some of its load to the next processor.

## Pull Migration

In pull migration, a lightly utilized processor will check the load of the previous processor, and if heavily utilized, will pull some of the load to itself.

# Processor Affinity

Load balancing might sometimes reduce performance.

If any process is associated with any processor, it is not supposed to be removed from that processor.

It is the opposite of load balancing.

<hr/>

**LECTURE 2: Process Synchronization**

# Process Synchronization

In an OS, there may be multiple **processes** performing different tasks, requiring different resources. Process synchronization is the process of assigning different resources to different programs.

A counter is kept for resources, and everytime a producer produces, the counter is increased by one, and everytime a consumer consumes, the counter is decreased by 1.

```c++
typedef struct {
    ...
} item;

item buffer[BUFFER_SIZE];
int in = 0;
int out = 0;
int counter = 0;

item nextProduced;

// PRODUCER
while(1) {
    while (counter==BUFFER_SIZE);    // Do Nothing
    buffer[in] = nextProduced;
    in = (in + 1) % BUFFER_SIZE;
    counter++;
}

// CONSUMER
item nextConsumed;

while(1) {
    while (counter==0);    // Do Nothing
    nextConsumed = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    counter--;
}

```

<hr/>

**LECTURE 3: Critical Section and its Solution**

# Critical Section
