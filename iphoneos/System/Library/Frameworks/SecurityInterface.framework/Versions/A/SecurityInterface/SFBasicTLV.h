/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface SFBasicTLV : NSObject {

	NSData* mInputData;
	unsigned mLength;
	const char* mBytePtr;
	unsigned char mTag;
	unsigned mOutputLength;
	unsigned mLastLength;

}
+(unsigned)parseBERLength:(const char**)arg1 lenlen:(unsigned*)arg2 ;
-(void)setInputData:(id)arg1 ;
-(id)inputData;
-(void)skip:(unsigned)arg1 ;
-(char)getNext:(id*)arg1 tag:(char*)arg2 ;
-(char)getNextBER:(id*)arg1 tag:(char*)arg2 noAdvance:(char)arg3 ;
-(unsigned)lastLength;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

