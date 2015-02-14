/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;
	short _angle;
	unsigned long long _distance;
	unsigned long long _blurSize;
	unsigned long long _spread;

}

@property (assign) int blendMode;                            //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign) short angle;                              //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned long long distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned long long blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
@property (assign) unsigned long long spread;                //@synthesize spread=_spread - In the implementation block
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned long long)blurSize;
-(unsigned long long)spread;
-(void)setBlurSize:(unsigned long long)arg1 ;
-(void)setSpread:(unsigned long long)arg1 ;
-(unsigned)effectType;
-(unsigned long long)distance;
-(void)setDistance:(unsigned long long)arg1 ;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(id)init;
-(void)dealloc;
-(void)setColor:(CUIColor *)arg1 ;
-(CUIColor *)color;
-(void)setOpacity:(double)arg1 ;
-(double)opacity;
@end

