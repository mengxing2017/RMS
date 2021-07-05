#ifndef ACCOUNTSERVICE_H
#define ACCOUNTSERVICE_H

class AccountService {
 private:
  bool VerifyPass();
  bool returnAdmin();
  bool pass;
  bool admin;

 public:
  AccountService();
};

#endif  // ACCOUNTSERVICE_H
