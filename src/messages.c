#include "messages.h"

// usleep() message padding for game messages
const int battleshipMessages::PADDING = 1000;

// game default messages
const char *battleshipMessages::TARGET_ALREADY_HIT = "You fired there already, silly!";
const char *battleshipMessages::TARGET_MISSED = "Your line-of-sight is off, Captain. Don't let us relieve you of your duties.";

// game message formats
const char *battleshipMessages::TARGET_HIT_FORMAT = "You have hit the %s! Grab your backscratcher of victory!\n";
const char *battleshipMessages::TARGET_SANK_FORMAT = "You have successfully sank a %s! The you will go down in virtual history (That is, until you restart).\n";

