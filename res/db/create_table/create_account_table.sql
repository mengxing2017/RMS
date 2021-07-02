CREATE TABLE account (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    loginname VARCHAR(36) NOT NULL,
    mm VARCHAR(18) NOT NULL,
    xm VARCHAR(36) NOT NULL,
    roles VARCHAR(2) NOT NULL,
    lxfs VARCHAR(36),
    created_at TIMESTAMP,
    updated_at TIMESTAMP
);