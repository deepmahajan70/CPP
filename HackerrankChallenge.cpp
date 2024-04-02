#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1e5 + 5; // Constraint 1 & 2: Maximum n and q
const int MAX_K = 3e5 + 5; // Constraint 3: Maximum k
const int MAX_ELEMENT_VALUE = 1e6 + 5; // Constraint 8 & 9: Maximum element value

int answer_query(vector<vector<int>>& data, int i, int j) {
  // Check if the outer array index is within bounds (Constraint 5)
  if (i < 0 || i >= data.size()) {
    cerr << "Invalid outer array index" << endl;
    return -1; // Or throw an exception for better error handling
  }

  // Check if the inner array index is within bounds for the specific outer array (Constraint 6)
  if (j < 0 || j >= data[i].size()) {
    cerr << "Invalid inner array index" << endl;
    return -1; // Or throw an exception for better handling
  }

  return data[i][j];
}

int main() {
  int num_arrays, num_queries;

  // Read the first line containing the number of arrays and queries (Constraint 1 & 2)
  cin >> num_arrays >> num_queries;

  if (num_arrays < 1 || num_arrays > MAX_N || num_queries < 1 || num_queries > MAX_N) {
    cerr << "Invalid number of arrays or queries" << endl;
    return 1; // Or throw an exception for invalid input
  }

  // Create the vector of vectors to store the data
  vector<vector<int>> data(num_arrays);

  // Read the data for each array
  for (int i = 0; i < num_arrays; ++i) {
    int arr_size;
    cin >> arr_size;

    if (arr_size < 1 || arr_size > MAX_K) { // Constraint 3
      cerr << "Invalid inner array size" << endl;
      return 1; // Or throw an exception for invalid input
    }

    // Read the elements of the current array
    data[i].resize(arr_size);
    for (int j = 0; j < arr_size; ++j) {
      int element;
      cin >> element;
      if (element < 0 || element > MAX_ELEMENT_VALUE) { // Constraint 8 & 9
        cerr << "Invalid element value" << endl;
        return 1; // Or throw an exception for invalid input
      }
      data[i][j] = element;
    }
  }

  // Process the queries
  for (int q = 0; q < num_queries; ++q) {
    int query_i, query_j;
    cin >> query_i >> query_j;

    int result = answer_query(data, query_i, query_j);
    if (result != -1) {
      cout << "Value at query (" << query_i << ", " << query_j << "): "
           << result << endl;
    }
  }

  return 0;
}
