# (1)コンパイラ
CC  = gcc
# (2)コンパイルオプション
CFLAGS    = -g
# (3)実行ファイル名
TARGET  = libLedDriver.a
# (4)コンパイル対象のソースコード
SRCS    = LedDriver.c

# (5)オブジェクトファイル名
OBJS    = $(SRCS:.c=.o)
 
# (6)インクルードファイルのあるディレクトリパス
INCDIR  = 
 
# (7)ライブラリファイルのあるディレクトリパス
LIBDIR  = 
 
# (8)追加するライブラリファイル
LIBS    = 

# (9)ターゲットファイル生成
$(TARGET): $(OBJS)
#	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)
	$(AR) r $@ $^
	
# (10)オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	rm -f $(OBJS) $(TARGET) 
