# Assignment 2

## 1. **What is memory Hierarchy? Explain with suitable diagram.**

The memory in a computer can be divided into five hierarchies based on the speed as well as use. The processor can move from one level to another based on its requirements. The five hierarchies in the memory are registers, cache, main memory, magnetic discs, and magnetic tapes. The first three hierarchies are volatile memories which mean when there is no power, and then automatically they lose their stored data. Whereas the last two hierarchies are not volatile which means they store the data permanently.

## 2. **What are following principals- (a) Inclusion (b) Locality (c) Coherence**

### Inclusion

Multi-level caches can be designed in various ways depending on whether the content of one cache is present in other levels of caches. If all blocks in the higher level cache are also present in the lower level cache, then the lower level cache is said to be inclusive of the higher level cache. If the lower level cache contains only blocks that are not present in the higher level cache, then the lower level cache is said to be exclusive of the higher level cache. If the contents of the lower level cache are neither strictly inclusive nor exclusive of the higher level cache, then it is called non-inclusive non-exclusive (NINE) cache.

Consider an example of a two level cache hierarchy where L2 can be inclusive, exclusive or NINE of L1. Consider the case when L2 is inclusive of L1. Suppose there is a processor read request for block X. If the block is found in L1 cache, then the data is read from L1 cache and returned to the processor. If the block is not found in the L1 cache, but present in the L2 cache, then the cache block is fetched from the L2 cache and placed in L1. If this causes a block to be evicted from L1, there is no involvement of L2. If the block is not found in either L1 or L2, then it is fetched from the main memory and placed in both L1 and L2. Now, if there is an eviction from L2, the L2 cache sends a back invalidation to the L1 cache, so that inclusion is not violated.

### Locality

Locality of reference refers to a phenomenon in which a computer program tends to access same set of memory locations for a particular time period. In other words, Locality of Reference refers to the tendency of the computer program to access instructions whose addresses are near one another. The property of locality of reference is mainly shown by loops and subroutine calls in a program.

1. In case of loops in program control processing unit repeatedly refers to the set of instructions that constitute the loop.
2. In case of subroutine calls, everytime the set of instructions are fetched from memory.
3. References to data items also get localized that means same data item is referenced again and again.

### Coherence

In a multiprocessor system, data inconsistency may occur among adjacent levels or within the same level of the memory hierarchy. In a shared memory multiprocessor with a separate cache memory for each processor, it is possible to have many copies of any one instruction operand: one copy in the main memory and one in each cache memory. When one copy of an operand is changed, the other copies of the operand must be changed also. Example : Cache and the main memory may have inconsistent copies of the same object.

As multiple processors operate in parallel, and independently multiple caches may possess different copies of the same memory block, this creates a cache coherence problem. Cache coherence is the discipline that ensures that changes in the values of shared operands are propagated throughout the system in a timely fashion. There are three distinct level of cache coherence :-

1. Every write operation appears to occur instantaneously.
2. All processors see exactly the same sequence of changes of values for each separate operand.
3. Different processors may see an operation and assume different sequences of values; this is known as non-coherent behavior.

There are various Cache Coherence Protocols in multiprocessor system. These are :-

1. MSI protocol (Modified, Shared, Invalid)
2. MOSI protocol (Modified, Owned, Shared, Invalid)
3. MESI protocol (Modified, Exclusive, Shared, Invalid)
4. MOESI protocol (Modified, Owned, Exclusive, Shared, Invalid)

These important terms are discussed as follows:

- Modified – It means that the value in the cache is dirty, that is the value in current cache is different from the main memory.
- Exclusive – It means that the value present in the cache is same as that present in the main memory, that is the value is clean.
- Shared – It means that the cache value holds the most recent data copy and that is what shared among all the cache and main memory as well.
- Owned – It means that the current cache holds the block and is now the owner of that block, that is having all rights on that particular blocks.
- Invalid – This states that the current cache block itself is invalid and is required to be fetched from other cache or main memory.

Suppose there are three processors, each having cache. Suppose the following scenario:-

- Processor 1 read X : obtains 24 from the memory and caches it.
- Processor 2 read X : obtains 24 from memory and caches it.
- Again, processor 1 writes as X : 64, Its locally cached copy is updated. Now, processor 3 reads X, what value should it get?
- Memory and processor 2 thinks it is 24 and processor 1 thinks it is 64.

## 3. **What are different cache optimization techniques? Explain in brief.**

Generally, in any device, memories that are large(in terms of capacity), fast and affordable are preferred. But all three qualities can’t be achieved at the same time. The cost of the memory depends on its speed and capacity. With the Hierarchical Memory System, all three can be achieved simultaneously.

The cache is a part of the hierarchy present next to the CPU. It is used in storing the frequently used data and instructions. It is generally very costly i.e., the larger the cache memory, the higher the cost. Hence, it is used in smaller capacities to minimize costs. To make up for its less capacity, it must be ensured that it is used to its full potential.

**Average Memory Access Time(AMAT)**
AMAT helps in analyzing the Cache memory and its performance. The lesser the AMAT, the better the performance is. AMAT can be calculated as,

<center>AMAT = Hit Ratio * Cache access time + Miss Ratio * Main memory access time = (h * tc) + (1-h) * (tc  + tm)</center></br>

Optimization of cache performance ensures that it is utilized in a very efficient manner to its full potential.

## 4. **What is cache coherence problem? How it could be solved?**

In a multiprocessor system, data inconsistency may occur among adjacent levels or within the same level of the memory hierarchy. In a shared memory multiprocessor with a separate cache memory for each processor, it is possible to have many copies of any one instruction operand: one copy in the main memory and one in each cache memory. When one copy of an operand is changed, the other copies of the operand must be changed also. Example : Cache and the main memory may have inconsistent copies of the same object.

Cache coherence is a concern raised in a multi-core system distributed L1 and L2 caches. Each core has its own L1 and L2 caches and they need to always be in-sync with each other to have the most up-to-date version of the data.

The Cache Coherence Problem is the challenge of keeping multiple local caches synchronized when one of the processors updates its local copy of data which is shared among multiple caches.

Imagine a scenario where multiple copies of same data exists in different caches simultaneously, and if the processors are allowed to update their own copies freely, an inconsistent view of memory can result.

For example, imagine a dual-core processor where each core brought a block of memory into its private cache, and then one core writes a value to a specific location. When the second core attempts to read that value from its cache, it will not have the most recent version unless its cache entry is invalidated and a cache miss occurs. This cache miss forces the second core’s cache entry to be updated. To trigger the cache invalidation we need cache coherence policies. If there is no cache coherence policy in-place, the wrong data would be read and invalid results would be produced, possibly crashing the program.

## 5. **What is Virtual memory? Explain the process of address translation considering Translation lookaside buffer (TLB).**

Virtual Memory is a storage allocation scheme in which secondary memory can be addressed as though it were part of the main memory. The addresses a program may use to reference memory are distinguished from the addresses the memory system uses to identify physical storage sites, and program-generated addresses are translated automatically to the corresponding machine addresses.

The size of virtual storage is limited by the addressing scheme of the computer system and the amount of secondary memory is available not by the actual number of the main storage locations.

It is a technique that is implemented using both hardware and software. It maps memory addresses used by a program, called virtual addresses, into physical addresses in computer memory.

1. All memory references within a process are logical addresses that are dynamically translated into physical addresses at run time. This means that a process can be swapped in and out of the main memory such that it occupies different places in the main memory at different times during the course of execution.
2. A process may be broken into a number of pieces and these pieces need not be continuously located in the main memory during execution. The combination of dynamic run-time address translation and use of page or segment table permits this.

If these characteristics are present then, it is not necessary that all the pages or segments are present in the main memory during execution. This means that the required pages need to be loaded into memory whenever required. Virtual memory is implemented using Demand Paging or Demand Segmentation.

In Operating System (Memory Management Technique : Paging), for each process page table will be created, which will contain Page Table Entry (PTE). This PTE will contain information like frame number (The address of main memory where we want to refer), and some other useful bits (e.g., valid/invalid bit, dirty bit, protection bit etc). This page table entry (PTE) will tell where in the main memory the actual page is residing.

Now the question is where to place the page table, such that overall access time (or reference time) will be less.

The problem initially was to fast access the main memory content based on address generated by CPU (i.e logical/virtual address). Initially, some people thought of using registers to store page table, as they are high-speed memory so access time will be less.

The idea used here is, place the page table entries in registers, for each request generated from CPU (virtual address), it will be matched to the appropriate page number of the page table, which will now tell where in the main memory that corresponding page resides. Everything seems right here, but the problem is register size is small (in practical, it can accommodate maximum of 0.5k to 1k page table entries) and process size may be big hence the required page table will also be big (lets say this page table contains 1M entries), so registers may not hold all the PTE’s of Page table. So this is not a practical approach.

To overcome this size issue, the entire page table was kept in main memory. but the problem here is two main memory references are required:

1. To find the frame number
2. To go to the address specified by frame number

To overcome this problem a high-speed cache is set up for page table entries called a Translation Lookaside Buffer (TLB). Translation Lookaside Buffer (TLB) is nothing but a special cache used to keep track of recently used transactions. TLB contains page table entries that have been most recently used. Given a virtual address, the processor examines the TLB if a page table entry is present (TLB hit), the frame number is retrieved and the real address is formed. If a page table entry is not found in the TLB (TLB miss), the page number is used as index while processing page table. TLB first checks if the page is already in main memory, if not in main memory a page fault is issued then the TLB is updated to include the new page entry.

**Steps in TLB hit**

1. CPU generates virtual (logical) address.
2. It is checked in TLB (present).
3. Corresponding frame number is retrieved, which now tells where in the main memory page lies.

**Steps in TLB miss**

1. CPU generates virtual (logical) address.
2. It is checked in TLB (not present).
3. Now the page number is matched to page table residing in main memory (assuming page table contains all PTE).
4. Corresponding frame number is retrieved, which now tells where in the main memory page lies.
5. The TLB is updated with new PTE (if space is not there, one of the replacement technique comes into picture i.e either FIFO, LRU or MFU etc).

**Effective memory access time(EMAT)**
TLB is used to reduce effective memory access time as it is a high speed associative cache.
EMAT = h*(c+m) + (1-h)*(c+2m)
where, h = hit ratio of TLB
m = Memory access time
c = TLB access time

## 6. **Consider a 8-way set associative mapped cache. The size of cache memory is 512 KB and there are 10 bits in the tag. Find the size of main memory.**

## 7. **A 4-way set-associative cache memory unit with a capacity of 16 KB is built using a block size of 8 words. The word length is 32 bits. The size of the physical address space is 4 GB. The number of bits for the TAG field is?**

## 8. **What is the average memory access time for a machine with a cache hit rate of 80%**
