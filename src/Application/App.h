#pragma once

class SAction;

namespace App
{
	bool	isInitialised();
	long	runTimer();

	bool	init();
	void	saveConfigFile();
	void	exit(bool save_config);

	// Path related stuff
	enum class Dir { User, Data, Executable, Resources, Temp };
	string path(string filename, Dir dir);
}

// TODO: Remove when split done
#include "SLADEWxApp.h"
