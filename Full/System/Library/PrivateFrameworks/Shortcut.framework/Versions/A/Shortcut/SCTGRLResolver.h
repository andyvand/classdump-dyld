/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/SCTInvocation.h>

@class SCTGRL;

@interface SCTGRLResolver : SCTInvocation {

	SCTGRL* mGRL;
	double mDelay;

}
-(id)initWithGRL:(id)arg1 invocation:(id)arg2 ;
-(id)initWithGRL:(id)arg1 selector:(SEL)arg2 target:(id)arg3 ;
-(id)initWithGRL:(id)arg1 invocation:(id)arg2 withDelay:(double)arg3 ;
-(void)dealloc;
-(id)description;
-(void)perform:(id)arg1 ;
@end
