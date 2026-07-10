# C++ Learning Journey

This repository tracks my progress learning C++ and fundamental data structures by implementing them from scratch.

## What I'm Learning

### C++ Fundamentals
- Classes, encapsulation (private/public members), and constructors
- Pointers and manual memory management (`new` / `delete`)
- The Standard Library: `std::vector`, `std::cout`, exceptions (`std::out_of_range`)
- Header files and separating implementations from runner programs

### Data Structures

Each data structure lives in its own header file in [DataStructures/](DataStructures/), with a matching `*Runner.cpp` that exercises it:

| Data Structure | Implementation | Highlights |
|----------------|----------------|------------|
| Dynamic Array | [DynamicArrays.h](DataStructures/DynamicArrays.h) | Raw pointer-backed array with automatic resizing (doubling capacity) |
| Stack | [Stack.h](DataStructures/Stack.h) | LIFO structure with push, pop, and peek (`getTop`), built on `std::vector` |
| Queue | [Queue.h](DataStructures/Queue.h) | FIFO structure with enqueue/dequeue and capacity limits |
| Singly Linked List | [SinglyLinkedList.h](DataStructures/SinglyLinkedList.h) | Node-based list with a dummy head, supporting insert at head/tail, get, and remove by index |

## Project Structure

```
cplusplus/
├── helloworld/        # First steps with C++
└── DataStructures/    # Data structure implementations + runners
```

## Running the Code

Each data structure has a runner program you can compile and run. For example:

```sh
g++ DataStructures/StackRunner.cpp -o StackRunner
./StackRunner
```

## Next Up

- Doubly linked list
- Hash tables
- Binary trees and binary search trees
- Sorting algorithms
