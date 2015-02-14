/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TUpdateLayerView.h>

@class NSView;

@interface FI_TICloudNoDocumentsView : FI_TUpdateLayerView {

	TNSRef<NSView *> _dropTargetView;

}

@property (nonatomic,retain) NSView * dropTargetView; 
-(void)initCommon;
-(void)setDropTargetView:(NSView *)arg1 ;
-(NSView *)dropTargetView;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
@end

