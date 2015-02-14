/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/NSRemoteViewBase.h>

@class NSView, NSString;

@interface NSWindowCentricRemoteView : NSRemoteViewBase {

	unsigned _serviceWindowID;
	NSView* _serviceMirrorView;
	NSString* _windowRightsToken;

}
-(CGImageRef)snapshot;
-(void)syncServiceWindow:(id)arg1 ;
-(void)remoteWindowLevelDidChange:(id)arg1 ;
-(void)deallocOnAppKitThread;
-(void)invalidateWindowRelationships;
-(char)shouldUpdateWindowEdgeResizingRegion;
-(char)shouldInformServiceOfKeynessChange:(id)arg1 ;
-(void)advanceToConfigPhase;
-(char)maintainAssociationForcingDisassociation:(char)arg1 ;
-(void)stopAwaitingWindowRights;
-(char)setServiceWindowBorderViewLayerContextID:(unsigned)arg1 ;
-(unsigned)windowIDToPassToSetFrontProcess;
-(char)setServiceWindowOrigin:(const CGSize*)arg1 ;
-(char)shouldNotifyServiceOfChangeToHostOriginOrSize;
-(void)_serviceDidFinishDisplayingAfterDidChangeAppearance;
-(void)_ditchMirroredServiceWindowContents;
-(int)ensureWindow:(unsigned)arg1 isAtWindowLevel:(int)arg2 ;
-(int)insertWindowsIntoRemoteWindowOrderingGroup:(unsigned)arg1 accessoryWindow:(unsigned)arg2 ;
-(int)bifurcateWindowOrderingGroup;
-(int)askServiceToAddWindow:(unsigned)arg1 toOrderingGroup:(unsigned)arg2 op:(int)arg3 ;
-(int)addWindow:(unsigned)arg1 toOrderingGroup:(unsigned)arg2 op:(int)arg3 serviceAnchor:(unsigned)arg4 ;
-(unsigned)filterList:(unsigned*)arg1 withCount:(unsigned)arg2 forUnminimizingSheet:(unsigned)arg3 anchoredBy:(unsigned)arg4 ;
-(unsigned)omitServiceAndAccessoryWindow:(unsigned)arg1 fromList:(unsigned*)arg2 withCount:(unsigned)arg3 ;
-(unsigned)insertServiceAndAccessoryWindow:(unsigned)arg1 intoList:(unsigned*)arg2 withCount:(unsigned)arg3 andRemoteWindow:(unsigned)arg4 ;
-(int)buildWindowOrderingGroup:(unsigned*)arg1 withCount:(unsigned)arg2 onConnection:(unsigned)arg3 ;
-(char)placeServiceWindowAtOffset:(CGSize*)arg1 serviceWindowSize:(const CGSize*)arg2 ;
-(char)associateWindows:(id)arg1 newContainingWindowID:(unsigned)arg2 ;
-(void)_ensureMirroredServiceWindowContents;
-(char)disassociateWindows;
-(void)didChangeScreenParameters:(id)arg1 ;
-(void)renewGState;
@end

