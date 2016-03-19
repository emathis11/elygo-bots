#include <stdio.h> /* for NULL */
#include "liberty.h"

#include "patterns.h"

static const unsigned int montegnu_classic_values[] = {};
static const unsigned int mogo_classic_values[] = {};
static const unsigned int uniform_values[] = {};


struct mc_pattern_database mc_pattern_databases[] = {
  {"montegnu_classic", montegnu_classic_values},
  {"mogo_classic", mogo_classic_values},
  {"uniform", uniform_values},
  {NULL, NULL}};
  