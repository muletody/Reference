// NFS.exe — offsets are relative to the module base
struct BytePatch { unsigned long offset; unsigned char bytes[1]; unsigned int size; };
static const BytePatch kPatches[] = {
};
