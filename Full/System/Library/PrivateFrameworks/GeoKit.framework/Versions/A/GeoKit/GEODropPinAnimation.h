/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoKit/GeoKit-Structs.h>
#import <AppKit/NSAnimation.h>

@class CALayer;

@interface GEODropPinAnimation : NSAnimation {

	CALayer* pinLayer;
	CALayer* pinShadowLayer;
	CGPoint pinDestinationCenter;
	CGRect pinSuperLayerFrame;
	CGRect pinLayerFrame;
	CGRect pinShadowLayerFrame;
	CGSize pinImageSize;
	CGSize pinShadowImageSize;
	float cos45;
	float sin45;

}

@property (assign,nonatomic) CALayer * pinLayer; 
@property (assign,nonatomic) CALayer * pinShadowLayer; 
@property (assign,nonatomic) CGPoint pinDestinationCenter; 
-(id)init;
-(void)setCurrentProgress:(float)arg1 ;
-(CALayer *)pinLayer;
-(void)setPinLayer:(CALayer *)arg1 ;
-(CALayer *)pinShadowLayer;
-(void)setPinShadowLayer:(CALayer *)arg1 ;
-(CGPoint)pinDestinationCenter;
-(void)setPinDestinationCenter:(CGPoint)arg1 ;
@end

