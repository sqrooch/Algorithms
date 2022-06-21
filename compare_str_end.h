#pragma once

#ifndef _COMPARESTREND_H_

#define _COMPARESTREND_H_
/*
The algorithm returns "true" if the first argument passed(a string) ends with the second argument(also a string).
Otherwise, it returns "false". If the second string is empty (""), then it returns "true".
Examples:
compare_str_end("abc", "bc") // returns true
compare_str_end("abc", "d") // returns false
compare_str_end("abc", "") // returns true
*/
bool compare_str_end(std::string const& str, std::string const& ending);

#endif // !_COMPARESTREND_H_