#include <iostream>
#include<climits>
using namespace std;
int main() {
	//code
	int t;
	long long n,num,max=INT_MIN,maxTemp=0;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    for(long long j=0;j<n;j++)+{
	        cin>>num;
	        maxTemp=maxTemp+num;
	        
	        if(max<maxTemp){
	            max=maxTemp;
	        }
	        if(maxTemp<0){
	            maxTemp=0;
	            
	        }
	    }
	    cout<<max<<endl;
	    maxTemp=0;
	    max=INT_MIN;
	}
	
	return 0;
}