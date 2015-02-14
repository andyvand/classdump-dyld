/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface IKReflectorLayer : CAReplicatorLayer {

	CALayer* _reflectedLayer;
	CALayer* _maskLayer;
	CALayer* _backgroundLayer;
	char _needsToClearBackground;
	double _gradientPercentHeight;
	double _reflectionTopAlpha;
	double _reflectionOffset;

}

@property (readonly) char needsToClearBackground; 
@property (assign) double gradientPercentHeight;               //@synthesize gradientPercentHeight=_gradientPercentHeight - In the implementation block
@property (assign) double reflectionTopAlpha;                  //@synthesize reflectionTopAlpha=_reflectionTopAlpha - In the implementation block
@property (assign) double reflectionOffset;                    //@synthesize reflectionOffset=_reflectionOffset - In the implementation block
+(id)reflectorLayerForLayer:(id)arg1 ;
-(void)setGradientPercentHeight:(double)arg1 ;
-(void)setReflectionOffset:(double)arg1 ;
-(void)setReflectionTopAlpha:(double)arg1 ;
-(void)teardown;
-(char)needsToClearBackground;
-(void)_updateTransform;
-(double)gradientPercentHeight;
-(double)reflectionTopAlpha;
-(double)reflectionOffset;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end

