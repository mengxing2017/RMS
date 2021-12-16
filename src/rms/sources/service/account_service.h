#ifndef ACCOUNTSERVICE_H
#define ACCOUNTSERVICE_H

#include <QString>

class AccountService {
 private:
  bool VerifyPass();
  bool returnAdmin();
  bool pass;
  bool admin;

 public:
  AccountService();
  bool LogonAuthentication(const QString username, const QString password);
};

#endif  // ACCOUNTSERVICE_H
