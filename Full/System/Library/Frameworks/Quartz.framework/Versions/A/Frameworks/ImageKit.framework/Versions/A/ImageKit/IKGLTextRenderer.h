/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKGLTextGenerator, NSMutableArray, IKGLTextCache, IKGLTextSubpixelShader;

@interface IKGLTextRenderer : NSObject {

	double _scaleFactor;
	char _enableSubpixelAntialiasing;
	IKGLTextGenerator* _textGenerator;
	CFDictionaryRef _deferredStrings;
	NSMutableArray* _attributes;
	IKGLTextCache* _cache;
	int _generatedTextCount;
	int _cachedTextCount;
	char _subpixelAntialiasingSupported;
	IKGLTextSubpixelShader* _subpixelCopy;
	IKGLTextSubpixelShader* _subpixelSover;
	int _viewportWidth;
	int _viewportHeight;
	char _needsSurfaceSync;
	unsigned _surfaceID;

}

@property (assign) char enableSubpixelAntialiasing; 
-(char)enableSubpixelAntialiasing;
-(void)emptyCaches;
-(id)initWithCacheSize:(CGSize)arg1 scaleFactor:(double)arg2 ;
-(void)setEnableSubpixelAntialiasing:(char)arg1 ;
-(char)drawText:(id)arg1 inRect:(CGRect)arg2 attributes:(id)arg3 alpha:(float)arg4 deferred:(char)arg5 ;
-(int)textXWithTextInfo:(id)arg1 renderedSize:(float)arg2 destinationRect:(CGRect)arg3 ;
-(void)showRenderedTextWithInfo:(id)arg1 textColor:(double*)arg2 alpha:(float)arg3 ;
-(id)cache;
-(void)antialiasLevelChanged:(id)arg1 ;
-(int)generatedTextCount;
-(int)cachedTextCount;
-(void)finalize;
-(void)dealloc;
-(char)flush;
@end

