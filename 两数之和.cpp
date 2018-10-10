#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int m,n=0;
  int target;
  vector<int> v;
  cin >> target;
  
  while(cin>>m){
    v.push_back(m);
    ++n;}
  for (size_t i = 0; i < n;++i)
    for (size_t j = i+1; j < n;++j){
      if(v[i]+v[j]==target){
        cout << "[" << i << "," << j << "]";
        break;
      }
    }

      getchar();
    return 0;
}
