/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSCN_TextureOffscreenRenderingSource.h>

@class CALayer;

@interface QCSCN_TextureLayerSource : QCSCN_TextureOffscreenRenderingSource {

	CALayer* _layerContainer;
	CALayer* _layer;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(void)dealloc;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(_C3DTexture*)textureWithEngineContext:(_C3DEngineContext*)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 c3dRenderer:(_C3DRendererContext*)arg3 cglContext:(void*)arg4 atTime:(double)arg5 ;
-(double)__updateTextureWithLayer:(id)arg1 engineContext:(_C3DEngineContext*)arg2 sampler:(_C3DTextureSampler*)arg3 ;
@end

