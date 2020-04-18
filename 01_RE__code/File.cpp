#include "pch.h"
#include "File.h"

File::File()
{
	cout << "ctor" << endl;
	_mode = Mode::None;
	_fileName = "";
	_file = nullptr;
}

File::~File()
{
	cout << "dtor" << endl;	
	if (_file != nullptr)
	{
		Close();
	}
}

void File::SetFileName(string filename)
{
	_fileName = filename;
}

string File::GetFileName()
{
	return _fileName;
}


bool File::Open(Mode mode)
{
	string smode;

	switch (mode)
	{
	case Mode::Read:
		smode = "r";
		break;
	case Mode::Write:
		smode = "w";
		break;
	case Mode::Append:
		smode = "a";
		break;
	}

	errno_t err = fopen_s(&_file, 
		_fileName.c_str(), 
		smode.c_str());
	if (err == 0)
	{
		return true;
	}

	return false;
}

void File::Write(string text)
{
	fputs(text.c_str(), _file);
}

void File::Read(string& text)
{

}

void File::Close()
{
	cout << "Close" << endl;
	if (_file != nullptr)
	{
		fclose(_file);
		_file = nullptr;
	}
	else
	{
		cout << "ASSERT: error close" << endl;
	}
}

