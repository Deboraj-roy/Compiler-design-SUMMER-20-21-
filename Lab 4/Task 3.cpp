#include <iostream>
#include <fstream>
using namespace std;

 string aab=" ";

string removeComments(string prgm)
{
	int n = prgm.length();
  cout<< "value  : ->"<<n<<endl;
	string res;


	bool s_cmt = false;
	bool m_cmt = false;




	for (int i=0; i<n; i++)
	{

		if (s_cmt == true && prgm[i] == '\n')
			s_cmt = false;


		else if (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
			m_cmt = false, i++;

		else if (s_cmt || m_cmt)
			continue;


		else if (prgm[i] == '/' && prgm[i+1] == '/')
			s_cmt = true, i++;
		else if (prgm[i] == '/' && prgm[i+1] == '*')
			m_cmt = true, i++;


		else res += prgm[i];
	}
	return res;
}


int main()
{


    	ofstream fout;

	string line;


	fout.open("sample.txt");


	while (fout) {


		getline(cin, line);


		if (line == "-1")
			break;


		fout << line << endl;
	}


	fout.close();


	ifstream fin;

	fin.open("input.txt");


	while (fin) {


		getline(fin, line);
     aab=aab+line;

	}


	cout << "Given Program \n";

	cout << " Modified Program ";
	cout << removeComments(aab);
	fin.close();
	return 0;
}
