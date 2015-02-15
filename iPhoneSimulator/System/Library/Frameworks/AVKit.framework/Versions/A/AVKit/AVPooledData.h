/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>

@class AVDataPool, NSMutableData;

@interface AVPooledData : NSMutableData {

	AVDataPool* _dataPool;
	unsigned long long _dataPoolIndex;
	NSMutableData* _copiedBacking;

}
-(id)initWithIndex:(unsigned long long)arg1 inDataPool:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void*)mutableBytes;
-(const void*)bytes;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
@end

