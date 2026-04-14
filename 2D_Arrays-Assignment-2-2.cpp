// Q2. Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and
//     create a function which returns a vector of the non-overlapping intervals that cover all the
//     intervals in the input.

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > makeintervals(vector<vector<int> > v , int rows);

int main()
{
    int m , n;
    cout<<"give rows and columns"<<endl;
    cin>>m>>n;

    vector<vector<int> > v(m , vector<int> (n));
    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }

    vector<vector<int> > ans;
    ans=makeintervals(v, m);

    for (int i=0 ; i<m ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

vector<vector<int> > makeintervals(vector<vector<int> > v , int rows){
    // create ans vector
    vector<vector<int> > ans(rows , vector<int> (2));

    vector<int> currentinterval={v[0][0] , v[0][1]}; 
    

    for (int r=0 ; r<rows ; r++){       // iterating on row

        bool newInterval=false;

        for (int i=0 ; i<rows ; i++){   // checks for each row
            if (v[r][0]>=currentinterval[0] && v[r][0]<=currentinterval[1]){
                if (v[r][1]>= currentinterval[1]){
                    currentinterval[1]=v[r][1];
                    newInterval=true;
                }
            }
        }
        ans.push_back(currentinterval);
        currentinterval[0]=v[r][0];
        currentinterval[1]=v[r][1];

        if (newInterval==false){
            if (currentinterval[0]== ans[ans.size()-1][0]  && currentinterval[1]== ans[ans.size()-1][1]){
                ans.pop_back();
            }
        }
    }
    return ans;
}