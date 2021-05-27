#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> v1(n);
	vector<int> v2(n);
	
	int counter =0;
	
	for(int i=0; i<n; i++){
		cin>>v1[i];
	}
	
	for(int i=0; i<n; i++){
		cin>>v2[i];
	}
	

		for(int i=0; i<v2.size()-1; i++){
			
			int q = v1[i+1] - (v1[i]);
			int p = (v2[i+1]) -(v2[i]);
			p = abs(p);
			q = abs(q);
			
			if(q!=0 and p!=0){
				
				counter = counter + max(p,q);
				continue;
;
			}
			
			if(q!=0 or p!=0){
				counter = counter + max(p,q);
			}
			
		}

	cout<<abs(counter);
	return 0;
}
