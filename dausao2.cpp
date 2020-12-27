#include <iostream>
using namespace std;
int main(){
	for (int i=5;i>=0;i--){
		for (int j=1;j<=5-i;j++){
			cout<<" ";
		}
		for (int k=1;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Để tí cho lỗi"<<endl;
	return 0;
}
