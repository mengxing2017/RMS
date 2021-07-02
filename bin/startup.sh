#!/bin/bash

APP_NAME=rms

# 获取脚本当前目录
SOURCE="${BASH_SOURCE[0]}"
while [ -h "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
  DIR="$( cd -P "$( dirname "$SOURCE" )" >/dev/null && pwd )"
  SOURCE="$(readlink "$SOURCE")"
  [[ $SOURCE != /* ]] && SOURCE="$DIR/$SOURCE" # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
done
SCRIPTS_DIR="$( cd -P "$( dirname "$SOURCE" )" >/dev/null && pwd )"
#SCRIPTS_DIR=$(cd "$(dirname $0)";pwd)

# 获取程序安装目录
BASE_DIR=${SCRIPTS_DIR}/..
# 设置bin目录
BIN_DIR=${BASE_DIR}/bin
# 设置lib目录
LIB_DIR=${BASE_DIR}/lib

# 配置sqlite3驱动环境变量
export LD_LIBRARY_PATH=${LIB_DIR}/sqlite3:${LIB_DIR}/log4qt:$LD_LIBRARY_PATH

# 启动程序
${BIN_DIR}/${APP_NAME}

