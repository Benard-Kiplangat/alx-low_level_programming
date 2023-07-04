# 0x13-Singly\_linked\_list

- Extented tasks of 0x12-singly\_linked\_list

Linked list is another data structure that defines a collection of objects called nodes that are stored randomly in memory. A linked list node contains two parts: the data part and the link part.

The data can contain any number of elements to store objects and primitive type, while the link part can contain the link to the next node or NULL if it is the last node in the list. Unlike arrays, linked list do not need to be stored contiguosly in memory. Thus, the size doesn't need to be declared in advance.

## Why should you use linked list over an array?

Linked lists can overcome the following limitations of arrays:

- The need to declare array size in advance.
- The trouble of increasing the array size at runtime.
- The need to store arrays contiguously in memory.

## Linked List complexity

Time complexity of a linked list is as follows:

- Access: O(n)
- Search: O(n)
- Insertion: O(1)
- Deletion: O(1)

## Linked List Node declaration

```C
struct node
{
	int data;
	struct node *next;
};

struct node *head, *ptr;
ptr = (struct node *)malloc(sizeof(struct node *));
```

## Operations of a linked list

- Inserting a node at the beginning
- Inserting a node at the end
- Inserting at a random location
- Deleting at the beginning
- Deleting at the end
- Deleting at a specified location
- Searching for an element
- Displaying data in a linked list
