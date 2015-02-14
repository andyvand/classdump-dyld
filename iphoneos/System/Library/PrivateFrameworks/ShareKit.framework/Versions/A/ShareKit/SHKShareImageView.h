/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSImageView.h>

@class NSArray, NSImage;

@interface SHKShareImageView : NSImageView {

	CGRect _contentRect;
	NSArray* _images;
	int _imageStyle;

}

@property (readonly) CGRect contentFrame; 
@property (assign) CGRect contentRect;                      //@synthesize contentRect=_contentRect - In the implementation block
@property (assign) int imageStyle;                          //@synthesize imageStyle=_imageStyle - In the implementation block
@property (readonly) NSImage * decoratedImage; 
@property (retain) NSArray * images; 
-(void)setContentRect:(CGRect)arg1 ;
-(NSArray *)images;
-(void)setImageStyle:(int)arg1 ;
-(NSImage *)decoratedImage;
-(id)initWithFrame:(CGRect)arg1 images:(id)arg2 ;
-(int)imageStyle;
-(void)_setImage:(id)arg1 updateImages:(char)arg2 ;
-(void)drawWithFrame:(CGRect)arg1 ;
-(CGRect)mainImageWithBorderFrameForCellBounds:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(void)setImages:(NSArray *)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)borderWidth;
-(char)allowsVibrancy;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(CGRect)contentRect;
@end

