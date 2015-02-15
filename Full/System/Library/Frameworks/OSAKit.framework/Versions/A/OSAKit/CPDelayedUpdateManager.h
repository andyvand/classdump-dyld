/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface CPDelayedUpdateManager : NSObject {

	NSMutableSet* _updaters;

}
+(id)sharedManager;
-(void)addUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)performDelayedUpdates;
-(void)cancelDelayedUpdate;
-(void)startDelayedUpdate;
-(void)removeUpdaterInfo:(id)arg1 ;
-(void)removeUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

