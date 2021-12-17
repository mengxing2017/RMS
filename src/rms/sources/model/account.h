#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class Account {
 private:
  QString dlm;
  QString mm;
  QString xm;
  QString js;
  QString lxfs;

 public:
  Account();
  QString getDlm() const;
  void setDlm(const QString &value);
  QString getMm() const;
  void setMm(const QString &value);
  QString getXm() const;
  void setXm(const QString &value);
  QString getJs() const;
  void setJs(const QString &value);
  QString getLxfs() const;
  void setLxfs(const QString &value);
};

#endif  // USER_H
