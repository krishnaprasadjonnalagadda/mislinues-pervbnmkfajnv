#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
	FILE *fp;
	string name;

	long int size_of_file;


	fp=fopen("raj.txt","w");

	if(fp == NULL)
	{
	cout << "error happened in opening the src file\n" << endl;
	}
	fseek(fp,0,SEEK_END);
	size_of_file=ftell(fp);
	rewind(fp);

    cout <<"\n the size of the file=%ld\n\n" << size_of_file << endl;

    cout << "enter the name:\n" << endl;
    cin >> name;

        fwrite(name,1,size_of_file,fp);

        cout <<"\n\n successfully written  to file :\n"<< endl;



	fclose(fp);
	return 0;
}
