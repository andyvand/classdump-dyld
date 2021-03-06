/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface SharedLinksRefreshManager : NSObject {

	unsigned long long _numberOfSharedLinksViews;
	NSTimer* _refreshTimer;

}
+(id)sharedManager;
-(void)updateSharedLinksContent;
-(void)sharedLinksViewWasAdded;
-(void)sharedLinksViewWasRemoved;
-(void)_invalidateRefreshTimer;
-(void)_scheduleRefreshTimer;
-(void)_refreshTimerFired:(id)arg1 ;
@end

