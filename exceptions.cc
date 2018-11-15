#include <iostream>
#include "exceptions.h"

using namespace std;

const string Exception::toString(void) {
  string
    msg;

  if (source().length() > 0)
    msg = source() + ": ";
  else
    msg = "";
  msg += "generic exception";

  return msg;
}

const string ContainerEmptyException::toString(void) {
  string
    msg;

  if (source().length() > 0)
    msg = source() + ": ";
  else
    msg = "";
  msg += "container empty";

  return msg;
}

const string ContainerFullException::toString(void) {
  string
    msg;

  if (source().length() > 0)
    msg = source() + ": ";
  else
    msg = "";
  msg += "container full";

  return msg;
}

const string KeyNotFoundException::toString(void) {
  string
    msg;

  if (source().length() > 0)
    msg = source() + ": ";
  else
    msg = "";
  msg += "key not found [" + key + ']';

  return msg;
}

const string DuplicateKeyException::toString(void) {
  string
    msg;

  if (source().length() > 0)
    msg = source() + ": ";
  else
    msg = "";
  msg += "key not found [" + key + ']';

  return msg;
}

const string IllegalIndexException::toString(void) {
  string
    msg;

  if (source().length() > 0)
    msg = source() + ": ";
  else
    msg = "";
  msg += "illegal index " + std::to_string(index);

  return msg;
}
