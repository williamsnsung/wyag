#include <iostream>
#include <cmd.h>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        if(string{argv[i]}.compare("add")) {
            cmd_add(argc, argv, i);
        }
        else if(string{argv[i]}.compare("cat-file")) {
            cmd_cat_file(argc, argv, i);
        }
        else if(string{argv[i]}.compare("checkout")) {
            cmd_checkout(argc, argv, i);
        }
        else if(string{argv[i]}.compare("commit")) {
            cmd_commit(argc, argv, i);
        }
        else if(string{argv[i]}.compare("hash-object")) {
            cmd_hash_object(argc, argv, i);
        }
        else if(string{argv[i]}.compare("init")) {
            cmd_init(argc, argv, i);
        }
        else if(string{argv[i]}.compare("log")) {
            cmd_log(argc, argv, i);
        }
        else if(string{argv[i]}.compare("ls-tree")) {
            cmd_ls_tree(argc, argv, i);
        }
        else if(string{argv[i]}.compare("merge")) {
            cmd_merge(argc, argv, i);
        }
        else if(string{argv[i]}.compare("rebase")) {
            cmd_rebase(argc, argv, i);
        }
        else if(string{argv[i]}.compare("rev_pase")) {
            cmd_rev_parse(argc, argv, i);
        }
        else if(string{argv[i]}.compare("rm")) {
            cmd_rm(argc, argv, i);
        }
        else if(string{argv[i]}.compare("show-ref")) {
            cmd_show_ref(argc, argv, i);
        }
        else if(string{argv[i]}.compare("tag")) {
            cmd_tag(argc, argv, i);
        }
    }
    
    
    return 0;
}
