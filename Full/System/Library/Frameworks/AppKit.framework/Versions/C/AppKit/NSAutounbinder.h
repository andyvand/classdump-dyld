/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSObject, NSMutableArray;

@interface NSAutounbinder : NSProxy {

	NSObject* _bindingTarget;
	char _isRetainingBindingTarget;
	char _isRecordingBindings;
	NSMutableArray* _bindingsToThisObject;
	NSMutableArray* _observancesOfThisObject;

}
-(void)dealloc;
-(id)description;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(char)validateValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 isWeak:(char)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(id)initWithBindingTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)bindingTarget;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)removeBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)retainBindingTargetAndUnbind;
-(id)_autounbinder;
@end
