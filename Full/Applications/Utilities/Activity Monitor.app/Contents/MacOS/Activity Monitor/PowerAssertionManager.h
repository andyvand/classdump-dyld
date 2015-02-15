/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:12:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Activity Monitor.app/Contents/MacOS/Activity Monitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Activity Monitor/Activity Monitor-Structs.h>
@class NSMutableDictionary;

@interface PowerAssertionManager : NSObject {

	CFDictionaryRef _base;
	NSMutableDictionary* _processesHoldingAssertions;

}

@property (retain) NSMutableDictionary * processesHoldingAssertions;              //@synthesize processesHoldingAssertions=_processesHoldingAssertions - In the implementation block
+(id)powerAssertionManager;
-(void)setProcessesHoldingAssertions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)processesHoldingAssertions;
-(void)sample;
-(unsigned long long)assertionsForPID:(id)arg1 ;
-(id)init;
@end
