#include <iostream>
#include <vector>
#include <sstream>

typedef struct {
  int key;
}type_elem;

typedef struct Node{
  type_elem data;
  struct Node *next;
}Node;

typedef struct {
  Node *Head;
}linked_list;


int hash_calc(int lenght_list, int numkey) {
  return numkey % lenght_list;
}
void start_linked_list(linked_list list[], int amount) {
  for(int i = 0; i < amount; i++) {
    list[i].Head = NULL;
  }
}

void insert_treatment_collision(linked_list list[], type_elem elem, int size) {
  int hash = hash_calc(size, elem.key);
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->data = elem;
  new_node->next = NULL;
  if(list[hash].Head == NULL) {
    list[hash].Head = new_node;
  } else {
    Node *aux = list[hash].Head;
    while(aux->next != NULL) {
      aux = aux->next;
    }
    aux->next = new_node;
  }
}
void show_linked_list(linked_list list[], int size) {
  for(int i = 0; i < size; i++) {
    std::cout << i << " -> ";
    Node *aux = list[i].Head;
    while(aux != NULL) {
      std::cout << aux->data.key << " -> ";
      aux = aux->next;
    }
    std::cout << "\\" << std::endl;
  }
}

std::vector<type_elem> convert_sequence_string_to_int(std::string literal) {
  std::vector<type_elem> numbers;
  std::stringstream ss(literal);
    int value;
    while(ss >> value){
      type_elem number_typed;
      number_typed.key = value;
      numbers.push_back(number_typed);
    }
  return numbers;
}

int main() {
  int cases;
  std::cin >> cases;
  while(cases--) {
    int size, amount_elem;
    std::string numbers_literal;
    std::vector<type_elem> numbers_vector;
    std::cin >> size >> amount_elem;
    linked_list linked_list_data[size];
    start_linked_list(linked_list_data, size);
    std::cin.ignore();
    getline(std::cin, numbers_literal);
    numbers_vector = convert_sequence_string_to_int(numbers_literal);
    for(int j = 0; j < numbers_vector.size(); j++) {
      insert_treatment_collision(linked_list_data, numbers_vector[j], size);
    }
    show_linked_list(linked_list_data, size);
    if(cases) {
      std::cout << std::endl;
    }
  }
  return 0;
}
