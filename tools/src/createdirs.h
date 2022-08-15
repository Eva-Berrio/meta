#ifndef __ZOPEN_CREATEDIR__
  #define __ZOPEN_CREATEDIR__ 1
  enum {
    ZOPEN_CREATEDIR_OK,
    ZOPEN_CREATEDIR_DIR_TOO_LONG,
    ZOPEN_CREATEDIR_CREATE_FAILED,
    ZOPEN_CREATEDIR_DIR_EXISTS,
    ZOPEN_CREATEDIR_ROOT_NOT_EXIST,
  };

  int createdirs(const char* root);
#endif
