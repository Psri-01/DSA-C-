// C++ program to print all primes smaller than or equal to n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
bool prime[n + 1];
memset(prime, true, sizeof(prime));
for (int p = 2; p * p <= n; p++) {
if (prime[p] == true) {
for (int i = p * p; i <= n; i += p)
prime[i] = false;
}
}
for (int p = 2; p <= n; p++)
if (prime[p])
cout << p << " ";
}
int main()
{
int n;
cin>>n;
cout << "Following are the prime numbers smaller than or equal to " << n << endl;
SieveOfEratosthenes(n);
return 0;
}

// C++ program to find prime factorization of a number n in O(Log n) time with precomputation allowed.
#include "bits/stdc++.h"
using namespace std;
#define MAXN 100001
// stores smallest prime factor for every number
int spf[MAXN];
// Calculating SPF (Smallest Prime Factor) for every number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
	spf[1] = 1;
	for (int i = 2; i < MAXN; i++)
		// marking smallest prime factor for every number to be itself.
		spf[i] = i;
	// separately marking spf for every even number as 2
	for (int i = 4; i < MAXN; i += 2)
		spf[i] = 2;
	for (int i = 3; i * i < MAXN; i++) {
		// checking if i is prime
		if (spf[i] == i) {
			// marking SPF for all numbers divisible by i
			for (int j = i * i; j < MAXN; j += i)
				// marking spf[j] if it is not previously marked
				if (spf[j] == j)
					spf[j] = i;
		}
	}
}
// A O(log n) function returning primefactorization by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
	vector<int> ret;
	while (x != 1) {
		ret.push_back(spf[x]);
		x = x / spf[x];
	}
	return ret;
}

int main(int argc, char const* argv[])
{
	// precalculating Smallest Prime Factor
	sieve();
	int x = 12246;
	cout << "prime factorization for " << x << " : ";
	vector<int> p = getFactorization(x);
	for (int i = 0; i < p.size(); i++)
		cout << p[i] << " ";
	cout << endl;
	return 0;
}
