#include<iostream>
#include<functional>

void show(int x) {
	std::cout << x << std::endl;
}

void show(double x) {
	std::cout << x << std::endl;
}
void greet() {
	std::cout << "greetings " << std::endl;
}

/*
 in case of overloaded functions, use of & is necessary along with static casting
 Use & when dealing with overloaded functions to avoid ambiguity.
*/

// passing function pointer as an arguement
void call(void (*p3)()) {
	std::cout << "calling a function " << std::endl;
	p3();
}

int main() {

	void (*p1)(int) = static_cast<void(*)(int)>(&show);
	p1(2);
	void(*p2)(double) = static_cast<void(*)(double)>(&show);
	p2(3.2);

	call(greet);


	std::function<void()>func = greet;
	func();

	// capturing lambda functions
	std::function<int(int,int)>add = [](int a, int b){return a + b;};
	std::cout << add(2, 3) << std::endl;

	//storing a functor
	struct op{
		int operator()(int v, int b) {
			return v + b;
		}
	};
	op o1;
	std::function<int(int, int)>summ = o1;
	std::cout << summ(6,7) << std::endl;
	return 0;
}
/*
Function Pointers Are More Efficient for Large Menus
In a large menu system (e.g., CLI applications), a switch-case must check each case sequentially until a match is found.

Time Complexity of Switch-Case:
O(n) (Worst case: If the choice is last in the switch, all cases are checked).
Time Complexity of Function Pointer Lookup Table:
O(1) (Direct array indexing).
For a small menu, the difference is negligible, but for hundreds of options, function pointers perform much better.

Q. how does " Dynamic behavior ", achieved by function pointers improve performance of our program?
Ans. 
1. Using function pointers removes the need for multiple if-else or switch-case statements, which require sequential checking.
	T.C with switch case: O(n)
	T.C with function pointer: O(1)
2. Enables Faster Execution by Avoiding Unnecessary Computations
	avoids the use of multiple if-else blocks and hence reducing branching penality and 
	improing CPU efficiency.

Q. why use std::function instead of raw function pointers?(uses functional library)
Ans. Traditional function pointers have limitations:
		They cannot store lambdas with captures.
		They cannot store member functions of a class.
		They lack type safety and flexibility.


*/