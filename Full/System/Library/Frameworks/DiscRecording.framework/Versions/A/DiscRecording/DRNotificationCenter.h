/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DRNotificationCenter : NSObject {

	void* _ref;

}
+(id)currentRunLoopCenter;
+(void)initialize;
-(id)_registeredObservers;
-(char)notificationNeedsImmediatePosting:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
@end

