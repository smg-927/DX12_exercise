#include	<windows.h>	//	for	XMVerifyCPUSupport
#include	<DirectXMath.h>
#include	<DirectXPackedVector.h>
#include	<iostream>

using	namespace	std;
using	namespace	DirectX;
using	namespace	DirectX::PackedVector;


void run_ex01_01() {

	printf("Running Exerciasdfadfse 01\n");

	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 0.0f, 0.0f);
	XMVECTOR v = XMVectorSet(3.0f, -4.0f, 0.0f, 0.0f);

	// 1)
	XMVECTOR ans1 = u + v;
	// 2)
	XMVECTOR ans2 = u - v;
	// 3)
	XMVECTOR ans3 = (2 * u) + (0.5 * v);
	// 4) 
	XMVECTOR ans4 = (-2 * u) + v;


	cout << "ans1 : " << ans1 << endl;


}
