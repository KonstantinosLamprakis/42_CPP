/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:36:16 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 12:54:23 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::string;

int main(int argc, char **argv)
{
	if (argc < 4)
		return (cout << "Wrong number of Args\n", 1);

	string path = argv[1];
	string line;
	string str_from = argv[2];
	string str_to = argv[3];
	std::ifstream ini_file(path);
	if (!ini_file)
		return (cout << "Can not read file\n", 1);
	std::ofstream out_file(path + ".replace");
	if (!out_file)
		return (cout << "Can not write file\n", 1);
	while (getline(ini_file, line))
	{
		size_t pos = line.find(str_from);
		while (pos != string::npos) {
			line.replace(pos, str_from.size(), str_to);
			pos = line.find(str_from, pos + str_to.size());
		}
		out_file << line << "\n";
	}
	ini_file.close();
	out_file.close();
	return 0;
}
