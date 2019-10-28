#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
  printf("Generating empty list:\n");
  struct node * test_list = make_list();
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Adding the numbers 10 to 1 into the list:\n");
  int i;
  for (int i = 10; i >= 1; i--){
    test_list = insert_front(test_list, i);
  }
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Removing 1:\n");
  test_list = remove_node(test_list, 1);
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Removing 2:\n");
  test_list = remove_node(test_list, 2);
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Removing 5:\n");
  test_list = remove_node(test_list, 5);
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Removing 9:\n");
  test_list = remove_node(test_list, 9);
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Removing 10:\n");
  test_list = remove_node(test_list, 10);
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  printf("Removing -20:\n");
  test_list = remove_node(test_list, -20);
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
  test_list = free_list(test_list);
  printf("Here's the list now:\n");
  print_list(test_list);
  printf("Here's the pointer to the beginning of the list: %p\n", test_list);
}
