/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:47:06 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 16:58:43 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &rhs);
    ~Brain();
    const std::string &getIdea(int i) const;
    void setIdea(int i, const std::string &idea);
};