/*
 chinese reminder theorem(CRT) full code with explaination in c++
 steps to solve CRT 
 1. get input reminders array and nums/modulos array 
 2. calculate N i.e product of all elements in modulos array
 3. now apply formula -> biNixi
 	  Result = summation(biNixi) where i -> (0,.....,n) n -> size of nums array ;
 4. Return Result % M i.e required answer
 */

#include<iostream>
#include<vector>
using namespace std;

// extended eucledian algorithm for computing gcd ans value of x;
// x -> solution of diophantine eqaution
int gcdExtended(int a, int b, int& x, int& y){
	
	int d;
	// if both a and b are 0 then gcd is 0;
	if(a==0 and b==0) 
			return 0;
	
	// when a or b any one is 0
	//when b becomes 0
	if(b==0) {
		if(a<0) {
			d = -a;
			x = -1;
			y = 0;
		}
		else{
			d = a;
			x = 1;
			y = 0;
		}
		return d;
	}
	
	//when a becomes 0;
	if(a==0) {
		if(b<0) {
			d = -b;
			x = 0;
			y = -1;
		}
		else{
			d = b;
			x = 0;
			y = 1;
		}
		return d;
	}
	
	// when a or b any one is negative
	// when b is negative
	if(b<0) {
		d = gcdExtended(a, -b, x, y);
		y = -y;
		return d;
	}
	
	// when a is negative
	if(a<0) {
		d = gcdExtended(-a, b, x, y);
		x = -x;
		return d;
	}
	
	//recursive calls; and computing values of x and y by general formula of gcdExtended;
	int A = b;
	int B = a%b;
	int D = a/b;
	
	int X, Y;
	
	d = gcdExtended(A, B, X, Y);
	x = Y;
	Y = X - (D*Y);
	
	return d;
}

//modulo inverse of a with respect to m
int moduloInverse(int a, int m) {
	int x, y, inverse;
	int gcd = gcdExtended(a, m, x, y);
	if(gcd != 1) {
		cout << "Solution does not exist" << endl;
	}
	else{
		inverse = (x%m + m) %m; 
	}
	return inverse;
}


// chinese reminder theorem
int CRT(vector<int> rems, vector<int> nums) {
	
	// compute N i.e product of all modulas in nums
	int N = 1;
	for(int i=0; i<nums.size(); i++)
			N *= nums[i];
	
	//compute summation over i to n (n -> size of nums or rems) of biNiXi;
	int Result = 0;
	for(int i=0; i<nums.size(); i++) {
		int Ni = N/nums[i];
		int bi = rems[i];
		int Xi = moduloInverse(Ni, nums[i]);
		Result += Ni*bi*Xi;
	}
	
	int soln = Result%N;
	return soln;
}

int main() {
	/*
	conisder equation
	x = 3(mod 5) 
	x = 1(mod 7) 
	x = 6(mod 8) 
	(= equivalence)
	find x?
	here reminders are {3, 1, 6}
	nums are {5, 7, 8}
	*/
	vector<int> rems(0); // {3, 1, 6};
	vector<int> nums(0); // {5, 7, 8};
	
	int size;
	cout << "Enter size of any array: ";
	cin >> size;
	
	for(int i=0; i<size; i++) {
		int temp;
		cin >> temp;
		rems.push_back(temp);
	}
	
	for(int i=0; i<size; i++) {
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}
	
	int ans = CRT(rems, nums);
	// ans -> 78
	cout << "Solution for given equation is x = " << ans << endl;
	
	return 0;
}
