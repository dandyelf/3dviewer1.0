FROM alpine:latest

RUN apk update; apk add valgrind; apk  add check; apk add gcc; apk add make;\
     apk add --no-cache bash; apk add musl-dev; apk add check

WORKDIR /usr/src/

COPY ./ /usr/src/


USER root

ENTRYPOINT ["bash", "start.sh"]

