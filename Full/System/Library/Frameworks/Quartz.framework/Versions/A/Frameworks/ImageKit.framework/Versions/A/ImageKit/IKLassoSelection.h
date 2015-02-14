/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKComposer, IKImageLayer, IKKnobLayer;

@interface IKLassoSelection : CALayer {

	IKComposer* _composer;
	IKImageLayer* _imageLayer;
	CGRect _selectionRect;
	char _creatingPath;
	CGPoint _mouseDownLocation;
	CGPoint _originalPos;
	CGRect _originalBounds;
	CGPoint* _points;
	CGPoint _lastPoint;
	int _numberOfPoints;
	float _minX;
	float _maxX;
	float _minY;
	float _maxY;
	IKKnobLayer* _knobLayer;
	double _factor;
	double _lineWidthFactor;
	unsigned short _ant_stipple;
	char _supportsUndo;

}

@property (assign) char supportsUndo;              //@synthesize supportsUndo=_supportsUndo - In the implementation block
+(double)fadeDuration;
-(void)addPoint:(CGPoint)arg1 ;
-(void)ikMouseDown:(id)arg1 ;
-(void)ikMouseDragged:(id)arg1 ;
-(void)ikMouseUp:(id)arg1 ;
-(void)startTracking:(id)arg1 ;
-(void)addCursorRects;
-(void)adjustPosition;
-(CGImageRef)createNewMaskedImage:(CGImageRef)arg1 ;
-(char)supportsUndo;
-(char)isSelectionLayer;
-(char)shouldUseOriginalLayerToDraw;
-(void)doDrawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)setSupportsUndo:(char)arg1 ;
-(void)removeKnobLayer;
-(CGPoint)constrainedPosition:(CGPoint)arg1 forLayer:(id)arg2 ;
-(void)clearSelectionPath;
-(void)doDrawInContext:(CGContextRef)arg1 ;
-(void)dealloc;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperlayer;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)knobLayer;
-(void)setup:(id)arg1 ;
@end

