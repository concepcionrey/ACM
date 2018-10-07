#include <iostream>

int main() {
// The implementation:
int n{3}, S{11};                                        //n &mdash; number of coin types, S &mdash; desired overall weight
int wgt[] {1,3,5};                                   //array of coin weights (W); for example: {1, 3, 5};
int mink[11] {0};                                  //array of DP results (k); look above for the example;
 
  mink[0] = 0;                                   //base of DP: 0 weight can be achieved by 0 coins
  for (int P = 1; P<=S; P++) {                   //iterate through all the states
    int minres = 1000000000;                    
    for (int i = 0; i<n; i++){ if (wgt[i] <= P) { //suppose that the coin with weight wgt[i] is the last
      int tres = mink[wgt[i]] + 1;           //the number of coins with the coin is greater by one
      if (minres > tres) minres = tres;          //choose the minimal overall number of coins among all cases
    }
    mink[P] = minres;                            //store the result in mink array
  }
}
  int answer = mink[S];                          //the answer for the whole problem is the result for state (S)
  std::cout << answer << "\n";
  return 0;
}