#include <iostream>
using namespace std;

int main(){
	int n = 3;
	
	for (int i = 0; i < (n * 2) + 1; i++){
		for(int j = 0; j < (n * 2) + 1; j++){
			if (i % 2 == 0){
				cout<<"-";
			}
			else {
				if(j % 2 == 0){
					cout<<"|";
				}
				else {
					int row = 1 / 2;
					int col = j / 2;
					if((row + col) % 2 == 0){
						cout<<" ";
					}
					else {
						cout<<" ";
					}
				}
			}
		}
		cout<<endl;
	}
	
	return 0;
}
