**Some functions**

```c
void RSFatalError(char *message);

void* RSMallocOrDie(size_t size);
void* RSCallocOrDie(size_t size);

void RSFReadOrDie(void *dest, size_t size, FILE *file);
void RSFWriteOrDie(void *data, size_t size, FILE *file);
FILE* RSFOpenOrDie(char *path, char *mode);
void RSFCloseOrDie(FILE *file);

int8_t RSReadInt8(uint8_t *data, uint32_t *offset);
uint8_t RSReadUInt8(uint8_t *data, uint32_t *offset);
int16_t RSReadInt16(uint8_t *data, uint32_t *offset);
uint16_t RSReadUInt16(uint8_t *data, uint32_t *offset);
int32_t RSReadInt32(uint8_t *data, uint32_t *offset);
uint32_t RSReadUInt32(uint8_t *data, uint32_t *offset);
int64_t RSReadInt64(uint8_t *data, uint32_t *offset);
uint64_t RSReadUInt64(uint8_t *data, uint32_t *offset);
```

### [License: MIT](LICENSE.txt)
