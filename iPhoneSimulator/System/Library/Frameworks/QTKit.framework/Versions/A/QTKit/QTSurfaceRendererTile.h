/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTSurfaceRendererTile : NSObject {

	CVBufferRef _imageBuffer;
	CGColorSpaceRef _colorSpace;
	CGColorSpaceRef _forcedContentColorSpace;
	CGColorRef _contentBackgroundColor;
	CGRect _contentRect;
	CGRect _surfaceRect;
	char _surfaceVisible;
	char _surfaceOpaque;
	unsigned _connectionID;
	unsigned _windowID;
	unsigned _surfaceID;

}
+(id)tileForGraphicsDevice:(id)arg1 ;
+(id)acceleratedTileForGraphicsDevice:(id)arg1 ;
+(id)softwareTile;
-(void)setContentRect:(CGRect)arg1 ;
-(id)pixelBufferAttributes;
-(void)setConnectionID:(unsigned)arg1 ;
-(id)preferredAttributes;
-(id)graphicsDevice;
-(CGRect)surfaceRect;
-(void)setImageBuffer:(CVBufferRef)arg1 ;
-(void)setForcedContentColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setContentBackgroundColor:(CGColorRef)arg1 ;
-(void)setSurfaceRect:(CGRect)arg1 ;
-(void)unbindSurface;
-(void)bindSurface;
-(void)updateBinding;
-(void)ensureSurface;
-(CGColorSpaceRef)forcedContentColorSpace;
-(CGColorRef)contentBackgroundColor;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)render;
-(char)isVisible;
-(void)display;
-(CGColorSpaceRef)colorSpace;
-(unsigned)windowID;
-(void)setVisible:(char)arg1 ;
-(CGRect)contentRect;
-(unsigned)surfaceID;
-(unsigned)connectionID;
-(void)setWindowID:(unsigned)arg1 ;
-(void)removeSurface;
-(CVBufferRef)imageBuffer;
@end

