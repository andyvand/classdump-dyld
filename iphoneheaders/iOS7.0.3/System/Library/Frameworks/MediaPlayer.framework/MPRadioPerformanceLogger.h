/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface MPRadioPerformanceLogger : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _sessions;

}
+(id)sharedLogger;
-(void)addEventWithName:(id)arg1 sessionKey:(id)arg2 ;
-(void)beginSessionWithKey:(id)arg1 label:(id)arg2 ;
-(void)closeAndLogSessionForKey:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end
