// Desriptor for D2Q9 lattice

#define lattice D2Q9
#include<vector>
#include<iostream>

namespace D2Q9 {

// Number of streaming vectors (q-vectors)
const int nQ = 9;

// Lattice dimensions
const int nD = 2;

// Lattice weights
const double weight[nQ] = {(double) 4./9.,
		(double) 1./9., (double) 1./9.,(double) 1./9.,(double) 1./9.,
		(double) 1./36., (double) 1./36., (double) 1./36., (double) 1./36.};

const int iOpposite[nQ] = {0,3,4,1,2,7,8,5,6};

//const std::vector<int> halfQs = {1,2,5,6};

const int iHalfQs[nQ/2] = {1,2,5,6};

// Velocity components
const int Qvectors[nQ][nD]  =  {
		{0,0},
		{1,0}, {0,1}, {-1,0},{0,-1},
		{1,1}, {-1,1}, {-1,-1}, {1,-1}
};
}
