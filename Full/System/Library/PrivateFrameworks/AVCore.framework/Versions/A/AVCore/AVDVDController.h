/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DVDApplication;

@interface AVDVDController : NSObject {

	DVDApplication* _application;
	char _didPause;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)pause;
-(int)_dvdState;
@end

