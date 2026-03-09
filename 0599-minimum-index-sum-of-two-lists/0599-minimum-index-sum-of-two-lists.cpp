class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int mi=INT_MAX;
        vector<string>a;

        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]){
                    if(i+j<mi){
                        mi=i+j;
                        a.clear();
                        a.push_back(list1[i]);
                    }
                    else if(i+j==mi){
                        a.push_back(list1[i]);
                    }
                }
            }
        }
        return a;
    }
};