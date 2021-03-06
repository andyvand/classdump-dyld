/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/bluetoothaudiod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <bluetoothaudiod/bluetoothaudiod-Structs.h>
#import <bluetoothaudiod/Codec.h>

@interface AptXCodec : Codec {

	void* aptXEnc;
	OpaqueAudioConverterRef inputConverter;

}
-(int)encodeData:(void*)arg1 ofSize:(unsigned*)arg2 toOutput:(char*)arg3 withOutputSize:(unsigned*)arg4 ;
-(unsigned)framesPerPacket;
-(unsigned)packetSize;
-(void)resetCodec;
-(int)setAptXSamplingFrequency:(unsigned char)arg1 ;
-(int)setAptXChannelMode:(unsigned char)arg1 ;
-(unsigned)bitRate;
-(double)latency;
-(id)init;
-(id)name;
@end

