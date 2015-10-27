// keys.cpp
#include "keys.h"

const char* awsKeyID = ""; // REPLACE with your access key id
const char* awsSecKey = ""; // REPLACE with your secret access key


// Init and connect Edison wifi to local wlan
char* ssid = ""; //  your network SSID (name)
char* pass = "";    // your network password (use for WPA, or use as key for WEP)

// Common AWS constants
const char* AWS_REGION = "us-west-2";  // us-west-2 etc
const char* AWS_ENDPOINT = "amazonaws.com";

/* Constants for connecting to Amazon SNS. */
const char* TARGET_ARN = "";  // replace each '%3A' with '%3A'


/* Contants describing DynamoDB table and values being used. */
const char* HASH_KEY_NAME = "device_id";
const char* HASH_KEY_VALUE = "Diego"; // REPLACE with your team or particpant name e.g Team38
const char* RANGE_KEY_NAME = "time";
const char* RANGE_KEY_VALUE = "1";
const char* TABLE_NAME = ""; //REPLACE with your DDB Table name e.g. hackday-2014-team38
const char* ATTRIBUTE_NAME = "device";
const char* ATTRIBUTE_VALUE = "edison";

/* Constants describing Kinesis stream */
const char* streamName = ""; //REPLACE with your stream name e.g. hackday-2014-team38-TeamStream-1K5DAIU8GCRXY
const char* partitionKey = "partitionKey";
