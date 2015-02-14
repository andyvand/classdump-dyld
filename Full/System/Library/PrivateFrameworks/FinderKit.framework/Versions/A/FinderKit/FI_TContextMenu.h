/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSMenu.h>

@interface FI_TContextMenu : NSMenu
+(id)contextMenuWithDelegate:(id)arg1 ;
+(BOOL)handleMouseDownAsRightMouseDown:(id)arg1 ;
+(BOOL)allowContextualMenuForEvent:(id)arg1 ;
+(void)contextMenuClickedOnContainer:(const TFENode*)arg1 event:(id)arg2 clickedView:(id)arg3 browserViewController:(id)arg4 ;
+(void)contextMenuClickedOnNodes:(const TFENodeVector*)arg1 event:(id)arg2 clickedView:(id)arg3 browserViewController:(id)arg4 ;
+(void)showContextMenuInView:(id)arg1 atPoint:(const CGPoint*)arg2 ;
+(void)clearContextMenuState;
+(void)buildContextMenu:(id)arg1 forContext:(unsigned)arg2 browserViewController:(id)arg3 clickedView:(id)arg4 maxItems:(unsigned long long)arg5 addServices:(BOOL)arg6 ;
+(void)handleContextMenuCommon:(unsigned)arg1 nodes:(const TFENodeVector*)arg2 event:(id)arg3 clickedView:(id)arg4 browserViewController:(id)arg5 addPlugIns:(BOOL)arg6 ;
+(void)addTagColorItemsToMenu:(id)arg1 target:(id)arg2 setTagColor:(SEL)arg3 ;
+(void)populateTagActionsMenu:(id)arg1 target:(id)arg2 deleteTag:(SEL)arg3 renameTag:(SEL)arg4 setTagColor:(SEL)arg5 ;
-(void)configureForTagNode:(const TFENode*)arg1 browserViewController:(id)arg2 clickedView:(id)arg3 ;
-(void)configureFromMenuNeedsUpdate:(id)arg1 clickedView:(id)arg2 container:(BOOL)arg3 event:(id)arg4 selectedNodes:(const TFENodeVector*)arg5 ;
-(void)menuDidCompleteInteraction:(id)arg1 ;
-(void)dealloc;
-(id)initWithTitle:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

