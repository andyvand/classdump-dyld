/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CATextLayer, CAKeyframeAnimation, QCSCN_LoadingProgressIndicatorLayer, NSString;

@interface QCSCN_LoadingLayer : CALayer {

	CATextLayer* _textLayer;
	CAKeyframeAnimation* _rotation;
	QCSCN_LoadingProgressIndicatorLayer* _progressIndicatorLayer;
	char _showText;

}

@property (copy) NSString * loadingString; 
@property (assign) char whiteProgressIndicator; 
-(id)init;
-(void)dealloc;
-(void)layoutSublayers;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setWhiteProgressIndicator:(char)arg1 ;
-(void)willShow;
-(void)didHide;
-(void)setLoadingString:(NSString *)arg1 ;
-(NSString *)loadingString;
-(char)whiteProgressIndicator;
@end

