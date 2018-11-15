#ifndef _EXCEPTIONS_H
#define _EXCEPTIONS_H

#include <string>

using namespace std;

class AbstractException {
 public:
  AbstractException(string src) { this->src = src; }
  ~AbstractException(void) { }
  const string &source(void) { return src; }
  virtual const string toString(void) =0;
 private:
  string
  src;
};

class Exception : public AbstractException {
 public:
  Exception(string src="") : AbstractException(src) { }
  ~Exception(void) { }

  const string toString(void);
};

class ContainerEmptyException : public Exception {
 public:
  ContainerEmptyException(string src="") : Exception(src) { }
  ~ContainerEmptyException(void) { }

  const string toString(void);
};

class ContainerFullException : public Exception {
 public:
  ContainerFullException(string src="") : Exception(src) { }
  ~ContainerFullException(void) { }

  const string toString(void);
};

class KeyNotFoundException : public Exception {
 public:
  KeyNotFoundException(string k="",string src="") : Exception(src) { key = k; }
  ~KeyNotFoundException(void) { }

  const string toString(void);
 private:
  string key;
};

class DuplicateKeyException : public Exception {
 public:
  DuplicateKeyException(string k="",string src="") : Exception(src) { key = k; }
  ~DuplicateKeyException(void) { }

  const string toString(void);
 private:
  string key;
};

class IllegalIndexException : public Exception {
 public:
  IllegalIndexException(int i=0,string src="") : Exception(src) { index = i; }
  ~IllegalIndexException(void) { }

  const string toString(void);
 private:
  int
    index;
};

#endif
