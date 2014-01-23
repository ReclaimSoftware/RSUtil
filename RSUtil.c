#include <RSUtil.h>
#include <stdlib.h>


void RSFatalError(char *message) {
    fprintf(stderr, "Fatal error: %s\n", message);
    fflush(stderr);
    exit(1);
}


void* RSMallocOrDie(size_t size) {
    void *data = malloc(size);
    if(!data) {
        RSFatalError("malloc");
    }
    return data;
}


void* RSCallocOrDie(size_t size) {
    void *data = calloc(size, 1);
    if(!data) {
        RSFatalError("calloc");
    }
    return data;
}


void RSFReadOrDie(void *dest, size_t size, FILE *file) {
    if (fread(dest, size, 1, file) != 1) {
        RSFatalError("fread");
    }
}


void RSFWriteOrDie(void *data, size_t size, FILE *file) {
    if (fwrite(data, size, 1, file) != 1) {
        RSFatalError("fwrite");
    }
}


FILE* RSFOpenOrDie(char *path, char *mode) {
    FILE *file = fopen(path, mode);
    if (!file) {
        RSFatalError("fopen");
    }
    return file;
}


void RSFCloseOrDie(FILE *file) {
    if (fclose(file)) {
        RSFatalError("fclose");
    }
}


int8_t RSReadInt8(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 1;
    return (int8_t)data[i];
}


uint8_t RSReadUInt8(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 1;
    return (uint8_t)data[i];
}


int16_t RSReadInt16(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 2;
    return ((int16_t *)&(data[i]))[0];
}


uint16_t RSReadUInt16(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 2;
    return ((uint16_t *)&(data[i]))[0];
}


int32_t RSReadInt32(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 4;
    return ((int32_t *)&(data[i]))[0];
}


uint32_t RSReadUInt32(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 4;
    return ((uint32_t *)&(data[i]))[0];
}


int64_t RSReadInt64(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 8;
    return ((int64_t *)&(data[i]))[0];
}


uint64_t RSReadUInt64(uint8_t *data, uint32_t *offset) {
    uint32_t i = *offset;
    *offset = i + 8;
    return ((uint64_t *)&(data[i]))[0];
}
