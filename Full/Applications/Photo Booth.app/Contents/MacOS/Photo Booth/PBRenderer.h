/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:45:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Photo Booth.app/Contents/MacOS/Photo Booth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCRenderer.h>

@class NSImage, QCComposition;

@interface PBRenderer : QCRenderer {

	int _renderMode;
	NSImage* _staticImage;
	char _willWantBackdrops;
	QCComposition* _composition;

}

@property (assign) int renderMode; 
@property (assign) char willWantBackdrops;              //@synthesize willWantBackdrops=_willWantBackdrops - In the implementation block
-(char)willWantBackdrops;
-(id)initWithRenderingContext:(id)arg1 composition:(id)arg2 ;
-(id)_backgroundContentPath;
-(id)_imageForPath:(id)arg1 ;
-(void)_loadMoviePreviews;
-(void)setWillWantBackdrops:(char)arg1 ;
-(char)previewMode;
-(void)setPreviewMode:(char)arg1 ;
-(int)renderMode;
-(void)setRenderMode:(int)arg1 ;
-(void)setInputImage:(id)arg1 ;
-(id)composition;
@end

