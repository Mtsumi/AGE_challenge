# AGE_challenge
PostgreSQL Driver

Development Environment:
- Python 3.8 or higher
- psycopg2 library

Installation:
1. Install Python (version 3.8 or higher) from https://www.python.org/.

2. Install the requirement using pip by `pip install -r requirements.txt`

Usage:
1. Open the `postgresql_driver.py` file and customize the database connection details (host, database, user, password) in the `get_data_as_json()` function.
2. Create a `.env` file in the project directory and add the necessary environment variables with the correct DB credentials. Please refer to the email sent separately for the specific DB credentials.
2. Run the `postgresql_driver.py` file using the Python interpreter or using bash `./postgresql_driver.py`
3. The driver will connect to the PostgreSQL database in the ubuntu server, retrieve data from the `user_table` table, and return the result in JSON format.

Note: Please check the email for the correct DB credentials to connect to the PostgreSQL database.

