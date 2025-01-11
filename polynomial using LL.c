#include<stdio.h>
#include<stdlib.h>

typedef struct term {
    int coeff;
    int pow;
    struct term *next;
} trm;

trm *input(trm *);
void display(trm *);
trm *addPoly(trm *, trm *);

int main() {
    trm *poly1, *poly2, *result;
    poly1 = NULL;
    poly2 = NULL;

    printf("Enter the first polynomial:\n");
    poly1 = input(poly1);

    printf("Enter the second polynomial:\n");
    poly2 = input(poly2);

    printf("\nFirst polynomial: ");
    display(poly1);
    
    printf("\nSecond polynomial: ");
    display(poly2);

    result = addPoly(poly1, poly2);
    printf("\nResultant polynomial: ");
    display(result);

    return 0;
}

trm *input(trm *head) {
    int n;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    trm *term, *current;
    for (int c = 1; c <= n; c++) {
        term = (trm *)malloc(sizeof(trm));
        printf("Enter the coefficient for term %d: ", c);
        scanf("%d", &term->coeff);
        printf("Enter the power for term %d: ", c);
        scanf("%d", &term->pow);

        term->next = NULL;

        if (head == NULL) {
            head = term;
            current = head;
        } else {
            current->next = term;
            current = current->next;
        }
    }
    return head;
}

void display(trm *head) {
    trm *current = head;
    while (current != NULL) {
        printf("%d x^%d", current->coeff, current->pow);
        if (current->next != NULL) {
            printf(" + ");
        }
        current = current->next;
    }
    printf("\n");
}

trm *addPoly(trm *poly1, trm *poly2) {
    trm *result = NULL, *current = NULL, *temp;

    while (poly1 != NULL && poly2 != NULL) {
        temp = (trm *)malloc(sizeof(trm));
        temp->next = NULL;

        if (poly1->pow == poly2->pow) {
            temp->coeff = poly1->coeff + poly2->coeff;
            temp->pow = poly1->pow;
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1->pow > poly2->pow) {
            temp->coeff = poly1->coeff;
            temp->pow = poly1->pow;
            poly1 = poly1->next;
        } else {
            temp->coeff = poly2->coeff;
            temp->pow = poly2->pow;
            poly2 = poly2->next;
        }

        if (result == NULL) {
            result = temp;
            current = result;
        } else {
            current->next = temp;
            current = current->next;
        }
    }
    while (poly1 != NULL) {
        temp = (trm *)malloc(sizeof(trm));
        temp->coeff = poly1->coeff;
        temp->pow = poly1->pow;
        temp->next = NULL;
        current->next = temp;
        current = current->next;
        poly1 = poly1->next;
    }

    while (poly2 != NULL) {
        temp = (trm *)malloc(sizeof(trm));
        temp->coeff = poly2->coeff;
        temp->pow = poly2->pow;
        temp->next = NULL;
        current->next = temp;
        current = current->next;
        poly2 = poly2->next;
    }

    return result;
}
