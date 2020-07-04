#pragma once

#include <cstdint>
#include <list>
#include <unordered_map>

struct Node{
    Node(int32_t ikey, int32_t ivalue):key(ikey), value(ivalue){

    }

    int32_t key;
    int32_t value;
};

class LRUCache{
public:
    LRUCache(int32_t capacity){
        capacity_ = capacity;
    }
    
    int32_t get(int32_t key){
        return map_[key]->value;
    }

    void put(int32_t key, int32_t value){
        list_.emplace_back(key, value);
        map_[key] = list_.end();
    }

private:
    int32_t capacity_;
    std::unordered_map<int, std::list<Node>::iterator> map_;
    std::list<Node> list_;
};