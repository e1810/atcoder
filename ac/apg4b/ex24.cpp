#include <bits/stdc++.h>
using namespace std;

struct Clock{
	int hour;
	int minute;
	int second;

	void set(int h, int m, int s){
		hour = h;
		minute = m;
		second = s;
	}

	string to_str(){
		string ret = "";
		if(hour<10) ret += "0";
		ret +=to_string(hour);

		ret += ":";
		if(minute<10) ret += "0";
		ret += to_string(minute);

		ret += ":";
		if(second<10) ret += "0";
		ret += to_string(second);

		return ret;
	}

	void shift(int diff_second){
		int dh = diff_second / 3600;
		diff_second %= 3600;
		int dm = diff_second / 60;
		int ds = diff_second % 60;
		hour += dh;
		minute += dm;
		second += ds;

		if(second<0){
			second += 60;
			minute--;
		}else if(second>59){
			second %= 60;
			minute++;
		}

		if(minute<0){
			minute += 60;
			hour--;
		}else if(minute>59){
			minute %= 60;
			hour++;
		}

		if(hour<0) hour += 24;
		else if(hour>23) hour %= 24;
	}
};


int main() {
	int hour, minute, second;
	cin >> hour >> minute >> second;
	int diff_second;
	cin >> diff_second;

	Clock clock;

	clock.set(hour, minute, second);

	cout << clock.to_str() << endl;

	clock.shift(diff_second);

	cout << clock.to_str() << endl;
}

