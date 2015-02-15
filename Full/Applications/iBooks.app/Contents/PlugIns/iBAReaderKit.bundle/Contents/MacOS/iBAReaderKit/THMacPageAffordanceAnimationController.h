/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THMacPageAffordanceAnimationControllerDelegate;
@class CAShapeLayer, CALayer, NSTrackingArea;

@interface THMacPageAffordanceAnimationController : NSObject {

	char _mouseIn;
	char _isLeftOverlay;
	int _affordanceState;
	id<THMacPageAffordanceAnimationControllerDelegate> _delegate;
	CAShapeLayer* _overlayLayer;
	CALayer* _buttonLayer;
	double _buttonMarginInOverlay;
	NSTrackingArea* _trackingArea;

}

@property (assign,nonatomic) id<THMacPageAffordanceAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int affordanceState;                                                      //@synthesize affordanceState=_affordanceState - In the implementation block
@property (assign,nonatomic) char mouseIn;                                                             //@synthesize mouseIn=_mouseIn - In the implementation block
@property (assign,nonatomic) char isLeftOverlay;                                                       //@synthesize isLeftOverlay=_isLeftOverlay - In the implementation block
@property (nonatomic,retain) CAShapeLayer * overlayLayer;                                              //@synthesize overlayLayer=_overlayLayer - In the implementation block
@property (nonatomic,retain) CALayer * buttonLayer;                                                    //@synthesize buttonLayer=_buttonLayer - In the implementation block
@property (assign,nonatomic) double buttonMarginInOverlay;                                             //@synthesize buttonMarginInOverlay=_buttonMarginInOverlay - In the implementation block
@property (nonatomic,retain) NSTrackingArea * trackingArea;                                            //@synthesize trackingArea=_trackingArea - In the implementation block
-(id)p_mapStateToString:(int)arg1 ;
-(void)p_fadeInOverlayLayerImmediately;
-(void)setAffordanceState:(int)arg1 ;
-(void)setButtonMarginInOverlay:(double)arg1 ;
-(double)buttonMarginInOverlay;
-(void)p_rollinAnimationComplete;
-(void)p_slideOutAnimationComplete;
-(void)p_fadeInAnimationComplete;
-(void)p_fadeOverlayLayer:(id)arg1 toOpacity:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)p_fadeOutAnimationComplete;
-(void)p_fadeOverlayLayer:(id)arg1 immediatelyToOpacity:(double)arg2 ;
-(void)p_fadeOutOverlayLayer;
-(void)p_fadeOutOverlayLayerImmediately;
-(void)p_showRollinAnimation;
-(void)p_slideOutOverlayLayerAnimated;
-(void)p_fadeInOverlayLayer;
-(void)p_fadeAndSlidelayLayer:(id)arg1 toOpacity:(double)arg2 distance:(double)arg3 duration:(double)arg4 timing:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)p_enterFadeOutImmediate;
-(id)initWithDelegate:(id)arg1 buttonOverlayMargin:(double)arg2 ;
-(void)setIsLeftOverlay:(char)arg1 ;
-(void)showAndSlide:(double)arg1 duration:(double)arg2 timing:(id)arg3 ;
-(char)mouseIn;
-(void)p_enterFadeIn;
-(int)affordanceState;
-(char)isLeftOverlay;
-(void)setButtonLayer:(CALayer *)arg1 ;
-(void)fade;
-(void)p_enterVisible;
-(void)setMouseIn:(char)arg1 ;
-(void)p_enterHidden;
-(char)p_pagingAllowed;
-(void)p_enterRollin;
-(void)p_enterSlideOut;
-(void)p_enterFadeOut;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(CAShapeLayer *)overlayLayer;
-(void)setOverlayLayer:(CAShapeLayer *)arg1 ;
-(CALayer *)buttonLayer;
-(void)setDelegate:(id<THMacPageAffordanceAnimationControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<THMacPageAffordanceAnimationControllerDelegate>)delegate;
-(NSTrackingArea *)trackingArea;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)hide;
-(void)show;
@end
