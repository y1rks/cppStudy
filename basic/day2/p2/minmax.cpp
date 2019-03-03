#include "minmax.h"

int MinMax::max(int n1, int n2, int n3) {
  int maxNum = n1;

  if (maxNum < n2) {
    maxNum = n2;
  }

  if (maxNum < n3) {
    maxNum = n3;
  }

  return maxNum;
}

int MinMax::min(int n1, int n2, int n3) {
  return -max(-n1, -n2, -n3);
}
