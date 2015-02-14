/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/_IKiOSStyleGroupCell.h>

@interface IKiOSStyleGroupCell : _IKiOSStyleGroupCell {

	id _currentRenderedImage;
	float _rotation;

}

@property (assign) float rotation;              //@synthesize rotation=_rotation - In the implementation block
-(char)_transform:(CATransform3D*)arg1 forLayer:(id)arg2 inFrame:(CGRect)arg3 ;
-(void)drawImage:(id)arg1 ;
-(void)drawTitle;
-(void)drawSubtitle;
-(char)canBeDoubleClicked;
-(char)canDisplayInlinePreview;
-(void)pushTransform;
-(void)popTransform;
-(double)fogFactorDueToRotation;
-(double)fogFactorDueToMargin;
-(double)fogFactor;
-(double)rotatedTextAlphaFactor;
-(void)drawReflection:(id)arg1 ;
-(void)invalidate;
-(void)draw;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(void)drawSelection;
@end

