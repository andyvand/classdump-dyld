/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSToolbarItem.h>

@interface NSToolbarFlexibleSpaceItem : NSToolbarItem
+(id)itemIdentifier;
+(char)_resizeWeightSharedWithDuplicateItems;
+(double)_resizeWeight;
-(id)init;
-(void)dealloc;
-(id)view;
-(char)isSeparatorItem;
-(CGSize)maxSize;
-(id)initWithItemIdentifier:(id)arg1 ;
-(CGSize)minSize;
-(void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2 ;
-(char)_emptyContents;
-(void)_separatorFinishInit;
-(char)wantsToDrawIconInDisplayMode:(unsigned long long)arg1 ;
-(char)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1 ;
-(char)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)arg1 ;
-(char)_needsRedisplayWhenBeginningToolbarEditing;
-(char)allowsDuplicatesInToolbar;
-(void)setTrackedSplitView:(id)arg1 ;
-(id)trackedSplitView;
-(void)setTrackedSplitViewDividerIndex:(long long)arg1 ;
-(long long)trackedSplitViewDividerIndex;
@end

