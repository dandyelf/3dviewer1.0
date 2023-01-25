#!/bin/bash

docker rmi dview
docker build . -t dview 
docker run --rm dview
