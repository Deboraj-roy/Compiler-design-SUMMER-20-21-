#include <iostream>
#include <fstream>
using namespace std;

 string aab=" ";

string removeComments(string prgm)
{
	int n = prgm.length();
  cout<< "value  : ->"<<n<<endl;
	string res;

	// Flags to indicate that single line and multiple line comments
	// have started or not.
	bool s_cmt = false;
	bool m_cmt = false;




/*

//

*/
	// Traverse the given program
	for (int i=0; i<n; i++)
	{
		// If single line comment flag is on, then check for end of it
		if (s_cmt == true && prgm[i] == '\n')
			s_cmt = false;

		// If multiple line comment is on, then check for end of it
		else if (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
			m_cmt = false, i++;

		// If this character is in a comment, ignore it
		else if (s_cmt || m_cmt)
			continue;

		// Check for beginning of comments and set the approproate flags
		else if (prgm[i] == '/' && prgm[i+1] == '/')
			s_cmt = true, i++;
		else if (prgm[i] == '/' && prgm[i+1] == '*')
			m_cmt = true, i++;

		// If current character is a non-comment character, append it to res
		else res += prgm[i];
	}
	return res;
}

// Driver program to test above functions
int main()
{


    	ofstream fout;

	string line;

	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	// fout.open("sample.txt", ios::app)
	fout.open("sample.txt");

	// Execute a loop If file successfully opened
	while (fout) {

		// Read a Line from standard input
		getline(cin, line);

		// Press -1 to exit
		if (line == "-1")
			break;

		// Write line in file
		fout << line << endl;
	}

	// Close the File
	fout.close();

	// Creation of ifstream class object to read the file
	ifstream fin;

	// by default open mode = ios::in mode
	fin.open("input.txt");

	// Execute a loop until EOF (End of File)
	while (fin) {

		// Read a Line from File
		getline(fin, line);
aab=aab+line;
		// Print line in Console
	//	cout << aab << endl;
	}

	// Close the file
	//fin.close();


	//string prgm =aab;
	cout << "Given Program \n";
	//cout << prgm << endl;
	cout << " Modified Program ";
	cout << removeComments(aab);
	fin.close();
	return 0;
}
