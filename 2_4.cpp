#include <iostream>

using namespace std;

int main(){

	bool ok = false;

        int x;

        cin >> x;

        if (x%2 == 0 || x%3 == 0)
        	ok = true;


        if(ok) cout << "yes";
        else cout << "no";

 	return 0;
}



