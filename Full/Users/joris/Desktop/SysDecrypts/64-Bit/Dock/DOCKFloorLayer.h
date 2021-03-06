/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <QuartzCore/CALayer.h>

@class ECMaterialLayer, CALayer;

@interface DOCKFloorLayer : CALayer {

	ECMaterialLayer* _materialLayer;
	CALayer* _separatorLayer;
	CALayer* _glassLayer;
	CGRect _previousFrame;
	int _orientation;
	double _separatorPosition;
	unsigned _lastDisplay;
	float _radius;

}

@property (assign,nonatomic) float radius;              //@synthesize radius=_radius - In the implementation block
-(void)scaleFactorChanged;
-(void)displayReconfig;
-(id)initWithOrientation:(int)arg1 hasSeparator:(BOOL)arg2 ;
-(void)backgroundChanged;
-(void)setGlobalSeparatorPosition:(double)arg1 ;
-(void)updateFrame:(CGRect)arg1 ;
-(void)reduceTransparencyChanged;
-(void)layoutSublayers;
-(void)setOrientation:(int)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end

