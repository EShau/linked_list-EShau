#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct node * make_list(){
  struct node * n1 = malloc(sizeof(struct node));
  n1 = NULL;
  return n1;
}

//Should take a pointer to a node struct and print out all of the data in the list
void print_list(struct node *n){
  printf("%s", "[ ");
  while (n != NULL){
    printf("%d ",n->i);
    n = n->next;
  }
  printf("%s\n", "]");
}

// Should take a pointer to the existing list and the data to be added,
// create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.
struct node * insert_front(struct node * old_start, int value){
  struct node * new_start = malloc(sizeof(struct node));
  new_start->i = value;
  new_start->next = old_start;
  return new_start;
}

//Should take a pointer to a list as a parameter and then go through the entire
// list freeing each node and return a pointer to the beginning of the list
// (which should be NULL by then).
struct node * free_list(struct node * start){
  printf("\nFreeing List. \n");
  while (start != NULL){
    start = remove_node(start, start->i);
  }
  return start;
}

// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
struct node * remove_node(struct node *front, int data){
  struct node *iterate = front;
  struct node *previous = NULL;
  while (iterate != NULL){
    if (data == iterate->i){
      break;
    }
    previous = iterate;
    iterate = iterate->next;
  }
  if (iterate != NULL){
    if (iterate == front){
      front = iterate->next;
    }
    else{
      previous->next = iterate->next;
    }
    free(iterate);
  }
  return front;
}
