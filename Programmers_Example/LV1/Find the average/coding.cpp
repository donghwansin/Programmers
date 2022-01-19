#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    answer = (double)sum / arr.size();
    return answer;
}

int main()
{
    double answer;
    vector<int> arr{ 1,2,3,4 };

    answer = solution(arr);
    cout << answer << endl;

    return 0;
}

//��� ���ϱ�
//���� ����
//������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.
//
//���ѻ���
//arr�� ���� 1 �̻�, 100 ������ �迭�Դϴ�.
//arr�� ���Ҵ� - 10, 000 �̻� 10, 000 ������ �����Դϴ�.
//����� ��
//arr	return
//[1, 2, 3, 4]	2.5
//[5, 5]	5