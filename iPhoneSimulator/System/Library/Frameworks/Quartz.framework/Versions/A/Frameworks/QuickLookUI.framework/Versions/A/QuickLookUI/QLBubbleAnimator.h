/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@class QLBubble, NSTimer;

@interface QLBubbleAnimator : NSObject {

	QLBubble* _bubble;
	NSTimer* _animationTimer;
	CGSize _previousSize;
	CGSize _targetSize;
	double _sizeInitialAbsoluteTime;
	CGRect _previousItemFrame;
	CGRect _targetItemFrame;
	unsigned long long _targetEdge;
	double _itemFrameInitialAbsoluteTime;
	int _itemFrameAcceleration;

}

@property (assign) QLBubble * bubble;                            //@synthesize bubble=_bubble - In the implementation block
@property (readonly) CGSize targetSize;                          //@synthesize targetSize=_targetSize - In the implementation block
@property (readonly) CGRect targetItemFrame;                     //@synthesize targetItemFrame=_targetItemFrame - In the implementation block
@property (readonly) unsigned long long targetEdge;              //@synthesize targetEdge=_targetEdge - In the implementation block
@property (readonly) char animating; 
-(QLBubble *)bubble;
-(void)setBubble:(QLBubble *)arg1 ;
-(CGSize)targetSize;
-(unsigned long long)targetEdge;
-(void)setSize:(CGSize)arg1 itemFrame:(CGRect)arg2 edge:(unsigned long long)arg3 animate:(char)arg4 ;
-(void)animationProgress:(id)arg1 ;
-(void)_startResizing;
-(void)_updateBubble;
-(void)_startAnimationIfNeeded;
-(CGSize)_currentSizeWithProgress:(double)arg1 ;
-(CGRect)_currentItemFrameWithProgress:(double)arg1 ;
-(void)_updateBubbleWithResizeProgress:(double)arg1 moveProgress:(double)arg2 ;
-(CGRect)targetItemFrame;
-(char)animating;
-(void)dealloc;
-(void)invalidate;
@end

