// #bhavya Agrawal
// #Leetcode - bhavyacodec
// #codeforces - coder_bhavya
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int,int>m;
        vector<int> num;
        for(auto& i:nums) m[i]++;
        for(auto& i:m){
            if(i.first ==0 && i.second>2) num.emplace_back(i.first);
            num.emplace_back(i.first);
            if(i.second>1) num.emplace_back(i.first); 
        }
        set<vector<int>>v;
        for(int i=0;i<num.size();i++){
            if(num[i]>0) break; 
            if(i > 0 && num[i] == num[i - 1]){
                continue;
            }
            for(int j=i+1;j<num.size();j++){
                int req=0;
                req=0-(num[i]+num[j]);
                m[req]++;
                if( req >= num[j] && ((m[req]>1 && req!=num[j]) || ((m[req]>2)))){
                        if(num[i]==0 && num[j]==0 && req==0)
{ if(m[0]>3){                       vector<int>h(3);
                        h[0]= num[i];
                        h[1]=num[j];
                        h[2]=req;
                        // flag=1;
                        v.insert(h);}
}       
                    else{
                       
                        vector<int>h(3);
                        h[0]= num[i];
                        h[1]=num[j];
                        h[2]=req;

                        v.insert(h);
                     
                    }
                }
                m[0-(num[i]+num[j])]--;
                // }
            }
        }
        vector<vector<int>> o;
        for(auto& i:v) o.push_back(i);
        return o;
    }
};