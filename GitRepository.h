#ifndef STACK_H
#define STACK_H

#include <string>

class GitRepository {
	private:
		std::string worktree;
		std::string gitdir;
		std::string conf;
	public:
		GitRepository(std::string path, bool force);

};

#endif