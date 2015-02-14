/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCRenderingPatch.h>

@class QCNumberPort, QCOpenGLPort_Color, QCOpenGLPort_Mesh, QCOpenGLPort_SceneKitBlending, QCOpenGLPort_ZBuffer, QCOpenGLPort_SceneKitCulling, QCArray, QCMesh, QCImageTextureBuffer;

@interface QCMeshRenderer : QCRenderingPatch {

	QCNumberPort* inputX;
	QCNumberPort* inputY;
	QCNumberPort* inputZ;
	QCNumberPort* inputRX;
	QCNumberPort* inputRY;
	QCNumberPort* inputRZ;
	QCNumberPort* inputWidth;
	QCNumberPort* inputHeight;
	QCNumberPort* inputDepth;
	QCOpenGLPort_Color* inputColor;
	QCOpenGLPort_Mesh* inputMesh;
	QCOpenGLPort_SceneKitBlending* inputBlending;
	QCOpenGLPort_ZBuffer* inputZBuffer;
	QCOpenGLPort_SceneKitCulling* inputCulling;
	QCArray* _colors;
	QCMesh* _savedMesh;
	QCImageTextureBuffer* _backFaces;
	QCImageTextureBuffer* _volumeTexture;
	char _wireframe;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(char)allowsInteraction;
-(void)finalize;
-(void)dealloc;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(id)initWithIdentifier:(id)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(double)depth;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)allowsScissors:(id)arg1 ;
-(QCDodRef)createDodForContext:(id)arg1 ;
-(double)scaleX;
-(double)scaleY;
-(void)setScaleX:(double)arg1 ;
-(void)setScaleY:(double)arg1 ;
-(char)automaticStateSet:(id)arg1 ;
@end

