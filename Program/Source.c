#include <stdio.h>

void main()
{
#pragma region 산술 연산자
	// int a = 10;
	// int b = 5;
	// float c = 2.5f;
	// int e, g, h;
	// float d, f;
	// // 1. 변수 = 변수 + 변수
	// d = b + c;
	// // 2. 변수 = 변수 - 리터럴 상수
	// e = a - 1;
	// // 3. 변수 = 변수 * 심볼릭 상수
	// f = b * c;
	// // 4. 변수 = 리터럴 상수 / 리터럴 상수
	// g = 4 / 2;
	// // 5. 변수 = 심볼릭 상수 % 리터럴 상수
	// h = b % 5;
	// 
	// printf("d = %f\ne = %d\nf = %f\ng = %d\nh = %d",d,e,f,g,h);
#pragma endregion

#pragma region 비트

	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정

	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// 23/2 = (11,1) -> 11/2 = (5,1) -> 5/2 = (2,1) -> 2/2 = (1,0)
	// 23 = 10111(2)

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정

	// 1byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.

#pragma endregion

#pragma region 비트 연산자

	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.
	
#pragma region AND 연산자

	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
	// int wisdom = 10;				// 1010
	// int dexterity = 6;			// 0110
	// int a = wisdom & dexterity;	// 0010 = 2
	// printf("wisdom & dexterity = %d", a);

#pragma endregion

#pragma region OR 연산자

	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자입니다.
	// int poison = 8;				// 0000 1000
	// int freeze = 12;				// 0000 1100
	// int a = poison | freeze;		// 0000 1100 = 12
	// printf("poison | freeze = %d", a);

#pragma endregion

#pragma region XOR 연산자

	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
	// 1을 반환하는 연산자입니다.

	// int idle = 15;				// 0000 1111
	// int battle = 6;				// 0000 0110
	// int a = idle ^ battle;		// 0000 1001 = 9
	// printf("idle ^ battle = %d", a);

#pragma endregion

#pragma region NOT 연산자

	// 하나의 비트를 반전시키는 연산자입니다.

	// int status = 13;				// 0000 1101
	//    ~status					// 1111 0010 = -14
	// printf("~status = %d", ~status);

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 1이 있다면 값은 음수가 됩니다 

#pragma endregion

#pragma region 시프트 연산자

	// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자입니다.

	int packet = 5;			//			0000 0101
							//	<< 2 =	0001 0100
							//	>> 1 =	0000 0010
	printf("packtet <<2 = %d\n", packet << 2);
	printf("packtet >>1 = %d", packet >> 1);

#pragma endregion


#pragma endregion


#pragma endregion


}							   