/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@protocol MKCompassViewDelegate;
@class CALayer, CATextLayer, CAGradientLayer;

@interface MKCompassView : NSView {

	char _wasDragged;
	char _innerCLick;
	CGPoint _clickPosition;
	char _enabled;
	CALayer* rotationLayer;
	CALayer* tiltLayer;
	CATextLayer* textLayer;
	CAGradientLayer* gradientLayer;
	id<MKCompassViewDelegate> compassDelegate;

}

@property (__weak) id<MKCompassViewDelegate> compassDelegate; 
@property (assign,getter=isEnabled,nonatomic) char enabled;                //@synthesize enabled=_enabled - In the implementation block
-(void)commonInit;
-(void)setCompassDelegate:(id<MKCompassViewDelegate>)arg1 ;
-(void)resetNeedleToNorthWithMapYaw:(double)arg1 ;
-(void)resetCompassFlatWithMapPitch:(double)arg1 ;
-(void)updateAccessibilityDescriptionWithAngle:(double)arg1 ;
-(void)setupCompassForDPI:(char)arg1 ;
-(id<MKCompassViewDelegate>)compassDelegate;
-(void)updateHighlight;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)canBecomeKeyView;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewDidChangeBackingProperties;
@end

