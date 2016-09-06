#include <iostream>

using namespace std;

int main(){

        int x;

        cin >> x;

        bool ok = (x%2 == 0) || (x%3 == 0);

        if(ok) cout << "yes";
        else cout << "no";

 	return 0;
}



