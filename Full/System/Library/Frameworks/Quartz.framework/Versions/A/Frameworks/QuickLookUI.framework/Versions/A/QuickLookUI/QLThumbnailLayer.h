/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol QLPreviewItem;
@interface QLThumbnailLayer : CALayer {

	id<QLPreviewItem> _item;
	CGSize _thumbnailSize;
	CGSize _thumbnailMaxSize;
	CGRect _contentRect;
	QLThumbnailRef _thumbnail;
	CGImageRef _thumbnailImage;
	char _iconMode;

}

@property (retain) id<QLPreviewItem> previewItem; 
@property (assign) char iconMode;                              //@synthesize iconMode=_iconMode - In the implementation block
@property (assign) CGImageRef imageContents; 
@property (readonly) char hasThumbnail; 
@property (readonly) CGSize thumbnailMaxSize;                  //@synthesize thumbnailMaxSize=_thumbnailMaxSize - In the implementation block
@property (readonly) CGSize thumbnailSize;                     //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (readonly) CGRect thumbnailFrame; 
@property (readonly) CGRect contentRect; 
+(void)initialize;
-(CGImageRef)createImageForMaximumSize:(CGSize)arg1 options:(CFDictionaryRef)arg2 ;
-(char)hasThumbnail;
-(void)setImageContents:(CGImageRef)arg1 ;
-(void)thumbnail:(QLThumbnailRef)arg1 computedImage:(CGImageRef)arg2 ;
-(id)initWithPreviewItem:(id)arg1 ;
-(CGImageRef)imageContents;
-(CGRect)thumbnailFrame;
-(CGSize)thumbnailMaxSize;
-(void)_thumbnailingDone:(QLThumbnailRef)arg1 ;
-(char)iconMode;
-(void)setIconMode:(char)arg1 ;
-(CGSize)thumbnailSize;
-(void)dealloc;
-(void)removeFromSuperlayer;
-(id)actionForKey:(id)arg1 ;
-(void)update;
-(CGRect)contentRect;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(void)discard;
@end

