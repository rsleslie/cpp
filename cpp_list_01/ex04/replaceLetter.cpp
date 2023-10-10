/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceLetter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:04:50 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/04 15:14:59 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library.hpp"

std::string fileName(char **argv){
	std::string file(argv[1]);
	std::string newFileName;
	int size;
	size = file.find(".");
	if (size == -1){
		newFileName = file + ".replace";
	}
	else	
		newFileName = file.substr(0, size) + ".replace";

	return(newFileName);
}

int replaceLetter(char **argv)
{
	std::string 	line;
	
	std::ofstream 	newFile(fileName(argv).c_str());
	std::ifstream	file(argv[1]);
	std::string 	searchStr = argv[2];
	std::string 	replaceStr = argv[3];
	size_t 			found;
	
	if (!newFile.is_open() || !file.is_open()){
		std::cout << "Failed to open the file." << std::endl;
		return 1;
	}
	size_t start;
	while (getline(file, line)) 
	{
		start = 0;
		found = line.find(searchStr);
		std::string newLine;
		while (found != std::string::npos)
		{
			newLine += line.substr(start, found - start);
			newLine += replaceStr;
			start = found + searchStr.length();
			found = line.find(searchStr, start);
		}
		newLine += line.substr(start);
		newFile << newLine << std::endl;
	}
	newFile.close();
	file.close();
	return (0);
}