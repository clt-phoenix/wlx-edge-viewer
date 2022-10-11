#pragma once

#include <string>

extern "C" int hoedown_main(int argc, char** argv);
extern "C" int smartypants_main(int argc, char** argv);
extern "C" int smartypants_main_null(int argc, char** argv);

extern "C" const char* INPUT_STRING;
extern "C" const char* SP_INPUT_STRING;
extern "C" char* OUTPUT_STRING;
extern "C" char* SP_OUTPUT_STRING;

class MdProcessor
{
public:
	MdProcessor(const std::wstring& path) : mPath(path) {}
	std::wstring Markdown() const;

private:
	const std::wstring mPath;
};