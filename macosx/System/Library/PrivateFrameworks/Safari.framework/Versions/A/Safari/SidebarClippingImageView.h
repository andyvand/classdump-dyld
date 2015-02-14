/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSImageView.h>

@class ClippingIconImageRenderer;

@interface SidebarClippingImageView : NSImageView {

	ClippingIconImageRenderer* _renderer;

}

@property (assign,nonatomic) long long imageViewStyle; 
@property (assign,nonatomic) char drawsDropShadowAndMask; 
-(char)drawsDropShadowAndMask;
-(void)setDrawsDropShadowAndMask:(char)arg1 ;
-(void)setImageViewStyle:(long long)arg1 ;
-(long long)imageViewStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

