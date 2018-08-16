#include "Header.h";

const int HUNDRED = 99;

int main() {
	ifstream read_data("voltage.txt");
	double input[HUNDRED] = { 0 };
	double conversion = 0;
	int j = 0;
	double value = 0;
	//fstream has both read / write permissions good for 

	
	if (read_data.fail())
	{
		cout << "\nFile did not open.";
		exit(1);
	}
	else
	{
		//ofstream output_data("asdf.txt");
		//ifstream read_data("asdf.txt", ios::app) append to end of file;
		//ifstream read_data("asdf.txt", ios::ate) end of file; finding out 
		//ifstream read_data("asdf.txt", ios::binary); ignores special characters
		//ifstream read_data("asdf.txt", ios::out | ios::app); output to end of file
		
		
		for (int i = 0; i < size(input); i++)
		{
			if (read_data.fail()) {
				cout << "failed to read data";
			}
			else if (read_data.bad()) {
				cout << "bad data";
			}
			//j iterator because I'm not sure how else to take the number of inputs, or show how many numbers are in an array
			j = i; 
			//if end of file
			if (read_data.eof()) {
				cout << "end of file" << endl;
				break;
			}
			
			string convert = "";
			getline(read_data, convert);
			input[i] = atof(convert.c_str());
			value += input[i];
			if (input[i] == 0) {
				cout << "input[i] was 0";
			}

			
			cout << "here is the array input value of the text file: " << input[i] << endl;

		}
		double avg = value / j;

		cout << "Here is the average: " << avg << endl;

	}


	
	system("PAUSE");
	return 0;
}

