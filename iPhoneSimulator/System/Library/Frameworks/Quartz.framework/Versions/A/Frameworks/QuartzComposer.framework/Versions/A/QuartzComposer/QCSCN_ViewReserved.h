/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSOpenGLContext, NSOpenGLPixelFormat, NSTimer, NSRecursiveLock, QCSCN_LoadingLayer, NSOperationQueue, QCSCN_Renderer, QCSCN_EventHandler, QCSCN_Scene, NSColor;

@interface QCSCN_ViewReserved : NSObject {

	NSOpenGLContext* _openGLContext;
	NSOpenGLPixelFormat* _pixelFormat;
	CVDisplayLinkRef _displayLink;
	char _displayLinkRunning;
	unsigned _mainViewDisplayID;
	NSTimer* _timer;
	char _repetitiveRedisplayRunning;
	char _allowsBrowsing;
	char _enableJittering;
	char _jitteringSupported;
	char _jitteringIsComplete;
	char _abortJittering;
	char _jitteringThreadRunning;
	char _restartJittering;
	NSRecursiveLock* _jitteringLock;
	char _clearViewportWhenDrawing;
	QCSCN_LoadingLayer* _loadingLayer;
	char _asynchronousLoading;
	NSOperationQueue* _loadingQueue;
	id _delegate;
	QCSCN_Renderer* _renderer;
	QCSCN_EventHandler* _eventHandler;
	QCSCN_Scene* _scene;
	NSRecursiveLock* _lock;
	NSRecursiveLock* _glContextLock;
	char _ibNoMultisampling;
	NSColor* _backgroundColor;
	char _isOpaque;
	char _firstDrawDone;
	char _dirty;

}

@property (assign) char dirty;              //@synthesize dirty=_dirty - In the implementation block
-(void)dealloc;
-(char)dirty;
-(void)setDirty:(char)arg1 ;
@end

