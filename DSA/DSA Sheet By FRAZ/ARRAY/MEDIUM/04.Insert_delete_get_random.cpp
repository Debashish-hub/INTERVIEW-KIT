class RandomizedSet {
private:
    vector<int> v;
    unordered_map<int, int> m;
public:
    
    RandomizedSet() {
    }
    bool insert(int val) {
        if(m.find(val) != m.end()){
            return false;
        }else{
            v.push_back(val);
            m[val] = v.size()-1;
            return true;
        }    
    }
    
    bool remove(int val) {
        if(m.find(val) == m.end()){
            return false;
        }else{
            int l = v.back();
            v[m[val]] = v.back();
            v.pop_back();
            m[l] = m[val];
            m.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

    
    
   