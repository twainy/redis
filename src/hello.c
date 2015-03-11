#include "redis.h"
void helloCommand(redisClient *c) {
    addReplyStatus(c, "hello");
}
