#include <iostream>
#include <set>
#include <list>

typedef struct {
  std::string name;
  int kills;
  bool dead;
}murdere;

//while(scanf("%s %s", name_killer, name_dead) != EOF);
int main() {
  char name_killer[20], name_dead[20];
  std::list<murdere> list_murders;
  
  for(int i = 0; i < 4; i++) {
    scanf("%s %s", name_killer, name_dead);

  }
  return 0;
}