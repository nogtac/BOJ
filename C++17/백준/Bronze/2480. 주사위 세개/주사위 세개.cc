#include <iostream>	
using namespace std;
	
int main() {
	int max = 0;
	int arr[3];

	for(int i = 0; i < 3; i++) {
		cin >> arr[i];
		if(arr[i] > max)
			max = arr[i];
	}


	
	if(arr[0] == arr[1] && arr[1]==arr[2])
		cout << 10000+arr[0]*1000;
	else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
		cout << max*100;
	else {
		if(arr[0] == arr[1])
			cout << 1000+arr[0]*100;
		else if(arr[0] == arr[2])
			cout << 1000+arr[0]*100;
		else if(arr[1] == arr[2])
			cout << 1000+arr[1]*100;
	}
	return 0;
}