# Program 4: Doubly Linked List – Insert and Delete Nodes

## a) Data Structures
- **Doubly Linked List** using `struct node`:
  - `data` → stores the value.
  - `prev` → pointer to the previous node.
  - `next` → pointer to the next node.
  - `head` → pointer to the first node of the list.

---

## b) Functions / Purpose

1. `createNode(int value)` → creates and returns a new node.  
2. `insertAfter(struct node *prevNode, int value)` → inserts a new node after the given node.  
3. `deleteNode(struct node **head, struct node *delNode)` → removes the specified node from the list.  
4. `printList(struct node *head)` → prints the list from head to tail.

---

## c) main()
- Creates a doubly linked list with sample values.  
- Demonstrates insertion after a given node.  
- Demonstrates deletion of a node.  
- Prints the list after each operation to show changes.

---

## d) Sample Output
  1 2 3  
  Deleting 2  
  1  3