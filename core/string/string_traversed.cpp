#include <iostream>

using namespace std;

int main() {
    string S = "VINAY PANDEY";
    int StrLen = S.length();
    for (int i =0; i< StrLen+1; i++){
        if(S[i] == ' '){
             cout<< " Inside the loop there is space : "  << S[i] << endl;
        }
        else if(S[i] == '\0'){
             cout<< " Inside the loop there is back slash zero \0 : "  << S[i] << endl;
        }
        else{
            cout<< " Inside the loop: "  << S[i] << endl;
        }
    }
	cout<< " Outside the loop: "  << S << " StrLen: " << StrLen << endl;

    return 0;
}
