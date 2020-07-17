class Solution {
public:
    vector<vector<int>> v;
    vector<string> split(const string &s, char delim){ 
    vector<string> elems; 
    stringstream ss(s); 
    string item; 
    while (getline(ss, item, delim)) 
        elems.push_back(item); 
  
    return elems; 
    } 
void printPowerSet(vector<int> arr, int n){ 
    vector<string> list; 
    for (int i = 0; i < (int) pow(2, n); i++){ 
        string subset = ""; 
        for (int j = 0; j < n; j++){  
            if ((i & (1 << j)) != 0) 
                subset += to_string(arr[j]) + "|"; 
        }  
        if (find(list.begin(), list.end(), subset) == list.end()) 
            list.push_back(subset); 
    } 
    for (string subset : list){ 
        vector<string> arr = split(subset, '|'); 
        vector<int>v1;
        for (string str: arr) v1.push_back(stoi(str));
        v.push_back(v1);
    } 
} 
    vector<vector<int>> subsets(vector<int>& nums) {        
        printPowerSet(nums, nums.size());
        return v;
    }
};
