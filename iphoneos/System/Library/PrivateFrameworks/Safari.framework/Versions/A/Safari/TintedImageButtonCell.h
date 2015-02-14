/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSButtonCell.h>

@class NSColor;

@interface TintedImageButtonCell : NSButtonCell {

	NSColor* _tintColor;
	double _imageAlpha;

}

@property (nonatomic,retain) NSColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double imageAlpha;                //@synthesize imageAlpha=_imageAlpha - In the implementation block
-(NSColor *)tintColor;
-(void)setTintColor:(NSColor *)arg1 ;
-(double)imageAlpha;
-(void)setImageAlpha:(double)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end

