# (1)コンパイラ
CC  = gcc
# (2)コンパイルオプション
CFLAGS    = -D__RENESAS__ -D__RX -DLITTLE_ENDIAN -DRT

# (3)実行ファイル名
TARGET  = ..\Lib\libAPC.a
# (4)コンパイル対象のソースコード
SRCS    = comm_com.c comm_multi_master.c comm_multi_slave.c comm_vnc1.c comm_vpm6.c \
		comm_vtex.c debugprint.c motor_control.c rs.c string_local.c vtex2.c

# (5)オブジェクトファイル名
OBJS    = $(SRCS:.c=.o)
 
# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -I..\ApcControler\Src -I..\ApcControler\Inc -I..\log -I..\Config\Inc \
		-I..\NORTi\INC -I..\SUB -I..\telnet\Inc -I..\cmt -I..\ctrl -I..\dio \
		-I..\Drv -I..\ADC -I..\learn -I..\motor -I..\APC -I..\Flash\Src \
		-I..\Encoder
 
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
	-rm $(OBJS) $(TARGET) 
#	-rm -f $(OBJS) $(TARGET) *.d
