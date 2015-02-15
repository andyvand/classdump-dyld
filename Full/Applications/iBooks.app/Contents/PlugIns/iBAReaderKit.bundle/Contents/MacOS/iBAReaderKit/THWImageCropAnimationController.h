/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class CALayer;

@interface THWImageCropAnimationController : NSObject {

	char _animationDisabled;
	CALayer* _wrapperLayer;
	double _sourceCornerRadius;
	double _targetCornerRadius;
	double _cropDurationScale;
	double _cornerRadiusDurationScale;
	double _backgroundDurationScale;
	CALayer* _backgroundLayer;
	CALayer* _imageContentLayer;
	CALayer* _cropLayer;
	CGRect _sourceContentsRect;
	CGRect _targetContentsRect;
	CGRect _backgroundSourceFrame;
	CGRect _backgroundTargetFrame;

}

@property (nonatomic,retain,readonly) CALayer * wrapperLayer;                                //@synthesize wrapperLayer=_wrapperLayer - In the implementation block
@property (assign,nonatomic) CGRect sourceContentsRect;                                      //@synthesize sourceContentsRect=_sourceContentsRect - In the implementation block
@property (assign,nonatomic) CGRect targetContentsRect;                                      //@synthesize targetContentsRect=_targetContentsRect - In the implementation block
@property (assign,nonatomic) double sourceCornerRadius;                                      //@synthesize sourceCornerRadius=_sourceCornerRadius - In the implementation block
@property (assign,nonatomic) double targetCornerRadius;                                      //@synthesize targetCornerRadius=_targetCornerRadius - In the implementation block
@property (assign,nonatomic) CGRect backgroundSourceFrame;                                   //@synthesize backgroundSourceFrame=_backgroundSourceFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundTargetFrame;                                   //@synthesize backgroundTargetFrame=_backgroundTargetFrame - In the implementation block
@property (assign,getter=isAnimationDisabled,nonatomic) char animationDisabled;              //@synthesize animationDisabled=_animationDisabled - In the implementation block
@property (assign,nonatomic) double cropDurationScale;                                       //@synthesize cropDurationScale=_cropDurationScale - In the implementation block
@property (assign,nonatomic) double cornerRadiusDurationScale;                               //@synthesize cornerRadiusDurationScale=_cornerRadiusDurationScale - In the implementation block
@property (assign,nonatomic) double backgroundDurationScale;                                 //@synthesize backgroundDurationScale=_backgroundDurationScale - In the implementation block
@property (nonatomic,retain) CALayer * backgroundLayer;                                      //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain,readonly) CALayer * imageContentLayer;                           //@synthesize imageContentLayer=_imageContentLayer - In the implementation block
@property (nonatomic,retain,readonly) CALayer * cropLayer;                                   //@synthesize cropLayer=_cropLayer - In the implementation block
-(void)setAnimationDisabled:(char)arg1 ;
-(double)cornerRadiusDurationScale;
-(char)isAnimationDisabled;
-(CALayer *)cropLayer;
-(CALayer *)imageContentLayer;
-(double)targetCornerRadius;
-(double)backgroundDurationScale;
-(double)cropDurationScale;
-(CGRect)sourceContentsRect;
-(CGRect)targetContentsRect;
-(id)initWithImageContentLayer:(id)arg1 ;
-(void)setSourceContentsRect:(CGRect)arg1 ;
-(void)setSourceCornerRadius:(double)arg1 ;
-(void)setTargetContentsRect:(CGRect)arg1 ;
-(void)setTargetCornerRadius:(double)arg1 ;
-(void)setCropDurationScale:(double)arg1 ;
-(void)setCornerRadiusDurationScale:(double)arg1 ;
-(void)setupWrapperLayer;
-(void)teardownWrapperLayer;
-(void)addAnimationWithDuration:(double)arg1 targetScale:(double)arg2 ;
-(id)sourceShadowPath;
-(void)addBackgroundAnimationWithDuration:(double)arg1 targetScale:(double)arg2 ;
-(id)backgroundShadowPath;
-(CGRect)backgroundSourceFrame;
-(CGRect)backgroundTargetFrame;
-(void)setBackgroundDurationScale:(double)arg1 ;
-(void)setBackgroundSourceFrame:(CGRect)arg1 ;
-(void)setBackgroundTargetFrame:(CGRect)arg1 ;
-(double)sourceCornerRadius;
-(CALayer *)wrapperLayer;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)dealloc;
@end
