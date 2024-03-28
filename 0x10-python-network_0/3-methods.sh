#!/bin/bash

# Check if URL argument is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <URL>"
    exit 1
fi

# Send OPTIONS request to the server and display allowed methods
curl -s -X OPTIONS -i "$1" | grep -i allow | tr -d '\r' | awk '{print "Allowed HTTP Methods:", $3}'
