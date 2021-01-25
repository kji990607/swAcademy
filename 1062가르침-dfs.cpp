#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, K;
int num = 0;
bool alphabet[26];
vector<string> words;

void DFS(int index, int selectedCount) {
//1. 체크인=> visited[index] = true, selectedCount
//2. 목적지인가? selectedCount가 k에 도달했는가 => max 갱신
//3. 연결된 곳을 순회 => index +1 ~26
//4. 갈 수 있는가? => visited[next] == false
//5. 간다 => dfs(next)
//6. 체크아웃 => visited[index] = false, selectedCount 
	if (selectedCount == K) {
		bool isRead;
		int readCount = 0;
		for(int i=0;i<words.size();i++) {
			isRead = true;
			string temp = words[i];
			for(int j=0;j<temp.size();j++) {
				if(alphabet[temp[j] - 'a']==false) {
					isRead = false;
					break;
				}
			}
			if(isRead==true) {
				readCount++;
			}
		}
		num = (readCount>=num) ? readCount : num;
	}
	for(int i=index; i<26; i++) {
		if(alphabet[i]==true) {
			continue;
		}
		alphabet[i] = true;
		DFS(i, selectedCount+1);
		alphabet[i] = false;
	}
}


int main() {
	cin >> N >> K;
	
	for(int i=0;i<N;i++) {
		string s;
		cin >> s;
		words.push_back(s);
	}
	
	if(K<5) {
		cout << 0 << endl;
		return 0;
	}
	
	alphabet['a'-'a'] = true;
	alphabet['n'-'a'] = true;
	alphabet['t'-'a'] = true;
	alphabet['i'-'a'] = true;
	alphabet['c'-'a'] = true;
	K -= 5;
	
	DFS(0,0);
	cout << num << endl;
}





