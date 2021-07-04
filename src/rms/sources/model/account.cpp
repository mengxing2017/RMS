#include "model/account.h"

QString Account::getDlm() const { return dlm; }

void Account::setDlm(const QString &value) { dlm = value; }

QString Account::getMm() const { return mm; }

void Account::setMm(const QString &value) { mm = value; }

QString Account::getXm() const { return xm; }

void Account::setXm(const QString &value) { xm = value; }

QString Account::getJs() const { return js; }

void Account::setJs(const QString &value) { js = value; }

QString Account::getLxfs() const { return lxfs; }

void Account::setLxfs(const QString &value) { lxfs = value; }

Account::Account() {}
