#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores) {
  return accumulate(scores.begin(), scores.end(), 0);
}

void output(int sum_a, int sum_b, int sum_c) {
  printf("%d\n", sum_a * sum_b * sum_c);
}

vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}


int main() {
  int N;
  cin >> N;

  vector<int> A, B, C;
  A = input(N);
  B = input(N);
  C = input(N);

  output(sum(A), sum(B), sum(C));
}

