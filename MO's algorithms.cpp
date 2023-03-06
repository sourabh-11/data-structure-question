// C++ Program to compute sum of ranges for different range
// queries.
#include <bits/stdc++.h>
using namespace std;


struct Query
{
	int L, R;
};


void printQuerySums(int a[], int n, Query q[], int m)
{
	// One by one compute sum of all queries
	for (int i=0; i<m; i++)
	{
		// Left and right boundaries of current range
		int L = q[i].L, R = q[i].R;

		// Compute sum of current query range
		int sum = 0;
		for (int j=L; j<=R; j++)
			sum += a[j];

		// Print sum of current query range
		cout << "Sum of [" << L << ", "
			<< R << "] is " << sum << endl;
	}
}

// Driver program
int main()
{
	int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
	int n = sizeof(a)/sizeof(a[0]);
	Query q[] = {{0, 4}, {1, 3}, {2, 4}};
	int m = sizeof(q)/sizeof(q[0]);
	cout<<m;
	printQuerySums(a, n, q, m);
	return 0;
}

