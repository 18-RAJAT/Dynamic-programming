#include<bits/stdc++.h>
using namespace std;

void knapsack(vector<int>weights,vector<int>prices,int W)
{
    //Initialize the dp vector
    int length=weights.size();
    vector<vector<int>>value(W+1,vector<int>(length+1,0));

    for(int i=1;i<=length;++i)
    {
        for(int j=1;j<=W;++j)
        {
            value[j][i]=value[j][i-1];
            if(weights[i-1] <= j)
            {
                int val=value[j-weights[i-1]][i-1]+prices[i-1];
                if(value[j][i]<val)
                value[j][i]=val;
            }
        }
    }
    cout<<"The values are :"<<"\n";
    for(int i=0;i<=W;++i)
    {
        for(int j=0;j<=length;++j)
        {
            cout<<value[i][j]<<" ";
        }
    }
    cout<<"The maximum profit: "<< value[W][length]<< endl;
}

int main()
{
    cout<<"Enter the weights of the items, press -1 to stop"<<endl;
    
    vector<int>weights;

    while(true)
    {
        int weight;cin>>weight;

        if(weight==-1)break;
        weights.push_back(weight);
    }
    cout<<"Enter the weights of the items, press -1 to stop"<<endl;

    vector<int>values;
    
    while(true)
    {
        int value;cin>>value;
        if(value==-1)break;
        values.push_back(value);
    }

    cout<<"Enter the capacity of the knapsack"<<endl;
    int capacity;cin>>capacity;
    knapsack(weights,values,capacity);
}