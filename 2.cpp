#include <iostream>

using namespace std;

int main(){

        int x;

        cin >> x;

        if(x%2 == 0){
        	cout << "yes";
        }
        else{
        	if(x%3 == 0){
        		cout << "yes";
        	}
        	else{
        		cout << "no";
        	}
        }

 	return 0;
}

