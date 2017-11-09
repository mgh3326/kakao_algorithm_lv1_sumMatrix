#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > sumMatrix(vector<vector<int> >A, vector<vector<int> >B)
{
	vector<vector<int> > answer;
	for(int i=0;i<A.size();i++)
		for (int j = 0; j < A[0].size(); j++)
		{
			A[i][j] += B[i][j];
		}
	answer = A;
	return answer;
}
int main()
{
	vector<vector<int> > a{ { 1,2 },{ 2,3 } }, b{ { 3,4 },{ 5,6 } };//������ ���͵� �����ϱ���
	vector<vector<int> > answer = sumMatrix(a, b);
	
	for (int i = 0; i<answer.size(); i++)
	{
		for (int j = 0; j<answer[0].size(); j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << "\n";
	}
}
/*
����� ������ ��� ���� ũ�Ⱑ ���� �� ����� ���� ��, ���� ���� ���� ���� ���� ����� �˴ϴ�.
2���� ����� �Է¹޴� sumMatrix �Լ��� �ϼ��Ͽ� ��� ������ ����� ��ȯ�� �ּ���.

���� ��� 2x2 ����� A = ((1, 2), (2, 3)), B = ((3, 4), (5, 6)) �� �־�����, ���� 2x2 ����� ((4, 6), (7, 9))�� ��ȯ�ϸ� �˴ϴ�.
(��� ��Ŀ��� �����ϴ� �Լ��� �ϼ����ּ���.)
*/