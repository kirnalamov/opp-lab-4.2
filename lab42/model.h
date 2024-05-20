#include <cstdio>
#include <iostream>
#pragma warning(disable : 4996)

ref class Model {
	private: 
		int  A; 
		int  B; 
		int  C;

	public: 
		System::EventHandler^ observers; 
		System::EventHandler^ erors;

		Model() : A(50), B(50), C(50) {
			freopen("data.txt", "r", stdin);
			int a, b, c;

			std::cin >> a >> b >> c;
			if (a <= b && b <= c && 0 <= a && c <= 100) {
				A = a;
				B = b;
				C = c;
			}
		};

		void set_value(int n, char arg) {
			if (arg == 'A' && n >= 0 && n <= 100)
			{
				A = n;
				if (B < A) B = n;
				
				if (C < B) C = B;
				
			}
			else if (arg == 'C' && n >= 0 && n <= 100)
			{
				C = n; 
				if (B > C)  B = C;
				if (A > B) A = B;
			}
			else if ( arg == 'B' && n >= 0 && n <= 100) {
				if (n < A) {
					B = A;
				}
				else if (n > C) {
					B = C;
				}
				else {
					B = n;
				}
			}
			else {
				erors->Invoke(this, nullptr);
			}
			observers->Invoke(this, nullptr);
			freopen("data.txt", "w", stdout);
			std::cout << A <<' ' << B<< ' ' << C;
		
		}

	public: int get_value(char args) {
			if (args == 'A') return A;
			if (args == 'B') return B;
			if (args == 'C') return C;
			return 0;
}


};