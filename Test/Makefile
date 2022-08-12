# (1)コンパイラ
CC  = gcc
# (2)コンパイルオプション
CFLAGS    = -w -g

# (3)実行ファイル名
TARGET  = LedDriverTest
# (4)コンパイル対象のソースコード
SRCS    = AllTest.c LedDriverTest.c LedDriverTestRunner.c
UNITY_SRCS = src/unity.c extras/fixture/src/unity_fixture.c extras/memory/src/unity_memory.c
PROD_SRCS = ../LedDriver/LedDriver.c

# (5)オブジェクトファイル名
OBJS    = $(SRCS:.c=.o)
UNITY_OBJS = unity.o unity_fixture.o unity_memory.o
PROD_OBJS = LedDriver.o
UNITY_LIB = libUnity.a
PROD_LIB = libLedDriver.a
MOCKS_OBJS = RuntimeErrorStub.o

# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -Isrc -Iextras/fixture/src -Iextras/memory/src -I../LedDriver
 
# (7)ライブラリファイルのあるディレクトリパス
LIBDIR  = -L. -L../LedDriver
 
# (8)追加するライブラリファイル
LIBS    = -lLedDriver -lUnity -lmocks

# (9)ターゲットファイル生成
$(TARGET): $(OBJS) $(PROD_LIB) $(UNITY_LIB)
	make -C ../LedDriver
	make -C mocks
	$(CC) -o $@ $(OBJS) $(LIBDIR) $(LIBS)
#	$(TARGET)

$(UNITY_LIB):	$(UNITY_OBJS)
	$(AR) r $@ $^

$(PROD_LIB):	$(PROD_OBJS)
	make -C ../LedDriver

#$(MOCKS_LIB):	$(MOCKS_OBJS)
#	make -C mocks

# (10)オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)
$(PROD_OBJS): $(PROD_SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(PROD_SRCS)
$(UNITY_OBJS): $(UNITY_SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(UNITY_SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	make clean -C ../LedDriver  
	make clean -C mocks  
	rm -f $(OBJS) $(UNITY_OBJS) $(TARGET) 
