/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player/QuickTime Player-Structs.h>
#import <CoreFoundation/NSData.h>

@class MGAppendableData;

@interface MGReadOnlyRangeOfAppendableData : NSData {

	MGAppendableData* _sourceData;
	NSRange _range;

}
-(id)initWithRange:(NSRange)arg1 ofData:(id)arg2 ;
-(id)init;
-(const void*)bytes;
-(unsigned long long)length;
@end
