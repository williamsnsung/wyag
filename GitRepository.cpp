#include "GitRepository.h"
#include <filesystem>
#include <iostream>

std::filesystem::path cwd = std::filesystem::current_path() / "filename.txt";
std::ofstream file(cwd.string());
file.close();
// GitRepository::GitRepository(std::string path, bool force) {
//     this -> worktree = path;
//     this -> gitdir = getcwd();
// }