/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLCanvas.h>

@class VGLContext, VGLFramebuffer, VGLTexture;

@interface VGLImageCanvas : NSObject <VGLCanvas> {

	VGLContext* _targetContext;
	VGLFramebuffer* _targetFramebuffer;
	VGLTexture* _targetTexture;
	CGSize _size;
	float _contentScale;
	BOOL _useDepthBuffer;
	BOOL _useStencilBuffer;
	VGLColor _glClearColor;
	BOOL _canMakeImage;
	BOOL _recreateFramebuffer;

}

@property (assign,nonatomic) BOOL useDepthBuffer;                    //@synthesize useDepthBuffer=_useDepthBuffer - In the implementation block
@property (assign,nonatomic) BOOL useStencilBuffer;                  //@synthesize useStencilBuffer=_useStencilBuffer - In the implementation block
@property (assign,nonatomic) BOOL useMultisampling; 
@property (assign,nonatomic) VGLColor glClearColor;                  //@synthesize glClearColor=_glClearColor - In the implementation block
@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float contentScale;                     //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) VGLContext * vglContext;              //@synthesize targetContext=_targetContext - In the implementation block
+(Class)contextClass;
+(void*)bitmapData:(unsigned*)arg1 fromTexture:(id)arg2 ;
+(CGImageRef)newImageFromTargetTexture:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id).cxx_construct;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(void)_destroyFramebuffer;
-(void)setUseMultisampling:(BOOL)arg1 ;
-(id)vglContext;
-(void)_createFramebuffer;
-(void)willDrawView;
-(void)didDrawView;
-(CGSize)sizeInPixels;
-(void)setGlClearColor:(VGLColor)arg1 ;
-(BOOL)useMultisampling;
-(BOOL)useDepthBuffer;
-(void)setUseDepthBuffer:(BOOL)arg1 ;
-(BOOL)useStencilBuffer;
-(void)setUseStencilBuffer:(BOOL)arg1 ;
-(VGLColor)glClearColor;
-(CGImageRef)newImage;
-(id)initWithSize:(CGSize)arg1 scale:(float)arg2 context:(id)arg3 ;
-(void*)bitmapData:(unsigned*)arg1 ;
@end
