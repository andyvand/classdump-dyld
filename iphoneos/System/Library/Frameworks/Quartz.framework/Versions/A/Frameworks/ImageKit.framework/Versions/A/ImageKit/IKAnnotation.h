/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKKnobLayer, IKComposer, IKImageLayer;

@interface IKAnnotation : CALayer {

	IKKnobLayer* _knobLayer;
	IKComposer* _composer;
	IKImageLayer* _imageLayer;
	char _selected;
	char _dashed;
	double _borderColors[4];
	double _backgroundColors[4];
	double _shadowColors[4];
	char _supportsUndo;

}

@property (assign) char supportsUndo;              //@synthesize supportsUndo=_supportsUndo - In the implementation block
+(double)fadeDuration;
+(id)defaultActionForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(char)selected;
-(void)ikMouseDown:(id)arg1 ;
-(void)updateBorderWidth:(int)arg1 ;
-(void)toggleShadow;
-(void)toggleDash;
-(char)supportsUndo;
-(void)startEditing:(id)arg1 ;
-(char)isAnnotationLayer;
-(void)doDrawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)setSupportsUndo:(char)arg1 ;
-(unsigned)knobLayerFlags;
-(void)setColorComponents:(double*)arg1 withColor:(id)arg2 ;
-(void)setNewBorderWidth:(double)arg1 ;
-(void)changeBorderColor:(id)arg1 ;
-(void)changeBackgroundColor:(id)arg1 ;
-(void)removeKnobLayer;
-(void)finalize;
-(void)dealloc;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperlayer;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)changeColor:(id)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)knobLayer;
-(void)setup:(id)arg1 ;
-(void)cleanup;
@end

