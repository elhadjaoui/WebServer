/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadj <mel-hadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:14:09 by mel-hadj          #+#    #+#             */
/*   Updated: 2022/05/30 23:18:40 by mel-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
#define PARSING_H

#include "webserv.hpp"


class Location
{
    public :
        static int location_count;
        std::map<std::string, std::string> attributes;
};

class Server
{
    public :
        static int server_count;    
        std::vector<Location> locations;
        std::map<std::string, std::string> attributes;
};

class  Http
{
    public :
        static int http_count;    
        std::vector<Server> servers;
        std::map<std::string, std::string> attributes;
};


Http  parsing(char *str);
void check_file(std::ifstream &fin);
void syntax_error();
std::map<std::string, std::string> extract_key_value(std::string line);

#endif