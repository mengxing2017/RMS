# 入门指南

## 启动文档网站

1. 安装依赖包：

```bash
npm install
```

2. 启动

```bash
docsify serve .
```

## 生成 pdf 格式文档

1. 安装依赖包：

```bash
npm install
```

2. 安装 `google chromium` 浏览器。

3. 生成`pdf`文档。

```bash
PUPPETEER_EXECUTABLE_PATH=/usr/local/bin/chromium npm run convert
```