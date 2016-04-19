//name Yufei Wang
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h> 
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main (int arg, char* argv[])
{

	//////////////////////////file reading//////////////////
	string filename;
	ifstream file ("train.csv");

	/*infile.open(argv[1], ios::in);
	outfile.open("train.csv", ios::out);
	if(!infile)
	{
		cout <<" cannot open file" <<endl;
		exit(0);
	}
	*/
	string input_line;
	string input_word;

	int x = 0;

	vector<string> one_data;
	while(file.good()) {

		getline(file, input_line);
		cout<<input_line<<endl;
		istringstream temp(input_line);
		x = 0;
		one_data.clear();
		while(getline(temp,input_word,',')) {
			one_data.push_back(input_word);
		}
		for (int i = 0; i < 10; ++i)
		{
			cout<<one_data[i]<<",";
		}
		break;
	}


}