#include <iostream>

using namespace std;

int main(){

        int x;

        cin >> x;

        if(x%2 == 0){
        	if(x%3 == 0){
        		cout << "yes";
        	}
        	else{
        		cout << "no";
        	}
        }
        else{
        	cout << "no";
        }

 	return 0;
}

