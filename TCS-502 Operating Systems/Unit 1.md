**LECTURE 1, 2: Introduction**

# Operating System

A program that acts as an intermediary between a user of a computer and the computer hardware.

## Goals:

- Execute user programs and make solving user problems easier.
- Make the computer system convinent to use.
- Use the computer hardware in an efficient manner.

## What Operating Systems do

Depends on the POV:

- Users want convinence, ease of use, good performance.
- But shared computer such as mainframes must keep all users happy.
- Users of dedicated systems such as workstations have dedicated resources but frequently use shared resources from servers.
- Handheld computers are resource poor, optimised for usability and battery life.
- Some computers have little or no user interface, such as embedded computers in devices and automobiles.

## Definition of OS

**OS is a resource allocator:**

- Manages all resources.
- Decides between conflicting requests for efficient and fair resource use.

**OS is a control program**

- Controls execution of programs to prevent errors and improper use of computer.

## Operations

- **Dual Mode** operation allows OS to protect irself and other system components.
  - Modes:
    1. **User Mode**
    2. **Kernal Mode**
  - Mode bit provided by hardware
    - Provides ability to distinguish when system is running user code or kernal code.
    - Some instructions are designated as **privileged**, only executable in kernal mode.
    - System call changes mode to kernal, return from call resets it to user.
- Increasingly, CPUs support multi-mode operations.
  - i.e. **virtual machine manager (VMM)** mode for guest **VMs**.

# Computer System Organisation

- A bootstrap program is loaded at power up or reboot.

  - Typically stored in ROM or EPROM, generally known as firmware.
  - Initailizes all aspects of the system.
  - Loads operating system kernal and starts execution.

- Computer-system operation:
  - One or more CPUs, device controllers connect through common bus providing access to shared memory.
  - Concurrent execution of CPUs aand devices competing for memory cycles.

# Computer System Operation

- IO devies and the CPU can execute concurrently.
- Each device controller is in charge of a particular device type.
- Each device controller has a local buffer.
- CPU moves data from/to main memory to/from local buffers.
- IO is from the device to local buffer of controller.
- Device controller informs CPU that it has finished its operation by causing an interrupt.

# Computer System Structure

Computer system can be divided into four componenets:

- Hardware: Provides basic computing resources. Eg: CPU, Memory, I/O Devices
- Operating System: Controls and coordinates the use of hardware among various applications and users.
- Application Programs: Define the ways in which the system resources are used to solve the computing problems of the users.
- Users: People, machines, other computers.

# IO Structure

- After I/O starts. control returns to user program only upon I/O completion.
  - Wait instruction idles the CPU until the next interrupt.
  - Wait loop (contention for memory access).
  - At most one I/O request is outstanding at a time, no simultaneous I/O processing.
- After I/O starts, control returns to user program without waiting for I/O completion.
  - **System Call:** Request to the OS to allow user to wait for I/O completion.
  - **Device-Status Table:** Contains entry for each I/O device indicating it's type, address and state.
  - OS Indexes into I/O device table to determine device status and to modify table entry to include interrupt.

# Storage Notations:

| Full Name | Abbreviation | Bytes    |
| --------- | ------------ | -------- |
| Kilobyte  | KB           | $1024$   |
| Megabyte  | MB           | $1024^2$ |
| Gigabyte  | GB           | $1024^3$ |
| Terabyte  | TB           | $1024^4$ |
| Petabyte  | PB           | $1024^5$ |

# Storage Structure

- **Main Memory:** Only large storage media that the CPU can access directly.
  - Random Access
  - Typically Volatile
- **Secondary Storage:** Extension of main memory that provides large non-volatile storage capacity.
- **Hard Disks:** Rigid metal or glass platters covered with magnetic recording material.
- **Solid-State Disks:** Faster than hard disks, non-volatile.
  - Various technologies.
  - Becoming more popular.

# Storage Hierarchy

- Storage systems organized in hierarchy
  - Speed
  - Cost
  - Volatility
- **Caching:** Copying information into faster storage system; main memory can be viewed as a cache for secondary storage.
- **Device Driver:** for each device controller to manage I/O
  - Provides uniform interface between controller and kernal.

## Storage Device Hierarchy

- Registers
- Cache
- Main Memory
- Solid-state Disk
- Hard Disk
- Optical Disk
- Magnetic Tapes

# Direct Memory Access Structure

- Used for high-speed I/O Devices able to transmit information at close to memory speed.
- Device controller transfers blocks of data from buffer storage directly to main memory without CPU intervention.
- Only one interrupt is generated per block, rather than one interrupt per byte.

# Computer System Architecture

- Most systems use a single general-purpose processor.
  - Most systems have special purpose processor as well.
- Multiprocessor systems are growing in use and importance.
  - Also known as parallel systems or tightly-coupled systems.
  - Advnatages include:
    1. Increased throughput.
    2. Economy of scale.
    3. Increased reliability.
  - Two Types:
    1. Asymmetric Multiprocessing - each processor is assigned a special task.
    2. Symmetric Multiprocessing - each processor performs all tasks.
- **Multiprograming (Batch System)** needed for efficiency
  - Single user cannot keep CPU and I/O devices busy at all times.
  - Multiprogramming organizes jobs (code and data) so CPU always has one to execute.
  - A subset of total jobs in system is kept in memory.
  - One job selected and run via **job scheduling**.
  - When it has to wait (for I/O for example), OS switches to another job.
- **Timesharing (multitasking)** is logical extension in which CPU switches jobs so frequently that users can interact with each job while it is running, creating interactive computing.
  - Response time should be $<1$ second
  - Each user has at least one program executing in memory (**Process**).
  - If several jobs ready to run at the same time (**CPU Scheduling**).
  - If processes don't fit in memory, **swapping** moves them in and out to run.
  - **Virtual Memory** allows execution of process not completely in memory.
- **Interrupt Driven (hardware and software)**
  - Hardware interrupt by one of the devices.
  - Software interrupt (**exception** or **trap**).
    - Software error (Example: _Division by zero_)
    - Request for operating system service.
    - Other process problems include infinite loop, processes modifying each other or the operating system.

# Process

A process is a program in execution. It is a unit of work within the system. Program is a passive entity, while process is an active entity.

- Process needs resources to accomplish its task.
  - CPU, memory, IO, files
  - Initialization data
- Process termination requires reclain of any reusable resources.
- Single threaded process has one **program counter** specifying locaion of next instruction to execute.
  - Process executes instructions sequentially, one at a time, until completion.
- Multi-threaded process has one program counter per thread.
- Typically system has many processes, some user, some operating system running concurrently on one or more CPUs.
  - Concurrency by multiplexing the CPUs among the processes / threads.

# Process Management Activities

The operating system responsible for the following activities in connection with process management:

- Creating and deleting both user and system processes.
- Suspending and resuming processes.
- Providing mechanisms for process synchronization.
- Providing mechanisms for process communication.
- Providing mechanisms for deadlock handling.

<hr/>

**LECTURE 3: Program and Process**

# Program

- A program is a piece of code.
- A program is a passive entity as it resides in the secondary memory, such as the contents of a file stored on a disk.
- When we execute a program that was just compiled, the OS will generate a process to execute the program. Execution of the program starts via GUI mouse clicks, command line entry of its name, etc. One program can have several processes.

# Process

- The term process (job) refers to program code that has been loaded into a computer's memory so that it can be executed by the central processing unit (CPU).
- A process can be described as an instance of a program running on a computer or as an entity that can be assigned to and executed on a processor.
- A program becomes a process when loaded into memory and thus is an **active entity**.

```c
int main() {
    int i, z = 1;
    for(i = 0; i < 100; i++) {
        z = z*i; // Line 1
    }
}
```

According to a program, _Line 1_ occurs 1 time, while according to process, it occurs 100 times.

| Parameter           | Process                                                                                                     | Program                                                                                         |
| ------------------- | ----------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------- |
| Definition          | An executing part of a program is called a process.                                                         | A program is a group of odered operations to achieve a programming goal.                        |
| Nature              | The process is an instance of program being executed.                                                       | The nature of program is passive, so it's unlikely to do anything until it gets executed.       |
| Resource Management | The resource requirement is quite high in case of a process.                                                | The program only needs memory for storage.                                                      |
| Overheads           | Processes have a considerable overhead                                                                      | No significant overhead cost.                                                                   |
| Lifespan            | The process has a shorter and very limited lifespan as it gets terminated after the completion of the task. | A program has a longer lifespan as it is stored in the memory until it is not manually deleted. |
| Creation            | New process require duplication of the parent process.                                                      | No such duplication is needed.                                                                  |
| Required Process    | Process holds resources like CPU, memory, address, disk, I/O, etc.                                          | The program is stored on the disk in some file and does not require any other resources.        |
| Entity Type         | A process is a dynamic or active entity.                                                                    | A program is a passive or static entity.                                                        |
| Contain             | A process contains many resources like a memory address, disk, printer, etc.                                | A program needs memory space on disk to store all instructions.                                 |

<hr/>

**LECTURE 4:**

