/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DRCDTextBlock, NSMutableData;

@interface DRSessionCDTextProducer : NSObject {

	DRCDTextBlock* _cdText;
	NSMutableData* _packData;
	unsigned long long _pwIndex;
	unsigned long long _pwSize;

}
-(id)initWithCDText:(id)arg1 ;
-(unsigned)produceLeadInForSession:(id)arg1 intoBuffer:(char*)arg2 length:(unsigned)arg3 atAddress:(unsigned long long)arg4 ioFlags:(unsigned*)arg5 ;
-(char)prepareSession:(id)arg1 forBurn:(id)arg2 toMedia:(id)arg3 ;
-(void)cleanupSessionAfterBurn:(id)arg1 ;
-(void)expandPackData;
-(void)dealloc;
@end

