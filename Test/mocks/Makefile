# (1)コンパイラ
CC  = gcc
# (2)コンパイルオプション
CFLAGS    = 

# (3)実行ファイル名
TARGET  = ..\libmocks.a
# (4)コンパイル対象のソースコード
SRCS    = RuntimeErrorStub.c

# (5)オブジェクトファイル名
OBJS    = $(SRCS:.c=.o)

# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -I..\..\LedDriver
 
# (7)ライブラリファイルのあるディレクトリパス
LIBDIR  = 
 
# (8)追加するライブラリファイル
LIBS    = 

# (9)ターゲットファイル生成
$(TARGET): $(OBJS) 
	$(AR) r $@ $^

# (10)オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(OBJS) $(TARGET)
# (12).oファイル、実行ファイル、.dファイルを削除
clean:
	del $(OBJS) $(UNITY_OBJS) $(LIBS) $(TARGET) 
