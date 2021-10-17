# (1)コンパイラ
CC  = gcc
# (2)コンパイルオプション
CFLAGS    = 

# (3)実行ファイル名
TARGET  = LedDriverTest.exe
# (4)コンパイル対象のソースコード
SRCS    = AllTest.c LedDriverTest.c LedDriverTestRunner.c

# (5)オブジェクトファイル名
OBJS    = $(SRCS:.c=.o)
 
# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -I..\Unity-master\src -I..\Unity-master\extras\fixture\src -I..\Unity-master\extras\memory\src
 
# (7)ライブラリファイルのあるディレクトリパス
LIBDIR  = 
 
# (8)追加するライブラリファイル
LIBS    = 

# (9)ターゲットファイル生成
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)
	$(TARGET)
#	$(AR) r $@ $^
	
# (10)オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	-rm $(OBJS) $(TARGET) 
#	-rm -f $(OBJS) $(TARGET) *.d
