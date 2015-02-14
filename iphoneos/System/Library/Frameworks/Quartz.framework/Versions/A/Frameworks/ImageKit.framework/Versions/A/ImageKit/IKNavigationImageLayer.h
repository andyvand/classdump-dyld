/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, IKImageLayer;

@interface IKNavigationImageLayer : CALayer {

	CALayer* _imageBackgroundLayer;
	IKImageLayer* _imageLayer;
	CGRect _visible;
	CGRect _visible2;

}
-(void)ikMouseDown:(id)arg1 ;
-(void)adjustSize;
-(CGAffineTransform)navTransform;
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)scalingFactor;
-(void)setup:(id)arg1 ;
-(void)updateBounds;
@end

