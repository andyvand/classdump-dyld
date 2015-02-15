/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKNCustomLayer.h>

@class CALayer, CAGradientLayer;

@interface IKPlaceholderLayer : IKNCustomLayer {

	CALayer* clipLayer;
	CALayer* imageLayer;
	CAGradientLayer* gradientLayer;
	double progress;

}

@property (assign) double progress; 
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setup;
@end
