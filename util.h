#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>
#include <set>


template <typename T>
std::set<T> setIntersection(std::set<T>& s1, std::set<T>& s2)
{
  typename std::set<T>::iterator itFirst = s1.begin(); 
  std::set<T> toRet;


  while (itFirst != s1.end()) 
  {
    if (s2.find(*itFirst) != s2.end())
    {
      toRet.insert(*itFirst);
    }
    itFirst++;
  }
  return toRet; 
}


template <typename T>
std::set<T> setUnion(std::set<T>& s1, std::set<T>& s2)
{
  std::set<T> toRet;

  typename std::set<T>::iterator itFirst = s1.begin(); 

  while (itFirst != s1.end()) 
  {
    toRet.insert(*itFirst);
    ++itFirst;
  }

  typename std::set<T>::iterator itSec = s2.begin(); 

  while (itSec != s2.end()) 
  {
    toRet.insert(*itSec); 
    ++itSec;
  }

  return toRet;
}


std::string convToLower(std::string src);

std::set<std::string> parseStringToWords(std::string line);

// Used from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
// Removes any leading whitespace
std::string &ltrim(std::string &s) ;

// Removes any trailing whitespace
std::string &rtrim(std::string &s) ;

// Removes leading and trailing whitespace
std::string &trim(std::string &s) ;
#endif
