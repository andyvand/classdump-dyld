/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKKnobLayer, IKComposer, IKImageLayer;

@interface IKPastedImage : CALayer {

	IKKnobLayer* _knobLayer;
	IKComposer* _composer;
	IKImageLayer* _imageLayer;
	char _selected;
	id _image;

}

@property (retain) id image;              //@synthesize image=_image - In the implementation block
+(double)fadeDuration;
+(id)defaultActionForKey:(id)arg1 ;
-(char)selected;
-(void)ikMouseDown:(id)arg1 ;
-(void)applyInContext:(CGContextRef)arg1 ;
-(char)supportsUndo;
-(void)beginMouseOperation;
-(void)endMouseOperation;
-(char)isPasteboardLayer;
-(unsigned)defaultKnob;
-(void)setSupportsUndo:(char)arg1 ;
-(unsigned)knobLayerFlags;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)knobLayer;
-(void)setup:(id)arg1 ;
@end

