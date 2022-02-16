#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr,int k){
	for(int i=0;i<arr.size();i++){
		if(arr[i]==k){
			return i;
			break;
		}
	}
	return -1;
}
int main(){
	vector <int> arr;
	int n,temp,ps,k;
	cout<<"enter number of elements";
	cin>>n;
	cout<<"enter elements into vector ";
	for(int i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<"enter key element to search";
	cin>>k;
	ps=search(arr,k);
	if(ps==-1)
	cout<<"given key is not found";
	else
	cout<<"key element is found at:"<<ps;
}
