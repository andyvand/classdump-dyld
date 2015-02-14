/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKWKActionHandlerDelegate, OS_dispatch_queue;
#import <BKAssetEpub/BKAssetEpub-Structs.h>
@class WKView, NSURL, NSObject, NSMutableArray;

@interface BKWKActionHandler : NSObject {

	char _wantsLoadActions;
	char _hasCustomContextMenu;
	char _forceRepaintInProgress;
	WKView* _webView;
	id<BKWKActionHandlerDelegate> _delegate;
	NSURL* _loadingURL;
	NSObject*<OS_dispatch_queue> _repaintQueue;
	NSMutableArray* _repaintHandlers;

}

@property (nonatomic,readonly) WKView * webView;                                         //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) char wantsLoadActions;                                      //@synthesize wantsLoadActions=_wantsLoadActions - In the implementation block
@property (assign,nonatomic) char hasCustomContextMenu;                                  //@synthesize hasCustomContextMenu=_hasCustomContextMenu - In the implementation block
@property (assign,nonatomic,__weak) id<BKWKActionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * loadingURL;                                           //@synthesize loadingURL=_loadingURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> repaintQueue;                  //@synthesize repaintQueue=_repaintQueue - In the implementation block
@property (assign,nonatomic) char forceRepaintInProgress;                                //@synthesize forceRepaintInProgress=_forceRepaintInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * repaintHandlers;                           //@synthesize repaintHandlers=_repaintHandlers - In the implementation block
-(void)setRepaintQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)p_pageDidDraw;
-(void)p_pageDidScroll;
-(void)setLoadingURL:(NSURL *)arg1 ;
-(NSMutableArray *)repaintHandlers;
-(NSObject*<OS_dispatch_queue>)repaintQueue;
-(void)p_handleLinkClickForNavigationType:(unsigned)arg1 isMainFrame:(char)arg2 listener:(OpaqueWKFramePolicyListenerRef)arg3 URLRequest:(OpaqueWKURLRequestRef)arg4 ;
-(char)p_runJavaScriptConfirmWithTitle:(id)arg1 message:(id)arg2 ;
-(void)p_showContextMenuWithItems:(OpaqueWKArrayRef)arg1 atWKPoint:(WKPoint)arg2 ;
-(void)p_decidePolicyForNewWindowAction:(unsigned)arg1 isMainFrame:(char)arg2 listener:(OpaqueWKFramePolicyListenerRef)arg3 URLRequest:(OpaqueWKURLRequestRef)arg4 ;
-(void)p_decidePolicyForNavigationAction:(unsigned)arg1 isMainFrame:(char)arg2 listener:(OpaqueWKFramePolicyListenerRef)arg3 URLRequest:(OpaqueWKURLRequestRef)arg4 ;
-(NSURL *)loadingURL;
-(void)forceRepaintWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRepaintHandlers:(NSMutableArray *)arg1 ;
-(char)hasCustomContextMenu;
-(void)setHasCustomContextMenu:(char)arg1 ;
-(void)setWantsLoadActions:(char)arg1 ;
-(void)p_loadFailedWithError:(OpaqueWKErrorRef)arg1 ;
-(void)p_didNotHandleKeyEvent:(id)arg1 ;
-(void)p_achievedLayoutMilestones:(unsigned)arg1 ;
-(void)p_hideContextMenu;
-(char)forceRepaintInProgress;
-(void)p_installInWebView:(id)arg1 ;
-(void)p_uninstallFromWebView:(id)arg1 ;
-(void)setForceRepaintInProgress:(char)arg1 ;
-(char)wantsLoadActions;
-(WKView *)webView;
-(void)setDelegate:(id<BKWKActionHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<BKWKActionHandlerDelegate>)delegate;
-(id)initWithWebView:(id)arg1 ;
@end

