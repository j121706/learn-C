// Type your code here, or load an example.
#include <stdio.h>
#include <stdlib.h>

typedef struct node NODE;

struct node{
    int data;
    NODE *next;
};

NODE* creatlist(int *data_ptr){
    NODE *first, *current, *previous;

    for(int i = 0; i < (sizeof(data_ptr) - 1); i++){
        current = (NODE *)malloc(sizeof(NODE));
        current -> data = *(data_ptr + i);

        if(i == 0){
            first = current;
        }else{
            previous -> next = current;
        }
        current -> next = NULL;
        previous = current;
    }
    current = first;

    return first;
    // free(current);
}

void printlist(NODE *ptr){
    while(ptr != NULL){
        printf("add: %p, ", ptr);
        printf("data: %d, ", ptr -> data);
        printf("next: %p\n", ptr -> next);
        ptr = ptr -> next;
    }
}

NODE *searchlist(NODE *first, int item){
    NODE *ptr = first;
    while(ptr != NULL){
        if(ptr -> data == item){
            return ptr;
        }else{
            ptr = ptr -> next;
        }
    }
    return NULL;
}

void insertnode(NODE *node, int value){
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode -> data = value;
    newnode -> next = node -> next;
    node -> next = newnode;
}

NODE *deletenode(NODE *first, NODE *node){
    NODE *ptr = first;
    if(first == NULL){
        return NULL;
    }

    if(node == first){
        first = first -> next;
    }else{
        while(ptr -> next != node){
            ptr = ptr -> next;
        }
        ptr -> next = node -> next;
    }
    free(node);
    return first;
}

NODE *invert_list(NODE *first){
    NODE *p, *current, *previous;
    p = first->next;
    current = first;
    
    while(p != NULL){
        previous = current;
        current = p;
        p = p->next;
        current->next = previous;
        if(previous ==  first){
            previous->next = NULL;
        }
    }
    return current;
}

void print_list_length(NODE *first){
    int count = 0;
    NODE *ptr = first;
    while(ptr != NULL){
        ptr = ptr->next;
        count += 1;
    }
    printf("This linked list has %d nodes.\n", count);
}

void freelist(NODE *first){
    NODE *tmp, *current;
    current = first;
    while(current != NULL){
        tmp = current;
        current = current -> next;
        free(tmp);
    }
}

int main(void) {
    // 1. 固定個數
    // NODE A, B, C;
    // NODE *ptr = &A;
    // A.data = 11;
    // A.next = &B;
    // B.data = 22;
    // B.next = &C;
    // C.data = 33;
    // C.next = NULL;

    // while(ptr != NULL){
    //     printf("add: %p, ", ptr);
    //     printf("data: %d, ", ptr -> data);
    //     printf("next: %p\n", ptr -> next);
    //     ptr = ptr -> next;
    // }

    int num[7] = {1, 2, 3, 4, 5, 40, 7};
    NODE *first = creatlist(num);
    printlist(first);
    print_list_length(first);
    // NODE *new_first = invert_list(first);
    // printlist(new_first);

    // NODE *search;
    // search = searchlist(first, 5);
    // printf("search:%d, ", search->data);
    // printf("search.next:%p\n", search->next);

    // insertnode(search, 77);
    // printlist(first);

    // search = searchlist(first, 2);
    // deletenode(first, search);
    // printlist(first);

    freelist(first);
    return 0;
}