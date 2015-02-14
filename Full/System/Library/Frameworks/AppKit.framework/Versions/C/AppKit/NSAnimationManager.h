/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface NSAnimationManager : NSObject {

	int _lock;
	NSMapTable* _enqueuedAnimationsByObject;
	unsigned _signaled : 1;

}
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
+(id)currentAnimationManager;
+(void)performAnimations:(id)arg1 ;
-(void)setTargetValue:(id)arg1 forObject:(id)arg2 keyPath:(id)arg3 animation:(id)arg4 ;
-(void)removeAnimationsForObject:(id)arg1 keyPath:(id)arg2 ;
-(char)hasAnimationForObject:(id)arg1 keyPath:(id)arg2 ;
-(id)targetValueForObject:(id)arg1 keyPath:(id)arg2 ;
-(id)animationForObject:(id)arg1 keyPath:(id)arg2 ;
-(void)removeAllAnimationsForObject:(id)arg1 ;
@end

