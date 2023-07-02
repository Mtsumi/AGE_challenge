#!/usr/bin/env python3
import json
import os
from decimal import Decimal
import psycopg2
from dotenv import load_dotenv

# Loading environment variables from the .env file
load_dotenv()


class DecimalEncoder(json.JSONEncoder):
    def default(self, o):
        if isinstance(o, Decimal):
            return str(o)
        return super().default(o)

def get_data_as_json():
    # Connect to the PostgreSQL database
    host = os.environ["PG_HOST"]
    database = os.environ["PG_DATABASE"]
    user = os.environ["PG_USER"]
    password = os.environ["PG_PASSWORD"]

    # Connect to the PostgreSQL database
    conn = psycopg2.connect(
        host=host,
        database=database,
        user=user,
        password=password
    )
    if conn is None:
        raise Exception('Unable to connect to the database')
    print('Connected to the database')
    # Create a cursor object
    cursor = conn.cursor()

    # Execute your SQL query
    cursor.execute("SELECT * FROM public.user_table")

    # Fetch all the rows returned by the query
    rows = cursor.fetchall()

    # Transform the fetched rows into the desired JSON format
    data = []
    for row in rows:
        user = {
            "user_id": row[0],
            "name": row[1],
            "age": row[2]
        }
        if row[3] is not None:
            user["phone"] = row[3]
        data.append(user)

    result = {
        "status_code": 200,
        "data": data
    }

    # Serialize the data to JSON using the custom encoder
    json_result = json.dumps(result, cls=DecimalEncoder)

    # Close the cursor and the database connection
    cursor.close()
    conn.close()

    return json_result

result = get_data_as_json()
print(result)

