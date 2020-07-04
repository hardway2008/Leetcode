
#include "lru_cache.h"
#include <iostream>
#include <thread>

void func(){
	std::cout << "Hello from another thread!" << std::endl;
}

int main() 
{
	LRUCache lru_cache(5);
	lru_cache.put(1, 10);
	lru_cache.put(2, 100);
    std::cout<< lru_cache.get(1) << std::endl;
	std::cout<< lru_cache.get(2) << std::endl;

	std::thread t(func);
	std::cout << "hello world!" << std::endl;
	t.join();

	return 0;
}
