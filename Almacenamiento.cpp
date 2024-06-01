#include <iostream>
#include <vector>
using namespace std;

void saveTape() {
  vector<int> iTape = {5, 10, 3};
  int resultado;
  int orden = iTape.size();
  for (int i = 0; i < orden; i++) {
    resultado = 0;
    for (int j = 1; j < orden + 1; j++) {
      for (int w = 0; w < j; w++) {
        resultado += iTape[w];
      }
    }
    cout << resultado << endl;
  }
}

int main() {
  saveTape();
  return 0;
}
