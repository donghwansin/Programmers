#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;
//////////////////////////////////////////////////////////////////
/////�̷��� Ǯ�� ����������, ȿ���� �׽�Ʈ���� �ð��ʰ��� ����////
//////////////////////////////////////////////////////////////////
//int solution(int n) {
//    int answer = n - 1;
//    int index = 0;
//
//    for (int i = 2; i <= n; i++) {
//        for (int j = 1; j <= sqrt(i); j++) {
//            if (j != 1 && j != i && i%j == 0) {
//                index++;
//                break;
//            }
//        }
//    }
//
//    return answer - index;
//}
///////////////////////////////////////////////////////////////////////////
////////���۰˻� ��� �����佺�׳��� ü : �ð����⵵�� ���� �˰����� ����//
///////////////////////////////////////////////////////////////////////////
// 2���� �����ؼ� 2�ǹ�� ���� �״��� �Ҽ� 3�� ã�� 3�� ��� �����ϴ� ���/
///////////////////////////////////////////////////////////////////////////
int solution(int n) {
    int answer = 0;
    //�Ҽ��� 0, �Ҽ��� �ƴϸ� 1�� �ٲٴ� �迭
    bool temp[1000000] = { 0 };
    for (int i = 2; i <= n; i++) {
        //�Ҽ����� Ȯ��
        //� ���� ������ٸ� �Ҽ��� �ƴϹǷ� �н�
        if (temp[i])
            continue;
        //���� ������ �ǳʿԴٸ� �Ҽ��� �ƴϹǷ� ī��Ʈ ����
        answer++;
        //������� ������� N���� �ڽ��� ����� �Ҽ��� �ƴѰ����� ��ȯ
        for (int j = i + i; j <= n; j += i) {
            temp[j] = true;
        }
        //�̷������� ����� true�� �����ϸ� �ݺ����� ������ ���ϼ�����
    }
    return answer;
}

int main()
{
    int answer;

    answer = solution(10);
    cout << answer << endl;
    return 0;
}

//�Ҽ� ã��
//���� ����
//1���� �Է¹��� ���� n ���̿� �ִ� �Ҽ��� ������ ��ȯ�ϴ� �Լ�, solution�� ����� ������.
//
//�Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ���� �ǹ��մϴ�.
//(1�� �Ҽ��� �ƴմϴ�.)
//
//���� ����
//n�� 2�̻� 1000000������ �ڿ����Դϴ�.
//����� ��
//n	result
//10	4
//5	3
//����� �� ����
//����� �� #1
//1���� 10 ������ �Ҽ���[2, 3, 5, 7] 4���� �����ϹǷ� 4�� ��ȯ
//
//����� �� #2
//1���� 5 ������ �Ҽ���[2, 3, 5] 3���� �����ϹǷ� 3�� ��ȯ