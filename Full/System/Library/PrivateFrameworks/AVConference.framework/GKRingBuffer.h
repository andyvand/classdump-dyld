/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned endTime;
	unsigned capacity;
	unsigned bytesPerFrame;

}
-(id)initWithCapacity:(unsigned)arg1 bytesPerFrame:(unsigned)arg2 ;
-(void)increaseCapacity:(unsigned)arg1 ;
-(char)store:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
-(int)needsNewNumSamples:(unsigned)arg1 timestamp:(unsigned)arg2 ;
-(int)fetch:(char*)arg1 numSamples:(unsigned)arg2 timestamp:(unsigned)arg3 ;
-(id)init;
-(void)dealloc;
@end

