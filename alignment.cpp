#include <cstdio>
#include <cstdint>
#include <cstddef>

struct PoorlyAlignedDate{
  char c;
  uint16_t u;
  double d;
  int16_t i;
};

struct WellAlignedData{
 double d;
 uint16_t u;
 int16_t i;
 char c;
};

#pragma pack(push, 1)
struct PackedData{
 double d;
 uint16_t u;
 int16_t i;
 char c;
};

#pragama pack(pop)

int main() {
 printf("PoorlyAlignedData c:%lu u:%lu d:%lu i:%lu
  


