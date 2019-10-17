#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
    v.reserve(100);
   	int n,i;
	cin>>n;

	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
    v.pop_back();

    //v.clear();
    //v.capacity();
    //v.max_size();
    sort(v.begin(), v.end());
    for(i=0;i<v.size();i++)
    {
    	cout<<v[i]<<" ";
    }

    return 0;
}