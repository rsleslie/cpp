/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:34:34 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 13:50:18 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main() {
	Data	data(42);

	uintptr_t serializedPtr = Serializer::serialize(&data);

	Data* deserializedPtr = Serializer::deserialize(serializedPtr);

	if (deserializedPtr == &data) {
		std::cout << "Serialization and deserialization successful." << std::endl;
		std::cout << "Original data value: " << data.getValue() << std::endl;
		std::cout << "Deserialized data value: " << deserializedPtr->getValue() << std::endl;
	} else {
		std::cout << "Serialization and deserialization failed." << std::endl;
	}
	return 0;
}
