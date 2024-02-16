#include <exception>
#include <string>

#pragma once

class GeometryException : public std::exception
{
public:
    GeometryException(const std::string& error)
        : m_error{error}
    {}

    const char* what() const noexcept { return m_error.c_str(); };

private:
    std::string m_error;
};
