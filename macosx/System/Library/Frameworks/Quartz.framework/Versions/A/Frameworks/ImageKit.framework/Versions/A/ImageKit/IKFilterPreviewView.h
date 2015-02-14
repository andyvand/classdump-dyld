/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSOpenGLView.h>

@class CIFilter, CIImage, CIContext;

@interface IKFilterPreviewView : NSOpenGLView {

	CIFilter* currentFilter;
	CIImage* defaultImage;
	CIImage* checkerBoardImage;
	CIContext* _context;
	double currentScale;
	char _needsReshape;

}
+(id)defaultPixelFormat;
-(void)setFilterByName:(id)arg1 ;
-(void)updateMatrices;
-(id)ciContext;
-(void)setImageByPath:(id)arg1 forKey:(id)arg2 ;
-(id)currentFilter;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)prepareOpenGL;
-(void)reshape;
@end

