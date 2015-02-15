/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/QLPreviewPanelDataSource.h>
#import <FinderKit/QLPreviewPanelDelegate.h>
#import <FinderKit/FIAliasResolution.h>
#import <FinderKit/TCoalescingNodeObserverProtocol.h>

@protocol TQLPreviewWindowControllerProtocol;
@class NSString;

@interface FI_TQLPreviewWindowController : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate, FIAliasResolution, TCoalescingNodeObserverProtocol> {

	TFENodeVector* _nodes;
	id<TQLPreviewWindowControllerProtocol> _activeViewController;
	unsigned _avcRespondsToFlags;
	TNSRef<QLPreviewPanel *> _previewPanel;
	TCoalescingNodeObserverCocoaBridge* _nodeObserver;
	TQLPreviewQTEjectHelper* _ejectHelper;
	BOOL _canZoom;
	BOOL _positionNearPreviewItem;

}

@property (assign,nonatomic) id<TQLPreviewWindowControllerProtocol> activeViewController;              //@synthesize activeViewController=_activeViewController - In the implementation block
@property (assign,nonatomic) BOOL positionNearPreviewItem;                                             //@synthesize positionNearPreviewItem=_positionNearPreviewItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)previewPanelWillClose:(id)arg1 ;
+(BOOL)panelIsShowing;
+(BOOL)panelExists;
+(BOOL)isActiveViewController:(id)arg1 ;
+(BOOL)quickLookShouldOpenFullscreenWithEvent:(id)arg1 ;
+(id)quickLookMenuItemTitleForNodes:(const TFENodeVector*)arg1 actualCount:(unsigned long long)arg2 fullScreen:(BOOL)arg3 ;
+(id)controller;
+(void)initialize;
-(void)nodesChanged:(const vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > >*)arg1 inObservedNode:(const TFENode*)arg2 ;
-(void)nodesDeleted:(const TFENodeVector*)arg1 fromObservedNode:(const TFENode*)arg2 ;
-(void)nodesGoingAway:(const TFENodeVector*)arg1 ;
-(id<TQLPreviewWindowControllerProtocol>)activeViewController;
-(void)updateDisplayedDates;
-(void)setActiveViewController:(id<TQLPreviewWindowControllerProtocol>)arg1 ;
-(void)setPositionNearPreviewItem:(BOOL)arg1 ;
-(void)updatePanelConfigurationForBackupBrowser:(BOOL)arg1 ;
-(void)updatePreviewPanel;
-(void)refreshCurrentPreviewNode;
-(void)removeNodes:(const TFENodeVector*)arg1 ;
-(void)setNodes:(const TFENodeVector*)arg1 ;
-(void)alias:(const TFENode*)arg1 resolvedAs:(const TFENode*)arg2 temporaryNode:(const TFENode*)arg3 ;
-(void)showFullScreen:(BOOL)arg1 ;
-(void)setCanZoom:(BOOL)arg1 ;
-(BOOL)positionNearPreviewItem;
-(id)previewPanel:(id)arg1 sharedPreviewViewForPreviewItem:(id)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)reloadData;
-(void)hide;
-(void)beginPreviewPanelControl:(id)arg1 ;
-(void)endPreviewPanelControl:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewPanel:(id)arg1 ;
-(id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(char)previewPanel:(id)arg1 handleEvent:(id)arg2 ;
-(char)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(char)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2 ;
-(char)previewPanel:(id)arg1 shouldShowShareButtonForItem:(id)arg2 ;
-(const TFENodeVector*)nodes;
@end

