/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/KNAnimationEffect.h>
#import <iBAReaderKit/KNFrameBuildAnimator.h>
#import <iBAReaderKit/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, NSArray, TSDGLShader, TSDGLDataBuffer, TSDGLTextureInfo, TSDGLFrameBuffer, TSDGLBloomEffect, NSString;

@interface KNBuildFireworks : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	CGRect _drawableFrame;
	CGRect _frameRect;
	CATransform3D _baseOrthoTransform;
	CATransform3D _baseTransform;
	int _oldViewportRect[4];
	NSArray* _fireworksSystems;
	TSDGLShader* _fireworksShader;
	TSDGLShader* _objectShader;
	TSDGLDataBuffer* _objectDataBuffer;
	TSDGLShader* _centerBurstShader;
	TSDGLDataBuffer* _centerBurstDataBuffer;
	TSDGLTextureInfo* _centerBurstTextureInfo;
	TSDGLTextureInfo* _particleTextureInfo;
	TSDGLFrameBuffer* _framebuffer;
	TSDGLShader* _fboShader;
	TSDGLDataBuffer* _fboDataBuffer;
	TSDGLBloomEffect* _bloomEffect;
	double _previousPercent;
	char _shouldApplyBloomEffect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)animationCategory;
+(id)supportedTypes;
+(id)animationFilter;
+(unsigned long long)directionType;
+(char)requiresSingleTexturePerStage;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(id)animationName;
+(id)defaultAttributes;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)p_setupParticleTexture;
-(void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)p_drawObject:(id)arg1 withContext:(id)arg2 ;
-(id)initWithAnimationContext:(id)arg1 ;
-(id)p_fireworksSystemsForTR:(id)arg1 build:(id)arg2 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)p_setupFBOWithSize:(CGSize)arg1 ;
-(void)p_drawParticleSystemsWithPercent:(double)arg1 sparkles:(char)arg2 particleSystemOpacity:(double)arg3 context:(id)arg4 ;
-(void)dealloc;
@end

