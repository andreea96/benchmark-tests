#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QString>
#include <QCryptographicHash>
#include "error.h"

class Operations
{
public:
   static bool isValidUser(QString& name);
   static bool isValidPassword(QString& pwd);
   static bool isValidEmail(QString& mail);
   static QString encode(QString arg1);
};

#endif // OPERATIONS_H
