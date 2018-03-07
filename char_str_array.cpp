#include <iostream>
using namespace std;
int main() {
  char s[6] = {'V','I','N','A','Y', '\0'};
  int i;
  for (i = 0; i < 6; i++){
  		cout<< "loop count ==" << i << "====" << s[i]<< endl;
  }
}
