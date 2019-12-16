#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;
 
 
int main() 
{

	      int  m,T;
	       
 		cin>>T;
 		int sum=0;
		for(int i=0;i<T;i++){

        int f=0;
          cin>>m;
          int n[11],s[100];

         std::vector< pair<int, int> > vec;
          
          //input pair
          for(int i=0; i<m; i++)
          {
            cin>>n[i] >>s[i];
           
            vec.push_back(make_pair(n[i], s[i]));

          }

    sort(vec.begin(), vec.end());
 
         
          
 

	for(int r=0;r<m;r++){
                if(vec[r].first<9){
            if(vec[r].first==vec[r+1].first){
                 int t=0;
                 t=std::max(vec[r].second,vec[r+1].second);
                 vec[r+1].second=t;
                }
            else{
                f= f+vec[r].second;

            }}
        }
        cout<<f;
          
    	
}
    	return 0;
}
