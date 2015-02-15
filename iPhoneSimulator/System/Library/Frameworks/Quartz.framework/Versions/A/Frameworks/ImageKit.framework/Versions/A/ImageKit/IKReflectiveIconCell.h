/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKIconCell.h>

@interface IKReflectiveIconCell : IKIconCell {

	id _currentRenderedImage;
	float _rotation;

}

@property (assign) float rotation;                        //@synthesize rotation=_rotation - In the implementation block
@property (readonly) CGRect reflectionFrame; 
-(double)baseline;
-(double)topline;
-(CGRect)reflectionFrame;
-(CGRect)imageFrame;
-(CGRect)selectionFrame;
-(char)_transform:(CATransform3D*)arg1 forLayer:(id)arg2 inFrame:(CGRect)arg3 ;
-(void)drawShadow;
-(void)drawImage:(id)arg1 ;
-(void)drawTitle;
-(void)drawSubtitle;
-(char)canBeDoubleClicked;
-(float)baselineForImage:(id)arg1 renderSize:(CGSize)arg2 context:(id)arg3 ;
-(float)toplineForImage:(id)arg1 renderSize:(CGSize)arg2 context:(id)arg3 ;
-(char)canDisplayInlinePreview;
-(void)pushTransform;
-(void)popTransform;
-(float)reflectionHeight;
-(float)reflectionFactor;
-(double)fogFactorDueToRotation;
-(double)fogFactorDueToMargin;
-(double)fogFactor;
-(double)rotatedTextAlphaFactor;
-(void)drawReflection:(id)arg1 ;
-(void)invalidate;
-(void)draw;
-(float)rotation;
-(unsigned long long)imageAlignment;
-(void)setRotation:(float)arg1 ;
-(void)drawSelection;
@end

