# Program 3: Reverse Traversal of a Linked List

## a) Data Structures
- **Singly Linked List** using `struct node`:
  - `data` → stores the value.
  - `next` → pointer to the next node.
- `head` → pointer to the first node.

---

## b) Functions / Purpose

1. `createNode(int value)` → creates and returns a new node.  
2. `insertEnd(struct node **head, int value)` → adds a node at the end of the list.  
3. `reverseTraversal(struct node *head)` → recursively prints the list in reverse order.

---

## c) main()
- Creates a linked list with sample values.  
- Prints the list in normal order (optional).  
- Calls `reverseTraversal()` to print the list in reverse order.

---

## d) Sample Output