/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/KNAnimationEffect.h>
#import <iBAReaderKit/KNFrameBuildAnimator.h>
#import <iBAReaderKit/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, KNBuildCrumbleSystem, TSDGLShader, KNBuildSmokeSystem, TSDGLTextureInfo, TSDGLDataBuffer, TSDGLFrameBuffer, NSString;

@interface KNBuildCrumble : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	KNBuildCrumbleSystem* _shatterSystem;
	TSDGLShader* _shatterSystemShader;
	KNBuildSmokeSystem* _smokeSystem;
	TSDGLShader* _smokeSystemShader;
	TSDGLTextureInfo* _smokeTextureInfo;
	TSDGLShader* _fboShader;
	TSDGLDataBuffer* _fboDataBuffer;
	TSDGLDataBuffer* _blurDataBuffer;
	TSDGLFrameBuffer* _shadowFramebuffer;
	TSDGLShader* _blurShader;
	CATransform3D _projectionMatrix;
	CATransform3D _shadowFBOProjectionMatrix;
	CGRect _drawableFrame;
	CGRect _animationRect;
	int _oldViewportRect[4];
	char _oldViewportRectInitialized;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresSingleTexturePerStage;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(id)animationFilter;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(int)animationCategory;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(char)arg5 version:(unsigned long long)arg6 ;
+(id)supportedTypes;
+(id)animationName;
+(id)defaultAttributes;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)p_setupMVPMatricesWithContext:(id)arg1 ;
-(void)p_setupShadersWithContext:(id)arg1 ;
-(void)p_setupParticleSystemsWithImage:(id)arg1 animatedBuild:(id)arg2 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)teardown;
-(void)dealloc;
@end
