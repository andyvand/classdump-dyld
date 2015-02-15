/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_IPropertyValueController.h>
#import <FinderKit/QLPreviewViewDelegate.h>
#import <FinderKit/FIAliasResolution.h>

@class NSString;

@interface FI_TQLPreviewViewController : FI_IPropertyValueController <QLPreviewViewDelegate, FIAliasResolution> {

	TInfoPreviewViewQTEjectHelper* _ejectHelper;
	TNSRef<FI_TQLPreviewViewZoomController *> _zoomController;
	TNotificationCenterObserver* _timeMachineWillStartObserver;
	TKeyValueBinder* _previewItemBinder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)initCommon;
-(void)viewLoaded;
-(void)alias:(const TFENode*)arg1 resolvedAs:(const TFENode*)arg2 temporaryNode:(const TFENode*)arg3 ;
-(BOOL)adjustSize:(BOOL)arg1 ;
-(void)handleBulkNodesChanged:(const map<const TFENode, const std::__1::vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > > *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const std::__1::vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > > *const> > >*)arg1 observedNodes:(const TFENodeVector*)arg2 ;
-(void)handleBulkNodesDeleted:(const map<const TFENode, const TFENodeVector *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const TFENodeVector *const> > >Ref)arg1 observedNodes:(const TFENodeVector*)arg2 ;
-(void)handleNodesGoingAway:(const TFENodeVector*)arg1 ;
-(void)adjustPreviewFrame;
-(void)previewView:(id)arg1 doubleClickedOnPreviewItem:(id)arg2 ;
-(void)stopPlaying;
-(void)finalize;
-(void)dealloc;
-(void)flush;
-(void)setView:(id)arg1 ;
-(BOOL)isResizable;
-(void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2 ;
-(void)previewView:(id)arg1 willShowPreviewItem:(id)arg2 ;
-(unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3 ;
-(char)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3 ;
-(char)previewView:(id)arg1 writePreviewItem:(id)arg2 toPasteboard:(id)arg3 ;
-(void)refresh;
@end

