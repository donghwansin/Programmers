#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string find = "Kim";
    int i;

    for (i = 0; i < seoul.size(); i++) {
        if (find == seoul[i]) {
            break;
        }
    }

    return answer = "�輭���� " + to_string(i) + "�� �ִ�";
}

int main()
{
    string answer = "";
    vector<string> seoul{ "Jane", "Kim", "len" };
    answer = solution(seoul);
    cout << answer << endl;
    return 0;
}
//
//���￡�� �輭�� ã��
//���� ����
//String�� �迭 seoul�� element�� "Kim"�� ��ġ x�� ã��, "�輭���� x�� �ִ�"�� String�� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.seoul�� "Kim"�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.
//
//���� ����
//seoul�� ���� 1 �̻�, 1000 ������ �迭�Դϴ�.
//seoul�� ���Ҵ� ���� 1 �̻�, 20 ������ ���ڿ��Դϴ�.
//"Kim"�� �ݵ�� seoul �ȿ� ���ԵǾ� �ֽ��ϴ�.
//����� ��
//seoul	return
//["Jane", "Kim"]	"�輭���� 1�� �ִ�"