// automatically generated, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class FileSELinuxGetLabelRequest extends Table {
  public static FileSELinuxGetLabelRequest getRootAsFileSELinuxGetLabelRequest(ByteBuffer _bb) { return getRootAsFileSELinuxGetLabelRequest(_bb, new FileSELinuxGetLabelRequest()); }
  public static FileSELinuxGetLabelRequest getRootAsFileSELinuxGetLabelRequest(ByteBuffer _bb, FileSELinuxGetLabelRequest obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public FileSELinuxGetLabelRequest __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public int id() { int o = __offset(4); return o != 0 ? bb.getInt(o + bb_pos) : 0; }

  public static int createFileSELinuxGetLabelRequest(FlatBufferBuilder builder,
      int id) {
    builder.startObject(1);
    FileSELinuxGetLabelRequest.addId(builder, id);
    return FileSELinuxGetLabelRequest.endFileSELinuxGetLabelRequest(builder);
  }

  public static void startFileSELinuxGetLabelRequest(FlatBufferBuilder builder) { builder.startObject(1); }
  public static void addId(FlatBufferBuilder builder, int id) { builder.addInt(0, id, 0); }
  public static int endFileSELinuxGetLabelRequest(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
};

