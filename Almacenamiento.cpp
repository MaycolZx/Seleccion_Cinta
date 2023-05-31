#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void saveTape() {
  vector<int> iTape = {5, 10, 3};
  vector<int> values;
  int rangoR = iTape.size();
  int resultadoR, valueR = 0;
  for (int i = 1; i < rangoR + 1; ++i) {
    values.push_back(i);
  }
  do {
    resultadoR = 0;
    for (int i = 1; i <= rangoR; i++) {
      for (int j = 0; j < i; j++) {
        resultadoR += iTape[values[j] - 1];
      }
    }
    if (valueR == 0) {
      valueR = resultadoR;
    }
    if (resultadoR < valueR) {
      valueR = resultadoR;
    }
    // cout << resultadoR << endl;
  } while (std::next_permutation(values.begin(), values.end()));
  printf("El resultado es: %d", valueR);
}

int main() {
  saveTape();
  return 0;
}
