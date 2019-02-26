#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1;i < N;i++){
	int p = i;
	for(int g = 0;g < N;g++){
		if(g==p)
		cout << "["<< d[g] <<"]";
		else
		{
			cout << " " << d[g] <<" ";
		}
		
	}
		for(int k = p-1; k >=0 ;k--){
			if(d[p]>d[k]){
			swap(d,p,k);
			p--;
			}
		}
		cout << " => ";
		for(int g = 0;g < N;g++){
		if(g==p)
		cout << "["<< d[g] <<"]";
		else
		{
			cout << " " << d[g] <<" ";
		}
		
		}
		cout << endl;
	}
	
//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
