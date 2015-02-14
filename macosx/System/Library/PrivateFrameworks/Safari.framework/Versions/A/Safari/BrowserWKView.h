/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SearchableWKView.h>

@class BrowserDocument, NSMutableDictionary, NSMutableSet;

@interface BrowserWKView : SearchableWKView {

	BrowserDocument* _document;
	NSMutableDictionary* _renderTreeCreationHandlerMap;
	NSMutableSet* _WKViewMouseTrackingBlockerSet;
	char _webPageIsUnresponsive;
	char _shouldBlockAllMouseEvents;

}

@property (assign,nonatomic) char webPageIsUnresponsive;                  //@synthesize webPageIsUnresponsive=_webPageIsUnresponsive - In the implementation block
@property (assign,nonatomic) char shouldBlockAllMouseEvents;              //@synthesize shouldBlockAllMouseEvents=_shouldBlockAllMouseEvents - In the implementation block
+(void)closeWKViews:(id)arg1 ;
-(id)browserWindowControllerMac;
-(BrowserWindowController*)browserWindowController;
-(BrowserContentViewController*)browserContentViewController;
-(id)tabContentView;
-(void)didCreateRenderTree:(const RenderObjectRef)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(void)didCreateRenderLayerTree:(const RenderLayerRef)arg1 forRequestWithIdentifier:(unsigned long long)arg2 ;
-(void)blockWKViewMouseTrackingWithObject:(id)arg1 ;
-(void)unblockWKViewMouseTrackingWithObject:(id)arg1 ;
-(id)initWithDocument:(id)arg1 frame:(CGRect)arg2 context:(const Context*)arg3 pageGroup:(const PageGroup*)arg4 usePrivateBrowsing:(char)arg5 ;
-(id)initWithDocument:(id)arg1 frame:(CGRect)arg2 context:(const Context*)arg3 pageGroup:(const PageGroup*)arg4 privateBrowsingSession:(const SessionRef)arg5 ;
-(id)sourceProviderForAppleScript;
-(id)textProviderForAppleScript;
-(id)handleDoJavaScriptCommand:(id)arg1 ;
-(void)didMoveToDocument:(id)arg1 ;
-(void)_commonBrowserWKViewInit;
-(void)pageDidClose;
-(char)_isBlockingWKViewMouseTracking;
-(id)_hitTestWindowAtWindowCoordinate:(CGPoint)arg1 ;
-(id)createFullScreenWindow;
-(PassRefPtr<Safari::SearchableWebContentViewController>*)createContentViewController;
-(void)createRenderTreeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createRenderLayerTreeWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)webPageIsUnresponsive;
-(void)setWebPageIsUnresponsive:(char)arg1 ;
-(char)shouldBlockAllMouseEvents;
-(void)setShouldBlockAllMouseEvents:(char)arg1 ;
-(void)dealloc;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
@end

