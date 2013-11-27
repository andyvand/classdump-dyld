/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLFramebuffer.h>

@class VGLTextureCanvas;

@interface VGLTextureFramebuffer : VGLFramebuffer {

	VGLTextureCanvas* _textureCanvas;

}
-(int)width;
-(int)height;
-(void)_detach;
-(id)canvas;
-(void)deleteUnusedFramebuffers;
-(void)preloadMultisampleFramebuffer;
-(void)deleteResolveFramebuffers;
-(BOOL)isPresentable;
-(void)makeTarget;
-(void)deleteFramebuffers;
-(unsigned)framebuffer;
-(id)initWithTextureCanvas:(id)arg1 ;
-(void)finalize;
@end
