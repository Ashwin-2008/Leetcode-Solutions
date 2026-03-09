class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        //Using hash map
        unordered_map<string,int>mp;
        vector<string>ans;
        int mi=INT_MAX;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]]=i;
        }
        for(int j=0;j<list2.size();j++){
            if(mp.count(list2[j])){
                int s=j+mp[list2[j]];
                if(s<mi){
                    ans.clear();
                    ans.push_back(list2[j]);
                    mi=s;
                }
                else if(s==mi){
                    ans.push_back(list2[j]);
                }
            }

        }
        return ans;

    }
};