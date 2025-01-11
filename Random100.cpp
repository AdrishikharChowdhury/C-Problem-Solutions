#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
} List;

// Function to add an element to the end of a list
void addElement(List* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
    } else {
        Node* currentNode = list->head;
        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

// Function to print the elements of a list in rows of 5
void printList(List* list) {
    Node* currentNode = list->head;
    int count = 0;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        count++;
        if (count % 5 == 0) {
            printf("\n");
        }
        currentNode = currentNode->next;
    }
    printf("\n");
}

// Function to swap the data of two nodes
void swapData(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Function to perform bubble sort on the list
void bubbleSort(List* list) {
    int swapped;
    Node* currentNode;
    Node* lastNode = NULL;

    if (list->head == NULL) {
        return;
    }

    do {
        swapped = 0;
        currentNode = list->head;

        while (currentNode->next != lastNode) {
            if (currentNode->data > currentNode->next->data) {
                swapData(currentNode, currentNode->next);
                swapped = 1;
            }
            currentNode = currentNode->next;
        }
        lastNode = currentNode;
    } while (swapped);
}

int main() {
    List list = { NULL };
    int i, randomNumber;

    // Seed the random number generator
    srand(time(NULL));

    // Generate and add 100 random integers to the list
    for (i = 0; i < 100; i++) {
        randomNumber = rand() % 1000; // Generate random number between 0 and 999
        addElement(&list, randomNumber);
    }

    // Print the unsorted list
    printf("Unsorted list:\n");
    printList(&list);

    // Sort the list using bubble sort
    bubbleSort(&list);

    // Print the sorted list
    printf("Sorted list:\n");
    printList(&list);

    return 0;
}
