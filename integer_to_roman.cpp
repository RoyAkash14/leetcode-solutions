// Problem: https://leetcode.com/problems/integer-to-roman
// Solution by: Akash Roy


class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>>vec={{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
        //use lambda function when u need custom sorting, [] is used to capture outside variables
        //auto printX = [&x]() {
        //cout << "Captured by reference: " << x << endl;
    //};

    //printX();  // prints 10

    //x = 20;
   // printX();  // now prints 20 because lambda refers to actual x, had [] been blank it would have printed 10
    // const means u dont want to modify the value, & means u dont want to create copy of variable while working
        sort(vec.begin(),vec.end(),[](const pair<int,string>&a,const pair<int,string>&b){
            return a.first>b.first;}
    );
        int val=num;
        string s;
        for(int i=0;i<vec.size();i++)
        {
            while(val>=vec[i].first)
            {
               
                    val-=vec[i].first;
                    s+=vec[i].second;
                
            }
            if(val==0)
            break;
        }
        return s;
    }
};