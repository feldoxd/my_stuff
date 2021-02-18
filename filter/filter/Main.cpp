#include <iostream>
#include <headers.h>
#include <cstdio>

namespace System{
	void move() {
#ifdef _DEBUG
#endif
		if (exe || allYes) {
		system("move""A:\Downloads\*.exe*" "A:\Cache\TRASH\dokumenti,nastroje");
		}
		if (iso || allYes) {
		system("move" "A:\Downloads\*.iso*" "A:\Cache\TRASH\dokumenti,nastroje");
		}
		if (zip || allYes) {
		system("move" "A:\Downloads\*.zip*" "A:\Cache\TRASH\dokumenti,nastroje");
		}
		if (doc || allYes) {
		system("move" "A:\Downloads\*.doc*" "A:\Cache\TRASH\skola");
		system("move" "A:\Downloads\*.docx*" "A:\Cache\TRASH\skola");
		system("move" "A:\Downloads\*.pdf*" "A:\Cache\TRASH\skola");
		system("move" "A:\Downloads\*.txt*" "A:\Cache\TRASH\dokumenti,nastroje");
		}
		if (mp4 || allYes) {
		system("move" "A:\Downloads\*.mp4*" "A:\Cache\TRASH\filmy");
		system("move" "A:\Downloads\*.avi*" "A:\Cache\TRASH\filmy");
		}
		if (mp3 || allYes) {
		system("move" "A:\Downloads\*.mp3*" "A:\Cache\TRASH\filmy");
		}
		if (html) {
		system("del" "A:\Downloads\*.html*");
		}
	}
}
namespace rename {
	void move(){
		std::string downloady = "f2";
		std::string cil = "f1";
	}
}
int main() {
	//System::move();
}
