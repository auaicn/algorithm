#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

#define MAX_ORDER_SIZE (110)
#define MAX_PATTERN_SIZE (50010)
#define MAX_TEXT_SIZE (500010)

char alphabetical_order[MAX_ORDER_SIZE];
char patternString[MAX_PATTERN_SIZE];
char textString[MAX_TEXT_SIZE];

int lengthOrder;
int lengthPattern;
int lengthText;

int main(int argc, char const *argv[])
{
	int T; scanf("%d",&T);
	while(T--)
	{
		

		fgets(alphabetical_order + 1, MAX_ORDER_SIZE, stdin);
		fgets(patternString + 1, MAX_PATTERN_SIZE, stdin);
		fgets(textString + 1, MAX_TEXT_SIZE, stdin);

		lengthOrder = strlen(MAX_ORDER_SIZE) - 1;

		alphabetical_order[st]

		printf("%s\n,%s]n")

	}
	return 0;
}

// 암호학에서, 시저 암호(또는 시프트 암호, 시저 코드, 시저 시프트)는 가장 간단하면서 많이 알려진 암호화 기술 중 하나이다. "시저 암호"라는 이름은 비밀 통신을 위해 이 방법을 개발한 율리우스 시저의 이름을 딴 것이다. 시저 암호는 대치 암호의 한 종류로써, 원문의 각 글자가 어떤 일정한 수만큼의 뒷 순서의 알파벳으로 대체되는 방식이다. (단, Z의 다음 알파벳은 A로 한다) 예를 들어, 대문자 알파벳의 일반적인 순서를 따르면서 3만큼 시프트(이동) 시키면, A는 D로 대체되고, B는 E로, C는 F로... 그런 식으로 변환되어서 마지막 X, Y, Z는 다시 A, B, C로 대체된다. 이런 식으로 알파벳 순서에서 X만큼 뒤로 옮기는 암호화 방법의 "시프트 값"을 X라고 하겠다.

// 당신에게 어떤 알파벳 순서 A, 원문 W, 시저 암호화된 문자열 S가 주어진다.

// 암호문을 해독했을 때 그 해독한 문자열에서 원문이 단 한 번만 나타난다고 할 때, 암호화 할 때 쓰였다고 추측 가능한 시프트 값을 ([0,|A|-1] 범위에서) 모두 찾아라.

// 입력
// 입력의 첫 줄에는 테스트 케이스의 수를 의미하는 정수 N이 있다. 각 테스트 케이스는 알파벳의 순서 A, 원문 W, 암호문 S가 3줄에 걸쳐 순서대로 쓰여 있다. 알파벳 순서 A는 알파벳 소문자, 대문자, 그리고 숫자만을 포함하며, 이 순서는 사전순이 아닐 수도 있다 (예제 입력의 3번째 테스트 케이스를 참고하라). A의 모든 문자는 다르다.

// 입력 범위 : 3 <= |A| <= 62, 1 <= |W| <= 50,000, 3 <= |S| <= 500,000.

// 출력
// 각 테스트 케이스에 대해 1줄씩 출력한다. 만약 해독된 암호문에서 원문이 단 한번만 등장하게 하는 암호화 방법이 존재하지 않는다면, 즉 조건을 만족하는 암호문의 시프트 값이 존재하지 않는다면 "no solution"을 출력한다 (따옴표 제외). 만약 오직 하나의 시프트 값만이 조건을 만족한다면, "unique : #" (단, #는 조건을 만족하는 시프트 값) 을 출력한다 (따옴표 제외). 만약 조건을 만족하는 시프트 값이 여러 개 존재한다면, "ambiguous: " 를 출력하고 그 뒤에 오름차순으로 정렬된 조건을 만족하는 시프트 값의 목록을 출력한다.

// 자세한 사항은 예제 출력을 참고하라.

// 예제 입력 1 
// 4
// ABC
// ABC
// ABCBBBABC
// ABC
// ABC
// ABCBCAABC
// D7a
// D7a
// D7aaD77aDD7a
// ABC
// ABC
// ABC
// 예제 출력 1 
// no solution
// unique: 1
// ambiguous: 1 2
// unique: 0