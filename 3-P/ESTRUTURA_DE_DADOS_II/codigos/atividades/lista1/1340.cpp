#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int testes;
    while (cin >> testes)
    {
      bool is_queue = true, is_stack = true, is_priority_queue = true;
      int action, number;
      priority_queue<int> priority_queue;
      queue<int> queuee;
      stack<int> stackk;
      for(int i = 0; i < testes; i++){
        cin >>  action >> number;
        if(action == 1) {
          queuee.push(number);
          stackk.push(number);
          priority_queue.push(number);
        }
        if(action == 2) {
          if(stackk.top() != number) {
            is_stack = false;
          } else {
            stackk.pop();
          }
          if(queuee.front() != number) {
            is_queue = false;
          } else {
            queuee.pop();
          }
          if(priority_queue.top() != number){
            is_priority_queue = false;
          } else {
            queuee.pop();
          }
        }
      }


if (!is_queue and !is_stack and !is_priority_queue){
            cout << "impossible" << endl;
        } else if (is_queue and is_priority_queue){
            cout << "not sure" << endl;
        } else if (is_queue and is_stack){
            cout << "not sure" << endl;
        } else if (is_priority_queue and is_stack){
            cout << "not sure" << endl;
        } else if (is_priority_queue){
            cout << "priority queue" << endl;
        } else if (is_stack){
            cout << "queue" << endl;
        } else if (is_queue){
            cout << "stack" << endl;
        }
    }
    return 0;
}