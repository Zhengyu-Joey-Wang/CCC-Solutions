#include <iostream>
using namespace std;
int main(){
	
	//int Ϊ������ֵΪ���� 
    int n;	//����nֵΪ���� 
    
    //cin ����˼�����루input����ֵ 
    cin >> n;	//nֵ���� 
    
    if (n < 1){
    	return 0;
	}
    int h[n + 1];	//����hֵΪ�б�ֵ���б�ֵ���б�����Ϊ n+1����������б�ֵ����n+1����ֵ�� 
    int w[n];	//����wֵΪ�б�ֵ���б�ֵ���б�����Ϊ n ����λ����ֵ�� 
    for (int i = 0; i <= n; i++){
    	cin >> h[i];	//����hֵ 
	}
	for (int i = 0; i < n; i++){
		cin >> w[i];	//����wֵ 
	}
	long double sum = 0;	//����sumΪС��ֵ��long double ��ָ���С����Ϊ�˷�ֹ��ֵ����� 
	for (int i = 0; i < n; i++){
		sum += (h[i] + h[i + 1]) * w[i] / 2.0;
	}
    printf("%Lf\n", sum);
    //cout << sum << endl;
	return 0;
}
