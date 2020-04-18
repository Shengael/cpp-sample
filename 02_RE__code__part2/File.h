#pragma once

enum Mode
{
	None,
	Read,
	Write,
	Append
};

class File
{
public:
	File();
	~File();

public:
	void SetFileName(string filename);
	string GetFileName();

public:
	bool Open(Mode mode);
	void Write(string text);
	void Read(string& text);
	void Close();

public:
	FILE* _file;

private:
	Mode _mode;
	string _fileName;
};

