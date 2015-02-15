/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _NSScrollStateEventListener;
@interface _NSScrollingConcurrentVBLPreprocessFilter : NSObject {

	id<_NSScrollStateEventListener> _scrollStateDelegate;

}

@property (assign,nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;              //@synthesize scrollStateDelegate=_scrollStateDelegate - In the implementation block
-(void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4 ;
-(id<_NSScrollStateEventListener>)scrollStateDelegate;
-(void)setScrollStateDelegate:(id<_NSScrollStateEventListener>)arg1 ;
@end

