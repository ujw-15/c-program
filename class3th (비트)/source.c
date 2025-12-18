#include<stdio.h>

void main()
{
#pragma region 산술 연산자
	//
	//
	//	int m = 2;
	//	int x = 3;
	//	int y = 4;
	//	const int k = 5;
	//
	//	// 1. 변수 = 변수 + 변수
	//	m = x + y;
	//
	//	printf(" m : %d\n", m);
	//	// 2. 변수 = 변수 - 리터럴 상수
	//	m = y - 1;
	//
	//	printf("m : %d\n", m);
	//	// 3. 변수 = 변수 * 심볼릭 상수
	//	m = x * k;
	//
	//	printf("m : %d\n", m);
	//	// 4. 변수 = 리터럴 상수 / 리터럴 상수
	//	m = 20 / 5;
	//
	//	printf("m : %d\n", m);
	//	// 5. 변수 = 심볼릭 상수 % 리터널 상수
	//	m = k % 5;
	//
	//	printf("m : %d\n", m);



#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// ex) 23 -> 10111
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용되는 연산자입니다.

#pragma region AND 연산자
//	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
//
//	int wisdom = 10;	// 0000 1010
//	int dexterity = 6;	// 0000 0110
//						// ---------
//						// 0000 0010
//
//	printf("wisdom & dexterity : %d\n", wisdom & dexterity);

#pragma endregion

#pragma region  OR 연산자
//	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자입니다.
//	
//	int poison = 8;     // 0000 1000
//	int freeze = 12;    // 0000 1100
//					    // ---------
//					    // 0000 1100
//
//	printf("poison | freeze : %d\n", poison | freeze);
#pragma endregion

#pragma region XOR 연산자
//	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
//	// 1을 반환하는 연사자입니다.
//
//	int battle = 6; // 0000 0110
//	int idle = 15;	// 0000 1111
//					// --------
//					// 0000 1001
//
//	printf("battle ^ idle : %d\n", battle ^ idle);
//
#pragma endregion

#pragma region NOT 연산자
//	// 하나의 비트를 반전시키는 연산자입니다.
//
//	int status = 13; // 0000 1101
//					 // ---------
//					 // 1111 0010
//
//	printf("status : %d\n", ~status);
//
//	// 첫 번쨰 비트는 부호를 나타내며, 첫 번째 비트에
//	// 1이 있다면 값은 음수가 됩니다.
#pragma endregion

#pragma region 시프트 연산자
//	// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자입니다.
//
//	int packet = 5;	// 0000 0101
//
//	printf("packet 변수를 왼쪽으로 2칸 이동한 결과 : %d\n", packet << 2);  
//	// 0001 0100
//	printf("packet 변수를 오른쪽으로 1칸 이동한 결과 : %d\n", packet >> 1); 
//	// 0000 0010

#pragma endregion

#pragma endregion

// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion
}