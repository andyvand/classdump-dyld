/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DRPartialFileAudioProducer : NSObject {

	unsigned bytesOfSilence;
	void* fileProducer;

}
+(id)producer;
+(id)blockLengthOfFile:(id)arg1 ;
-(unsigned)produceDataForTrack:(id)arg1 intoBuffer:(char*)arg2 length:(unsigned)arg3 atAddress:(unsigned long long)arg4 blockSize:(unsigned)arg5 ioFlags:(unsigned*)arg6 ;
-(char)prepareTrack:(id)arg1 forBurn:(id)arg2 toMedia:(id)arg3 ;
-(unsigned)producePreGapForTrack:(id)arg1 intoBuffer:(char*)arg2 length:(unsigned)arg3 atAddress:(unsigned long long)arg4 blockSize:(unsigned)arg5 ioFlags:(unsigned*)arg6 ;
-(void)cleanupTrackAfterBurn:(id)arg1 ;
-(unsigned)produceDataIntoBuffer:(char*)arg1 length:(unsigned)arg2 blockSize:(unsigned)arg3 ;
-(void)finalize;
-(void)dealloc;
@end

