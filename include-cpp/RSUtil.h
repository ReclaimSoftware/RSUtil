#include <stdio.h>
#include <stdint.h>

extern "C" void RSFatalError(char *message);

extern "C" void* RSMallocOrDie(size_t size);
extern "C" void* RSCallocOrDie(size_t size);

extern "C" void RSFReadOrDie(void *dest, size_t size, FILE *file);
extern "C" void RSFWriteOrDie(void *data, size_t size, FILE *file);
extern "C" FILE* RSFOpenOrDie(char *path, char *mode);
extern "C" void RSFCloseOrDie(FILE *file);
extern "C" void* RSReadFileOrDie(char *path, uint32_t *size);

extern "C" int8_t RSReadInt8(uint8_t *data, uint32_t *offset);
extern "C" uint8_t RSReadUInt8(uint8_t *data, uint32_t *offset);
extern "C" int16_t RSReadInt16(uint8_t *data, uint32_t *offset);
extern "C" uint16_t RSReadUInt16(uint8_t *data, uint32_t *offset);
extern "C" int32_t RSReadInt32(uint8_t *data, uint32_t *offset);
extern "C" uint32_t RSReadUInt32(uint8_t *data, uint32_t *offset);
extern "C" int64_t RSReadInt64(uint8_t *data, uint32_t *offset);
extern "C" uint64_t RSReadUInt64(uint8_t *data, uint32_t *offset);
