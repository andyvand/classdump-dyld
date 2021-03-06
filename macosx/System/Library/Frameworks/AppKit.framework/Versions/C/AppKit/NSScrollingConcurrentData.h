/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSScrollingConcurrentData : NSObject {

	opaque_pthread_mutex_t _synchMutex;
	unsigned long long _gestureToken;
	char _isSynchPending;
	char _isDrawingVisibleRect;
	char _shouldDoIdlePrefetch;
	char _animationIsPending;
	char _animationInProgress;
	char _useTargetPageNum;
	CGRect _lastValidRenderedContentRect;
	CGRect _documentFrame;
	CGSize _clipViewSize;
	CGPoint _velocity;
	CGPoint _lastScrollDirection;
	CGPoint _canonicalClipBoundsOrigin;
	long long _referencePageNum;
	double _targetPageNum;
	double _swipeCount;
	long long _pageAlignmentAxis;
	unsigned long long _animationInitialTimeStamp;
	unsigned long long _animationDuration;
	long long _animationAxis;
	CGPoint _animationInitialPoint;
	CGPoint _animationDestinationPoint;

}
-(id)init;
-(void)dealloc;
@end

