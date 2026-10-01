#include <iostream>
using namespace std;

int main() {
	int arr[3][3];
	int high=arr[0][0];
	//input loop
	cout<<"Enter 9 numbers:"<<endl;
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	// finding highest
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]>high){
				high=arr[i][j];
			}
			}
		}
	cout<<"Largest: "<<high<<endl;
	return 0;
}




