/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSScrollingConcurrentVBLPreprocessFilter.h>

@interface _NSScrollingConcurrentPageAlignmentAnimation : _NSScrollingConcurrentVBLPreprocessFilter {

	CGPoint _initialOrigin;
	CGPoint _destinationOrigin;
	double _initialTimestamp;

}

@property (assign) CGPoint initialOrigin;                  //@synthesize initialOrigin=_initialOrigin - In the implementation block
@property (assign) CGPoint destinationOrigin;              //@synthesize destinationOrigin=_destinationOrigin - In the implementation block
-(id)init;
-(void)dealloc;
-(void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4 ;
-(CGPoint)initialOrigin;
-(void)setInitialOrigin:(CGPoint)arg1 ;
-(CGPoint)destinationOrigin;
-(void)setDestinationOrigin:(CGPoint)arg1 ;
@end
