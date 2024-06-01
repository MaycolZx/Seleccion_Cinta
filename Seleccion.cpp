#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> funtionSeleccion() {
  vector<vector<int>> cActividades = {{2, 5}, {4, 6},  {1, 7},  {5, 8},
                                      {4, 9}, {6, 10}, {7, 11}, {9, 12}};
  vector<vector<int>> sSolutionC = {{0}, {cActividades[0]}};
  int lastValue = 1;
  for (int i = 1; i < cActividades.size(); i++) {
    if (cActividades[i][0] >= sSolutionC[lastValue][1]) {
      sSolutionC.push_back(cActividades[i]);
      sSolutionC[0].push_back(i);
      lastValue++;
    }
  }
  return sSolutionC;
}

int main() {
  vector<vector<int>> vAct = funtionSeleccion();
  char name[8] = {'B', 'C', 'A', 'E', 'D', 'F', 'G', 'H'};
  for (int i = 0; i < vAct[0].size(); i++) {
    cout << name[vAct[0][i]] << " -> ";
  }
  return 0;
}
