#include <iostream>
#include <random>

using namespace std;

bool existsInArray(int array[], int size, int key) {
  const int sample = 100;
  int countExists = 0;

  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(0, size - 1);

  for (int i = 0; i < sample; i++) {
    int index = dist(gen);
    if (array[index] == key) {
      countExists++;
    }
  }
  return countExists > 0;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int key = 3;
  bool exists = existsInArray(array, sizeof(array) / sizeof(array[0]), key);
  if (exists) {
    cout << "The key " << key << " exists in the array." << endl;
  } else {
    cout << "The key " << key << " does not exist in the array." << endl;
  }

  return 0;
}