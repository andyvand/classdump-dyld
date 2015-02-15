/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKAssetEpub/BKAssetEpub-Structs.h>
#import <WebKit/WKView.h>
#import <BKAssetEpub/BKAssetEpubViewEventHandler.h>

@protocol BKAssetEpubViewEventProcessor;
@class NSTimer;

@interface BKWKView : WKView <BKAssetEpubViewEventHandler> {

	NSTimer* _doubleClickTimer;
	char _dragging;
	char _loaded;
	char _shouldIgnoreLiveResize;
	id<BKAssetEpubViewEventProcessor> viewEventProcessor;
	long long forwardedScrollWheelEventAxes;
	id _eventMonitor;

}

@property (assign) char loaded;                                                                        //@synthesize loaded=_loaded - In the implementation block
@property (assign) char shouldIgnoreLiveResize;                                                        //@synthesize shouldIgnoreLiveResize=_shouldIgnoreLiveResize - In the implementation block
@property (nonatomic,__weak,readonly) id eventMonitor;                                                 //@synthesize eventMonitor=_eventMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<BKAssetEpubViewEventProcessor> viewEventProcessor; 
@property (assign,nonatomic) unsigned long long forwardedEvents; 
@property (assign,nonatomic) long long forwardedScrollWheelEventAxes; 
+(CGRect)rectForPageOffset:(unsigned long long)arg1 withPageCount:(unsigned long long)arg2 sectionSize:(CGSize)arg3 paginationInfo:(id)arg4 ;
-(void)p_mouseUp:(id)arg1 ;
-(void)setShouldIgnoreLiveResize:(char)arg1 ;
-(void)startDoubleClickTimer;
-(void)cancelDoubleClickTimer;
-(id<BKAssetEpubViewEventProcessor>)viewEventProcessor;
-(char)shouldIgnoreLiveResize;
-(void)setViewEventProcessor:(id<BKAssetEpubViewEventProcessor>)arg1 ;
-(long long)forwardedScrollWheelEventAxes;
-(void)setForwardedScrollWheelEventAxes:(long long)arg1 ;
-(void)_performDoubleClickTimerAction:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contextRef:(OpaqueWKContextRef)arg2 pageGroupRef:(OpaqueWKPageGroupRef)arg3 relatedToPage:(OpaqueWKPageRef)arg4 ;
-(char)loaded;
-(void)_setDragImage:(id)arg1 at:(CGPoint)arg2 linkDrag:(char)arg3 ;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)setLoaded:(char)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)eventMonitor;
-(void)copy:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(void)viewWillStartLiveResize;
@end
