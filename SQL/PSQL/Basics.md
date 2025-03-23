# psql Command Reference

This note provides a comprehensive overview of psql commands, ranging from basic to advanced usage.

## Basic Connection and Information

* **`psql -U username -d database_name -h hostname -p port`**:
    * **Use Case**: Connect to a PostgreSQL database.
    * `-U`: Specifies the username.
    * `-d`: Specifies the database name.
    * `-h`: Specifies the hostname of the server.
    * `-p`: Specifies the port number.
* **`\l` or `\list`**:
    * **Use Case**: List all databases on the server.
* **`\c database_name`**:
    * **Use Case**: Connect to a different database.
* **`\c`**:
    * **Use Case**: Display current connection information.
* **`\dt`**:
    * **Use Case**: List all tables in the current database schema.
* **`\d table_name`**:
    * **Use Case**: Describe the structure of a table (columns, data types, constraints).
* **`\du` or `\listusers`**:
    * **Use Case**: List all database users and their roles.
* **`\q` or `\quit`**:
    * **Use Case**: Exit psql.
* **`\h`**:
    * **Use Case**: Display help for psql commands.
* **`\?`**:
    * **Use Case**: Display help for SQL syntax.

## Data Manipulation and Queries

* **`SELECT ... FROM ... WHERE ... GROUP BY ... HAVING ... ORDER BY ... LIMIT ... OFFSET ...`**:
    * **Use Case**: Retrieve data from tables based on specified criteria.
    * Basic SQL queries.
* **`INSERT INTO table_name (column1, column2, ...) VALUES (value1, value2, ...)`**:
    * **Use Case**: Insert new rows into a table.
* **`UPDATE table_name SET column1 = value1, column2 = value2, ... WHERE condition`**:
    * **Use Case**: Modify existing rows in a table.
* **`DELETE FROM table_name WHERE condition`**:
    * **Use Case**: Remove rows from a table.
* **`TRUNCATE TABLE table_name`**:
    * **Use Case**: Remove all rows from a table quickly.
* **`COPY table_name FROM 'file_path' WITH (FORMAT CSV, HEADER)`**:
    * **Use Case**: Import data from a file into a table.
* **`COPY table_name TO 'file_path' WITH (FORMAT CSV, HEADER)`**:
    * **Use Case**: Export data from a table to a file.
* **`\copy table_name FROM 'file_path' WITH (FORMAT CSV, HEADER)`**:
    * **Use Case**: Import data from a file into a table from client side.
* **`\copy table_name TO 'file_path' WITH (FORMAT CSV, HEADER)`**:
    * **Use Case**: Export data from a table to a file from client side.

## Schema Management

* **`CREATE TABLE table_name (column1 data_type, column2 data_type, ...)`**:
    * **Use Case**: Create a new table.
* **`ALTER TABLE table_name ADD COLUMN column_name data_type`**:
    * **Use Case**: Add a new column to an existing table.
* **`ALTER TABLE table_name DROP COLUMN column_name`**:
    * **Use Case**: Remove a column from an existing table.
* **`ALTER TABLE table_name ALTER COLUMN column_name TYPE new_data_type`**:
    * **Use Case**: Change the data type of a column.
* **`DROP TABLE table_name`**:
    * **Use Case**: Delete a table.
* **`CREATE INDEX index_name ON table_name (column_name)`**:
    * **Use Case**: Create an index on a column to improve query performance.
* **`DROP INDEX index_name`**:
    * **Use Case**: Delete an index.
* **`CREATE VIEW view_name AS SELECT ...`**:
    * **Use Case**: Create a virtual table (view) based on a query.
* **`DROP VIEW view_name`**:
    * **Use Case**: Delete a view.
* **`CREATE DATABASE database_name`**:
    * **Use Case**: Create a new database.
* **`DROP DATABASE database_name`**:
    * **Use Case**: Delete a database.
* **`CREATE USER username WITH PASSWORD 'password'`**:
    * **Use Case**: Create a new database user.
* **`ALTER USER username WITH PASSWORD 'new_password'`**:
    * **Use Case**: Change a database user's password.
* **`DROP USER username`**:
    * **Use Case**: Delete a database user.
* **`GRANT privileges ON database_name TO username`**:
    * **Use Case**: Grant privileges to a user on a database.
* **`REVOKE privileges ON database_name FROM username`**:
    * **Use Case**: Revoke privileges from a user on a database.
* **`CREATE SCHEMA schema_name`**:
    * **Use Case**: Create a new schema.
* **`SET search_path TO schema_name`**:
    * **Use Case**: Set the schema search path.

## Advanced Features

* **`\set variable_name value`**:
    * **Use Case**: Set psql variables.
* **`\echo message`**:
    * **Use Case**: Print a message to the console.
* **`\timing`**:
    * **Use Case**: Toggle query execution timing.
* **`\pset pager`**:
    * **Use Case**: Control the use of the pager for long output.
* **`\pset tuples_only`**:
    * **Use Case**: Toggle tuples-only output (no headers or footers).
* **`\x`**:
    * **Use Case**: Toggle expanded output (vertical display).
* **`\g filename`**:
    * **Use Case**: Execute the current query and save the output to a file.
* **`\i filename`**:
    * **Use Case**: Execute commands from a file.
* **`\watch query`**:
    * **Use Case**: Execute a query repeatedly and display the results.
* **`\ef function_name`**:
    * **Use Case**: edit a function in your default editor.
* **`\df`**:
    * **Use Case**: list all functions.
* **`EXPLAIN query`**:
    * **Use Case**: Display the query execution plan.
* **`EXPLAIN ANALYZE query`**:
    * **Use Case**: Display the query execution plan and actual execution statistics.
* **`LISTEN channel_name`**:
    * **Use Case**: Listen for notifications on a channel.
* **`NOTIFY channel_name, 'payload'`**:
    * **Use Case**: Send a notification on a channel.
* **`\set AUTOCOMMIT off`**:
    * **Use Case**: turn off autocommit, for transaction control.
* **`BEGIN; ... COMMIT;` or `BEGIN; ... ROLLBACK;`**:
    * **Use Case**: Manually control transactions.
* **`\password username`**:
    * **Use Case**: change the password of a user.
