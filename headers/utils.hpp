#ifndef _UTILS_HPP_
#define _UTILS_HPP_

#include "webserv.hpp"

std::string status_line(int code);
std::string content_type(std::string exten);
bool doesFileExist (const std::string&);
std::vector<std::string> parse_line(std::string str, std::string &delim);
std::pair<std::string, std::string> parse_uri(std::string uri);

// class StatusCode
// {
//     std::map<int, std::string> _code;
// public:
//     StatusCode();
//     std::string get_message(int code) const;
// };

class ContentType
{
    std::map<std::string, std::string> _code;
public:
    ContentType();
    std::string get_mime(std::string extension) const;
};

#endif