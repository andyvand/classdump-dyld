/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _NSScrollStateEventListener;
#import <AppKit/AppKit-Structs.h>
@class _NSScrollingConcurrentSharedData, _NSScrollingConcurrentConstantData;

@interface _NSScrollingConcurrentMainThreadSynchronizer : NSObject {

	dispatch_source_sRef _dispatchSouce;
	_NSScrollingConcurrentSharedData* _sharedData;
	_NSScrollingConcurrentConstantData* _constantData;
	id<_NSScrollStateEventListener> _scrollStateDelegate;
	/*^block*/id _completionHandler;
	struct {
		unsigned isSynchronizing : 1;
		unsigned unexpectedScrollDetected : 1;
		unsigned isSuspended : 1;
		unsigned reserved : 29;
	}  _flags;
	CGPoint _lastSetOrigin;

}

@property (assign,nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;              //@synthesize scrollStateDelegate=_scrollStateDelegate - In the implementation block
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(id<_NSScrollStateEventListener>)scrollStateDelegate;
-(void)setScrollStateDelegate:(id<_NSScrollStateEventListener>)arg1 ;
-(void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2 ;
-(id)initWithSharedData:(id)arg1 constantData:(id)arg2 ;
-(void)_synchronize:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_doIdlePrefetch;
-(void)signal:(unsigned long long)arg1 ;
-(void)_updateSharedData:(unsigned long long)arg1 ;
-(void)_scrollToCononicalOrigin;
-(void)signal:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

