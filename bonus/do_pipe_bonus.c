#include "../src/pipex.h"

void do_pipe(char *cmd, char **env)
{
    int pipe_fd[2];
    pid_t child_pid;

    if (pipe(pipe_fd) == -1)
        print_error(0, errno, "pipe");
    child_pid = fork();
    if (child_pid == -1)
        print_error(0, errno, "fork");
    if (child_pid == 0)
    {
        close(pipe_fd[0]);
        dup2(pipe_fd[1], 1);
        execute(cmd, env);
    }
    else
    {
        close(pipe_fd[1]);
        dup2(pipe_fd[0], 0);
    }
}

void put_in(char **argv, int *pipe_fd)
{
    char *input;

    close(pipe_fd[0]);
    while (1)
    {
        ft_putstr_fd(">", 0);
        input = get_next_line(0);
        if (ft_strlen(argv[2]) + 1 == ft_strlen(input) && ft_strncmp(input, argv[2], ft_strlen(argv[2])) == 0)
        {
            free(input);
            exit(0);
        }
        ft_putstr_fd(input, pipe_fd[1]);
        free(input);
    }
}

void here_doc(char **argv)
{
    int pipe_fd[2];
    pid_t child_pid;

    if (pipe(pipe_fd) == -1)
        print_error(0, errno, "pipe");
    child_pid = fork();
    if (child_pid == -1)
        print_error(0, errno, "fork");
    if (child_pid == 0)
        put_in(argv, pipe_fd);
    else
    {
        close(pipe_fd[1]);
        dup2(pipe_fd[0], 0);
        wait(NULL);
    }
}
