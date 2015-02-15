/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSImage;

@interface ClippingIconImageRenderer : NSObject {

	NSImage* _maskImage;
	NSImage* _dropShadowImage;
	char _drawsDropShadowAndMask;
	long long _style;

}

@property (assign,nonatomic) long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char drawsDropShadowAndMask;              //@synthesize drawsDropShadowAndMask=_drawsDropShadowAndMask - In the implementation block
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 withTintColor:(id)arg3 ;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 ;
-(char)drawsDropShadowAndMask;
-(void)setDrawsDropShadowAndMask:(char)arg1 ;
-(id)init;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
@end
