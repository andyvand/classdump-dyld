/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKKnobLayer, IKComposer, IKImageLayer;

@interface IKSelection : CALayer {

	IKKnobLayer* _knobLayer;
	IKComposer* _composer;
	IKImageLayer* _imageLayer;
	char _selected;
	char _supportsUndo;

}

@property (assign) char supportsUndo;              //@synthesize supportsUndo=_supportsUndo - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(char)selected;
-(void)ikMouseDown:(id)arg1 ;
-(CGImageRef)createNewMaskedImage:(CGImageRef)arg1 ;
-(char)supportsUndo;
-(char)isSelectionLayer;
-(void)startEditing:(id)arg1 ;
-(char)shouldUseOriginalLayerToDraw;
-(void)doDrawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)setSupportsUndo:(char)arg1 ;
-(unsigned)knobLayerFlags;
-(void)removeKnobLayer;
-(CGRect)rectForBorderWidth;
-(void)dealloc;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperlayer;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)knobLayer;
-(void)setup:(id)arg1 ;
@end

