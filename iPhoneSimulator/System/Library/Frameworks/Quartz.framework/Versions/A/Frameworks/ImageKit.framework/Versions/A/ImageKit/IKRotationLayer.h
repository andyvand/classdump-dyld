/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKImageLayer, CATextLayer;

@interface IKRotationLayer : CALayer {

	IKImageLayer* _imageLayer;
	double _rotationAngle;
	double _oldRotationAngle;
	CATextLayer* _textLayer;

}
+(char)registerLayerWithView:(id)arg1 ;
+(id)addRotationLayer:(id)arg1 ;
+(id)defaultActionForKey:(id)arg1 ;
-(void)ikMouseDown:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setup:(id)arg1 ;
@end

