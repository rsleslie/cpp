/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceLetter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:04:50 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/27 17:16:32 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./library.hpp"

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

int replaceLetter(char **argv){
		
	int position;
	std::string line;
    std::ofstream newFile(fileName(argv).c_str());
	std::ifstream replacedFile(argv[1]);
	if (!newFile.is_open() || !replacedFile.is_open()){
		std::cout << "Failed to open the file." << std::endl;
		return 1;
	}
	while(std::getline(replacedFile, line)){
		position = line.find(argv[2]);
		while (position != -1){
			line[position] = argv[3][0];
			position = line.find(argv[2]);
		}
		newFile << line << std::endl;
	}
	newFile.close();
	replacedFile.close();
	return (0);
}