// all c string functions cn be used in a c++ program
// you can still work with c character arrays if you need to

#include <iostream> // std namespace 

// include the c++ string library
#include <string>

int main() {
  std::cout << "c++ strings" << std::endl;
  std::string msg = "c++ strings"; // NOTE this is not a char array; is a string object
  std::cout << "the length of the msg string object is "<< msg.length() << std::endl;

  // get a character from a string object
  std::cout << "the sixth character of msg is " << msg[5] << std::endl;

  //chance a char in a string
  msg[5] = 'T';
  std::cout << msg << std::endl;

  //concat string obj
  // 1) use the + operator
  // 2) use the string.append() method
  std::string msg2 = "hello, ";
  std::string msg3 = "world!";
  msg = msg2 + msg3;
  std::cout << "msg is " << msg << std::endl;

  std::string msg4 = "HELLO, ";
  std::string msg5 = "WORLD";
  msg = msg4.append(msg5);
  std::cout << "msg is " << msg << std::endl << std::endl;
  

  // strings must be enclosed in double quoters
  std::string str1 = "Hello, World!";
  std::cout << str1 << std::endl;

  //use escape squences to include special chars in our string objects
  std::string str2 = "\"Hello, World!\"";
  std::cout << "str2 is " << str2 << std::endl;

  std::string str3 = "Hello, \'ol World!";
  std::cout << "str3 is " << str3 << std::endl;

  std::string str4 = "\"Hello, \'ol World!\"";
  std::cout << "str4 is " << str4 << std::endl;

  std::string str5 = "c:\\Windows\\System32\\";
  std::cout << "str5 is " << str5 << std::endl;

  std::string str6 = "\tthis line is indented";
  std::cout << "str6 is " << str6 << std::endl;
  return 0;
}