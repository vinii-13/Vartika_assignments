#include<iostream>
#include<thread>
#include<mutex>

std::mutex m1;
int var = 0;

// using mutex, issue may lie if we forget to unlock it.
void increment(const char* t, int iterations) {
	m1.lock();
	for (int i = 0; i < iterations; ++i) {
		var += 1;
		std::cout << "thread number: " << t << " var = " << var<<std::endl;
	}
	//m1.unlock();
}

// using lock_guard, no need for manual unlocking or locking.
void increment2(const char* t, int iterations) {
	std::lock_guard<std::mutex>lg(m1);
	for (int i = 0; i < iterations; ++i) {
		var += 1;
		std::cout << "thread number: " << t << " var = " << var << std::endl;
	}
}

int main() {
	std::thread t1(increment2, "01", 5);
	std::thread t2(increment2, "02", 4);
	t1.join();
	t2.join();
	return 0;
}