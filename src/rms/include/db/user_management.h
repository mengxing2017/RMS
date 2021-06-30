#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <QSqlQuery>

#include "manage_databese.h"

/**
 * @brief The UserManagement class
 * 用户管理类
 */
class UserManagement {
 public:
  UserManagement();

  /**
   * @brief registerUser 注册用户
   * @param name 用户登录名
   * @param password 密码
   * @param jurisdiction 权限
   * @return
   */
  bool registerUser(QString name, QString password, QString jurisdiction);

  /**
   * @brief login 用户登录
   * @param username  用户登录名
   * @param password 用户密码
   * @return
   */
  bool login(QString username, QString password);
};

#endif  // USER_MANAGEMENT_H
