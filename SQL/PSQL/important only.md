## PostgreSQL Quick Cheat Sheet

This guide covers basic PostgreSQL commands for database and table management, data types, and CRUD operations.

---

### Database Operations

* **Create a new database:**
    ```sql
    CREATE DATABASE database_name;
    ```
    *(Replace `database_name` with your desired name)*

* **Connect to a specific database (using `psql`):**
    ```sql
    \c database_name
    ```
    *(You need to be in the `psql` command-line tool for this)*

---

### Table Operations

* **Create a new table:**
    ```sql
    CREATE TABLE table_name (
        column1 datatype constraints,
        column2 datatype constraints,
        ...
    );
    ```
    *Example:*
    ```sql
    CREATE TABLE users (
        id SERIAL PRIMARY KEY,
        username VARCHAR(50) UNIQUE NOT NULL,
        email VARCHAR(100),
        created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
    );
    ```
    *(Replace `table_name`, `column` names, `datatype`s, and `constraints` as needed)*

---

### Common Data Types

| Type         | Description                                      |
| :----------- | :----------------------------------------------- |
| `INT`        | Whole numbers (integers).                        |
| `SERIAL`     | Auto-incrementing integer (often used for IDs). |
| `VARCHAR(n)` | Variable-length string (stores *up to* `n` characters). |
| `CHAR(n)`    | Fixed-length string (*always* `n` characters, pads with spaces). |
| `TEXT`       | For long descriptions and variable-length text.  |
| `BOOLEAN`    | Boolean values: `TRUE` or `FALSE`.              |
| `DATE`       | Stores date only (e.g., `2025-04-30`).           |
| `TIMESTAMP`  | Stores date and time (e.g., `2025-04-30 18:30:00`). |

**`VARCHAR(n)` vs `CHAR(n)`:**
* `VARCHAR(n)`: Flexible length, uses only the space needed up to `n`. Good for names, emails, etc.
* `CHAR(n)`: Fixed length, always uses `n` characters. Might be slightly faster for truly fixed-length data (like country codes) but often uses more space.

---

### Useful `psql` Meta-Commands

*(These are run directly in the `psql` terminal, not as SQL queries)*

| Command        | Description                                             |
| :------------- | :------------------------------------------------------ |
| `\l` or `\list`| List all available databases.                           |
| `\c dbname`    | Connect to a specific database (`\connect`).            |
| `\dt`          | List all tables in the current database's default schema. |
| `\d table_name`| Describe a table's structure (columns, types, etc.).    |

---

### Sorting Results: `ORDER BY`

| Command                            | Description                                                             |
| :--------------------------------- | :---------------------------------------------------------------------- |
| `ORDER BY column_name`             | Sorts by `column_name` in ascending order (A-Z, 1-9) - `ASC` is default. |
| `ORDER BY column_name DESC`        | Sorts by `column_name` in descending order (Z-A, 9-1).                  |
| `ORDER BY col1, col2`              | Sorts by `col1` (ASC), then by `col2` (ASC) for ties.                   |
| `ORDER BY col1 ASC, col2 DESC`     | Sorts by `col1` ascending, then by `col2` descending for ties.          |
| `ORDER BY LENGTH(column_name)`     | Sort by the length of text in `column_name`.                            |
| `ORDER BY column_name NULLS FIRST` | Places `NULL` values at the beginning of the sort.                      |
| `ORDER BY column_name NULLS LAST`  | Places `NULL` values at the end of the sort.                            |

---

### CRUD Operations (Create, Read, Update, Delete)

#### 1. CREATE (`INSERT` Data)

| Command                                                      | Description                                         |
| :----------------------------------------------------------- | :-------------------------------------------------- |
| `INSERT INTO tbl (col1, col2) VALUES (val1, val2);` | Insert a new row with specified values.             |
| `INSERT INTO table_name DEFAULT VALUES;`                     | Insert a row using default values for all columns. |

#### 2. READ (`SELECT` Data)

| Command                                   | Description                                           |
| :---------------------------------------- | :---------------------------------------------------- |
| `SELECT * FROM table_name;`               | Retrieve all rows and all columns.                   |
| `SELECT col1, col2 FROM table_name;`      | Retrieve specific columns from all rows.              |
| `SELECT DISTINCT column_name FROM table;` | Retrieve unique values from a column.                 |
| `SELECT * FROM table WHERE condition;`    | Retrieve rows that match the `condition`.             |
| `SELECT * FROM table ORDER BY col;`       | Retrieve rows sorted by a column (see `ORDER BY`).    |
| `SELECT * FROM table LIMIT n;`            | Retrieve only the first `n` rows.                     |

#### 3. UPDATE (`UPDATE` Data)

| Command                                                 | Description                                                  |
| :------------------------------------------------------ | :----------------------------------------------------------- |
| `UPDATE tbl SET col1 = val1, col2 = val2 WHERE cond;` | Update multiple columns in rows matching the `condition`.    |
| `UPDATE table_name SET column1 = value1 WHERE condition;` | Update a single column in rows matching the `condition`. |

#### 4. DELETE (`DELETE` Data)

| Command                              | Description                                                    |
| :----------------------------------- | :------------------------------------------------------------- |
| `DELETE FROM table WHERE condition;` | Delete specific rows based on the `condition`.                 |
| `DELETE FROM table_name;`            | **Danger!** Deletes *all* rows from the table. Use with care! |

---
