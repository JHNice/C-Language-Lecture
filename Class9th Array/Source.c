#include <stdio.h>

void main()
{
#pragma region 문자열
	// // 연속적인 메모리 공간에 저장된 문자 변수의
	// // 집합입니다.
	// const char* message = "unique";
	// char car[] = "bmw";
	// 
	// printf("%s\n", message);
	// message = &"error";
	// printf("%s\n\n", message);
	// 
	// // 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
	// // 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용 공간
	// // 에 저장되기 때문에 문자열의 값을 변경할 수 없습니다.
	// 
	// printf("%s\n", car);
	// car[2] = 'e';
	// printf("%s\n", car);
	// 
	// // 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
	// // 마지막에 문자열의 끝을 알려주는 제어 문자가 추가 됩니다.
	// 
	// car[1] = '\0';
	// 
	// printf("%s\n", car);
	// 
	// // 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만,
	// // 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력됩니다.

#pragma endregion
#pragma region (2)차원 배열
	// // 배열의 요소로 또 다른 배열을 가지는 배열입니다.
	// int array2D[3][3] =
	// {
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };
	// 
	// // 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은
	// // 열을 의미하고, 뒤에 있는 배열은 행을 의미한다.
	// 
	// for (int i =0 ; i<3 ; i++)
	// {
	// 	for (int j = 0 ; j < 3 ; j++)
	// 	{
	// 		printf("%d ",array2D[i][j]);
	// 	}
	// 	printf("\n");
	// }

#pragma endregion

}