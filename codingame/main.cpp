#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
#define REP(i,b,e) for(int i=(b);i<(e);i++)

struct Cell {
	int index, richness;
	vector<int> neigh;
	Cell(): neigh(6) {}
};

struct Tree {
	int cellIndex, size;
	bool isMine, isDormant;
};

int main(){
	int numberOfCells;
	cin >> numberOfCells; cin.ignore();
	vector<Cell> cells(numberOfCells);
	for(auto &c: cells){
		cin >> c.index >> c.richness;
		REP(i, 0, 6) cin >> c.neigh.at(0);
        cin.ignore();
	}

	while(true){
		int day, nutrients;
		cin >> day; cin.ignore();
        cin >> nutrients; cin.ignore();
		int sun, score, oppsun, oppscore, oppIsWaiting;
		cin >> sun >> score; cin.ignore();
        cin >> oppsun >> oppscore >> oppIsWaiting; cin.ignore();
		int numberOfTrees;
		cin >> numberOfTrees; cin.ignore();

		vector<Tree> trees(numberOfTrees);
		int numberOfSize2 = 0, numberOfSize3 = 0;
		for(auto &t: trees){
			cin >> t.cellIndex >> t.size >> t.isMine >> t.isDormant;
            cin.ignore();
			if(t.size==2) numberOfSize2++;
			if(t.size==3) numberOfSize3++;
		}

		int numberOfPossibleActions;
		cin >> numberOfPossibleActions; cin.ignore();
        vector<string> possibleActions(numberOfPossibleActions);
        REP(i, 0, numberOfPossibleActions){
			getline(cin, possibleActions.at(i));
		}

		if(day==5){
			bool noway = true;
			for(auto t: trees){
				if(t.isMine && t.size==3){
					if(sun < 4) continue;
					cout << "COMPLETE " << t.cellIndex << endl;
					noway = false;
					break;
				}
			}
			if(noway){
				cout << "WAIT" << endl;
			}
			continue;
		}

		bool noway = true;
		for(auto t: trees){
			if(t.isMine && t.size<3){
				if(t.size==1){
					int cost = 3 + numberOfSize2;
					if(cost > sun) continue;
					sun -= cost;
					cout << "GROW " << t.cellIndex << endl;
					numberOfSize2++;
					noway = false;
					break;
				}else{
					int cost = 7 + numberOfSize3;
					if(cost > sun) continue;
					sun -= cost;
					cout << "GROW " << t.cellIndex << endl;
					numberOfSize2--;
					numberOfSize3++;
					noway = false;
					break;
				}
			}
		}
		if(noway) cout << "WAIT" << endl;
	}
}



