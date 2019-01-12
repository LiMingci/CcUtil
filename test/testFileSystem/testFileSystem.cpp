#include <string>
#include <iostream>
#include <fstream>

#include "CcFileSystem/file_system.h"
#include "CcFileSystem/system.h"
#include "CcFileSystem/timer.h"

int main(int argc, char* argv[])
{
	util::system::print_build_timestamp(argv[0]);     //打印可执行程序的信息

	std::string path("c:/limingci/a.obj");

	bool is_exist = util::fs::exists(path.c_str());      //判断文件是否存在
	
	std::string is_str = is_exist ? std::string("True") : std::string("False");

	std::cout << is_str << std::endl;

	util::WallTimer wall_timer;    //计时
	
	wall_timer.reset();

	util::system::sleep_sec(20);    //休眠20秒

	std::cout << wall_timer.get_elapsed_sec() << std::endl;    //获得执行时间


	return 0;
}