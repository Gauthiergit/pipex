/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:57:14 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 15:57:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/pipex.h"

int main(int argc, char **argv, char **env)
{
    t_file files;
    int i;

    if (ft_strncmp(argv[1], "here_doc", ft_strlen(argv[1])) == 0)
    {
        if (argc < 6)
            print_error(1, errno, "Use: ./pipex here_doc LIM cmd cmd1 file");
        i = 3;
        open_files(&files, argc, argv, 1);
        here_doc(argv);
    }
    else
    {
        if (argc < 5)
            print_error(1, errno, "Use: ./pipex file1 cmd1 ..cmdn file2");
        i = 2;
        open_files(&files, argc, argv, 0);
    }
    while (i < argc - 2)
    {
        do_pipe(argv[i], env);
        i++;
    }
    execute(argv[argc - 2], env);
    return (0);
}
