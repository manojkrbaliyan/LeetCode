#include <iostream>
#include <vector>
using namespace std;

   /* void duplicateZeros(vector<int>& arr) 
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i])
                continue;
            else{
                int n=arr.size()-1;
                while(i<n){
                    arr[n]=arr[n-1];
                    n--;
                }
                if(i<arr.size()-1){
                       arr[i+1]=0;
                        i++;
                }      
            }
        }
        for(auto num:arr)
        {
            cout << num << " ";
        }
    }*/
void duplicateZeros(std::vector<int> &vec)
{
    int len=vec.size();
    for(int i=0;i<len;++i)
    {
        if(vec[i]==0)
        {
            vec.insert(vec.begin()+i,0);
            vec.pop_back();
            i++;
        }

    }
    for(auto elem:vec)
        cout << elem << " " ;
}
int main(int argc, char const *argv[])
{
    /* code */
    vector<int> vec{8,0,5,0,1,2,0,0}; 
    duplicateZeros(vec);
    return 0;
}
