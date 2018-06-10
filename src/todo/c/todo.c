#include <stdio.h>
#include <getopt.h>

// options
static struct option longopts[] = {
    { "file", required_argument, NULL, 'f' },       // location (abs path) of todo.json file
    { "init", no_argument, NULL, 'i' },             // initialize a new todo.json file
    { "additem", required_argument, NULL, 'a' },    // add a todo item 
    { "updateitem", required_argument, NULL, 'u' }, // update a todo item with new text 
    { "list", no_argument, NULL, 'l' },             // list todo items from a file (e.g. todo -f=todo.json -l)
    { "complete", no_argument, NULL, 'c' },         // complete a todo item
    { "itemno", required_argument, NULL, 'n' },     // specify an existing itemno for update or completion
    { "help", no_argument, NULL, 'h' }        // specify an existing itemno for update or completion
};

static void usage()
{
    printf("usage: todo [--file=<path>] [-i | --init] [-a=<text> | --additem=<text>]\n \
            [-u=<text> | --updateitem=<text>] [-l | list] [-c | --complete]\n \
            [-n=<number> | --itemno=<number>] [-h | --help]\n");   
}

int main(int argc, char const *argv[])
{
    int ch;

    while ((ch = getopt_long(argc, (char *const *)argv, "fiaulcn", longopts, NULL)) != -1)
    {
        switch (ch) 
        {
            case 'f':
                putchar(ch);
                break;
            case 'i':
                putchar(ch);
                break;
            case 'a':
                putchar(ch);
                break;
            case 'u':
                putchar(ch);
                break;
            case 'l':
                putchar(ch);
                break;
            case 'c':
                putchar(ch);
                break;
            case 'n':
                putchar(ch);
                break;
            default:
                usage();
        }
    }

    /* code */
    return 0;
}