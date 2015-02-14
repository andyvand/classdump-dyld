/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTreeController.h>
#import <FinderKit/NSOutlineViewDataSource.h>

@class FI_TOutlineView, NSString;

@interface FI_TOutlineViewDataSource : NSTreeController <NSOutlineViewDataSource> {

	FI_TOutlineView* _outlineView;

}

@property (assign,nonatomic) FI_TOutlineView * outlineView;              //@synthesize outlineView=_outlineView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initCommon;
-(void)awakeCommon;
-(void)bindToTableColumn:(id)arg1 ;
-(void)unbindFromTableColumn:(id)arg1 ;
-(id)flattenedContent;
-(void)finalize;
-(void)dealloc;
-(void)clear;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(FI_TOutlineView *)outlineView;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)initWithContent:(id)arg1 ;
-(void)setOutlineView:(FI_TOutlineView *)arg1 ;
@end

