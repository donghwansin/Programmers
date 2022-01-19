#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> temp;
    int i;

    for (i = 0; n > 10; i++) {
        temp.push_back(n % 10);
        n /= 10;
    }
    temp.push_back(n);

    sort(temp.begin(), temp.end(), greater<int>());

    for (int j = 0; j <= i; j++)
    {
        answer += temp.back() * pow(10, j);
        temp.pop_back();
    }

    return answer;
}

int main()
{
    long long answer = 118372;

    answer = solution(answer);
    cout << answer << endl;

    return 0;
}

//���� ������������ ��ġ�ϱ�
//���� ����
//�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�.n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���.������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.
//
//���� ����
//n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.
//����� ��
//n	return
//118372	873211