/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSerializerStream
@required
-(void)copySerializationInto:(void*)arg1;
-(unsigned)writeInt:(unsigned)arg1;
-(unsigned)writeAlignedDataSize:(unsigned)arg1;
-(unsigned)writeData:(const void*)arg1 length:(unsigned)arg2;
-(unsigned)writeRoomForInt:(int*)arg1;
-(void)writeDelayedInt:(unsigned)arg1 for:(int)arg2;
@end
