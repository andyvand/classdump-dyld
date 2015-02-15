/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Scene, NSColor, QCSCN_Node, NSLock;

@interface QCSCN_RendererReserved : NSObject {

	QCSCN_Scene* _scene;
	double _currentTime;
	double _lastTime;
	double _nextFrameTime;
	char _playing;
	char _loops;
	id _delegate;
	id _cameraModifier;
	void* _glContext;
	C3DFXRenderTargetRef _offscreenDepthTarget;
	C3DFXRenderTargetRef _offscreenColorTarget;
	_C3DFramebuffer* _offscreenFrameBuffer;
	C3DFXRenderTargetRef _offscreenTextureTarget;
	_C3DFramebuffer* _offscreenSecondaryFrameBuffer;
	char _rendersOffscreen;
	char _offscreenUsesMultisamples;
	char _jitteringEnabled;
	NSColor* _backgroundColor;
	C3DColor4 _vecColor;
	void* _offscreenGLContext;
	char _warmUpResourcesWhenLoadingScene;
	char _privateRenderer;
	_C3DEngineAdaptor* _engine;
	QCSCN_Node* _pointOfView;
	NSLock* _lock;

}
-(void)finalize;
-(void)dealloc;
-(void)cleanup;
@end

