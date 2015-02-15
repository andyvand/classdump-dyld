/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSCN_TextureOffscreenRenderingSource.h>

@interface QCSCN_TextureDelegateSource : QCSCN_TextureOffscreenRenderingSource {

	id _delegate;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(_C3DTexture*)textureWithEngineContext:(_C3DEngineContext*)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)__updateTextureWithDelegate:(id)arg1 engineContext:(_C3DEngineContext*)arg2 ;
@end
