# (1)コンパイラ
CC  = gcc
# (2)コンパイルオプション
CFLAGS    = 

# (3)実行ファイル名
TARGET  = LedDriverTest.exe
# (4)コンパイル対象のソースコード
SRCS    = AllTest.c LedDriverTest.c LedDriverTestRunner.c
UNITY_SRCS = src\unity.c extras\fixture\src\unity_fixture.c extras\memory\src\unity_memory.c

# (5)オブジェクトファイル名
OBJS    = $(SRCS:.c=.o)
UNITY_OBJS = unity.o unity_fixture.o unity_memory.o
UNITY_LIB = libUnity.a

# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -Isrc -Iextras\fixture\src -Iextras\memory\src
 
# (7)ライブラリファイルのあるディレクトリパス
LIBDIR  = -L.
 
# (8)追加するライブラリファイル
LIBS    = -lUnity

# (9)ターゲットファイル生成
$(TARGET): $(OBJS) 
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)
	$(TARGET)

$(UNITY_LIB):	$(UNITY_OBJS)
	$(AR) r $@ $^
	
# (10)オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)
$(UNITY_OBJS): $(UNITY_SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(UNITY_SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	-rm $(OBJS) $(UNITY_OBJS) $(LIBS) $(TARGET) 
#	-rm -f $(OBJS) $(TARGET) *.d
