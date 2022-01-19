#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (int i = 0; i < completion.size(); i++) {
        if (participant[i] != completion[i]) {
            answer = participant[i];
            return answer;
        }
    }

    return answer = participant.back();
}

int main()
{
    string answer;
    vector<string> a{ "leo", "kiki", "eden" };
    vector<string> b{ "eden", "kiki" };

    answer = solution(a, b);
    cout << answer << endl;

    return 0;
}

//�������� ���� ����
//���� ����
//������ ������ �������� �����濡 �����Ͽ����ϴ�.�� �� ���� ������ �����ϰ��� ��� ������ �������� �����Ͽ����ϴ�.
//
//�����濡 ������ �������� �̸��� ��� �迭 participant�� ������ �������� �̸��� ��� �迭 completion�� �־��� ��, �������� ���� ������ �̸��� return �ϵ��� solution �Լ��� �ۼ����ּ���.
//
//���ѻ���
//������ ��⿡ ������ ������ ���� 1�� �̻� 100, 000�� �����Դϴ�.
//completion�� ���̴� participant�� ���̺��� 1 �۽��ϴ�.
//�������� �̸��� 1�� �̻� 20�� ������ ���ĺ� �ҹ��ڷ� �̷���� �ֽ��ϴ�.
//������ �߿��� ���������� ���� �� �ֽ��ϴ�.
//����� ��
//participant	completion	return
//["leo", "kiki", "eden"]["eden", "kiki"]	"leo"
//["marina", "josipa", "nikola", "vinko", "filipa"]["josipa", "filipa", "marina", "nikola"]	"vinko"
//["mislav", "stanko", "mislav", "ana"]["stanko", "ana", "mislav"]	"mislav"
//����� �� ����
//���� #1
//"leo"�� ������ ���ܿ��� ������, ������ ���ܿ��� ���� ������ �������� ���߽��ϴ�.
//
//���� #2
//"vinko"�� ������ ���ܿ��� ������, ������ ���ܿ��� ���� ������ �������� ���߽��ϴ�.
//
//���� #3
//"mislav"�� ������ ���ܿ��� �� ���� ������, ������ ���ܿ��� �� ���ۿ� ���� ������ �Ѹ��� �������� ���߽��ϴ�.