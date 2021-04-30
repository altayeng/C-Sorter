#include <iostream>
using namespace std;
 
 //isim sýralama
 sort(string &str) {
 	
 	
	int n=5;
	string s1[5] = {"abcd", "efg", "zaan", "hij", "bccc"};
	
	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j < n; j++) {
			if (s1[i].at(0) < s1[j].at(0)) {
				string tmp = s1[i];
				s1[i] = s1[j];
				s1[j] = tmp;
			}
		}
	}
	cout<<endl;

	for (int i = 0; i < n; i++) {
		cout << s1[i] << " ";
	}
	cout << endl;
	return (n);
	
}
  
  
 //sayý sýralama
 int sort() {
 
	int temp;
	int dizi[]={5,10,15,13,15,22,42,21,99,4};
	for(int i=0;i<10-1;i++) 
		for(int j=0;j<10-1;j++) 
		{ 
		if(dizi[j]>dizi[j+1]) 
		{ 
		temp=dizi[j]; 
		dizi[j]=dizi[j+1]; 
		dizi[j+1]=temp; 
		} 
	}
	for (int i=0;i<10;i++)
	{
		cout<<dizi[i]<<"  ";
 }
 
}
int main() {
	string s;
	int temp, n=5;
	
	sort(s);
	sort();
	
return 0;	
}
