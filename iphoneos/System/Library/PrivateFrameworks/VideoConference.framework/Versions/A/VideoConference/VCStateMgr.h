/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoConference/NSLocking.h>

@class NSLock, NSDictionary;

@interface VCStateMgr : NSObject <NSLocking> {

	NSLock* lock;
	int _videoConferenceState;
	NSDictionary* _hardwareCaps;

}
+(id)defaultStateMgr;
-(char)setStateAndLock:(int)arg1 from:(int)arg2 ;
-(void)setStateUnlock;
-(char*)stateName:(int)arg1 ;
-(void)setHardwareCaps:(id)arg1 ;
-(id)hardwareCaps;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(int)state;
@end

