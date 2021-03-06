/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THMacCanvasLiveResizeControllerDelegate;
#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class NSAnimation, TSDInteractiveCanvasController, NSView;

@interface THMacCanvasLiveResizeController : NSObject {

	char _liveResizeActive;
	char _liveResizeEnded;
	char _resizeDidHappen;
	int _resizeKind;
	NSAnimation* _windowAnimation;
	TSDInteractiveCanvasController* _icc;
	NSView* _resizeView;
	id<THMacCanvasLiveResizeControllerDelegate> _delegate;
	NSView* _observedView;
	CGSize _initialScaledPageSize;
	CGRect _resizeViewFrame;
	CGRect _animateFromWindowFrame;
	CGRect _animateToWindowFrame;

}

@property (assign,nonatomic) CGRect resizeViewFrame;                                            //@synthesize resizeViewFrame=_resizeViewFrame - In the implementation block
@property (assign,nonatomic) char liveResizeActive;                                             //@synthesize liveResizeActive=_liveResizeActive - In the implementation block
@property (assign,nonatomic) char liveResizeEnded;                                              //@synthesize liveResizeEnded=_liveResizeEnded - In the implementation block
@property (assign,nonatomic) char resizeDidHappen;                                              //@synthesize resizeDidHappen=_resizeDidHappen - In the implementation block
@property (assign,nonatomic) CGSize initialScaledPageSize;                                      //@synthesize initialScaledPageSize=_initialScaledPageSize - In the implementation block
@property (assign,nonatomic) CGRect animateFromWindowFrame;                                     //@synthesize animateFromWindowFrame=_animateFromWindowFrame - In the implementation block
@property (assign,nonatomic) CGRect animateToWindowFrame;                                       //@synthesize animateToWindowFrame=_animateToWindowFrame - In the implementation block
@property (nonatomic,retain) NSAnimation * windowAnimation;                                     //@synthesize windowAnimation=_windowAnimation - In the implementation block
@property (nonatomic,readonly) int resizeKind;                                                  //@synthesize resizeKind=_resizeKind - In the implementation block
@property (assign,nonatomic) TSDInteractiveCanvasController * icc;                              //@synthesize icc=_icc - In the implementation block
@property (assign,nonatomic) NSView * resizeView;                                               //@synthesize resizeView=_resizeView - In the implementation block
@property (assign,nonatomic) id<THMacCanvasLiveResizeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSView * observedView;                                             //@synthesize observedView=_observedView - In the implementation block
-(void)p_viewFrameDidChange:(id)arg1 ;
-(void)setAnimateToWindowFrame:(CGRect)arg1 ;
-(void)setObservedView:(NSView *)arg1 ;
-(void)setAnimateFromWindowFrame:(CGRect)arg1 ;
-(void)setIcc:(TSDInteractiveCanvasController *)arg1 ;
-(void)setResizeView:(NSView *)arg1 ;
-(char)liveResizeEnded;
-(void)didAddToWindow:(id)arg1 ;
-(char)resizeDidHappen;
-(int)resizeKind;
-(void)windowWillAnimateFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 animation:(id)arg3 ;
-(void)windowDidAnimateFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 ;
-(void)didRemoveFromWindow:(id)arg1 ;
-(id)initWithInteractiveCanvasController:(id)arg1 resizeView:(id)arg2 delegate:(id)arg3 observeView:(id)arg4 ;
-(char)liveResizeActive;
-(void)windowWillStartResize:(char)arg1 ;
-(void)windowDidEndResize;
-(double)scaleForLiveResize;
-(CGRect)animateFromWindowFrame;
-(CGRect)animateToWindowFrame;
-(void)updateEndLiveResize;
-(void)p_windowDidEndLiveResize:(id)arg1 ;
-(void)updateCanvasViewScaleToFitResizeView;
-(void)p_windowWillStartLiveResize:(id)arg1 ;
-(char)p_updateCanvasDuringLiveResize;
-(CGSize)initialScaledPageSize;
-(void)setResizeViewFrame:(CGRect)arg1 ;
-(void)p_updateResizeViewFrame:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setInitialScaledPageSize:(CGSize)arg1 ;
-(void)setLiveResizeActive:(char)arg1 ;
-(void)setLiveResizeEnded:(char)arg1 ;
-(void)setWindowAnimation:(NSAnimation *)arg1 ;
-(char)p_deferEndLiveResize;
-(NSView *)observedView;
-(CGRect)resizeViewFrame;
-(NSAnimation *)windowAnimation;
-(void)setResizeDidHappen:(char)arg1 ;
-(TSDInteractiveCanvasController *)icc;
-(void)teardown;
-(NSView *)resizeView;
-(void)setDelegate:(id<THMacCanvasLiveResizeControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<THMacCanvasLiveResizeControllerDelegate>)delegate;
@end

