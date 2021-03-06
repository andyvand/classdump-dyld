/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSClipView.h>

@interface NSRowClipView : NSClipView {

	CGRect _targetFrame;
	/*^block*/id _animationFinishedHandler;
	double _fromYPosition;
	char _shouldAdjustBounds;
	char _forDeletion;

}

@property (assign,nonatomic) CGRect targetFrame;                     //@synthesize targetFrame=_targetFrame - In the implementation block
@property (nonatomic,copy) id animationFinishedHandler;              //@synthesize animationFinishedHandler=_animationFinishedHandler - In the implementation block
@property (assign,nonatomic) double fromYPosition;                   //@synthesize fromYPosition=_fromYPosition - In the implementation block
@property (assign,nonatomic) char shouldAdjustBounds;                //@synthesize shouldAdjustBounds=_shouldAdjustBounds - In the implementation block
@property (assign,nonatomic) char forDeletion;                       //@synthesize forDeletion=_forDeletion - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)cacheDisplayInRect:(CGRect)arg1 toBitmapImageRep:(id)arg2 ;
-(void)setUpGState;
-(id)animationForKey:(id)arg1 ;
-(void)_setTrackingAreasDirty:(int)arg1 ;
-(int)_trackingAreasDirty;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(char)_useZinLayerBacking;
-(void)_updateBoundsForSize:(CGSize)arg1 ;
-(CGRect)targetFrame;
-(void)setTargetFrame:(CGRect)arg1 ;
-(char)forDeletion;
-(void)setForDeletion:(char)arg1 ;
-(id)animationFinishedHandler;
-(void)setAnimationFinishedHandler:(id)arg1 ;
-(double)fromYPosition;
-(void)setFromYPosition:(double)arg1 ;
-(char)shouldAdjustBounds;
-(void)setShouldAdjustBounds:(char)arg1 ;
@end

