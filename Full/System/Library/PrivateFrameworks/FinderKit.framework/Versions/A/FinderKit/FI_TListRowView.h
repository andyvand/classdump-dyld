/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableRowView.h>

@class FI_TListViewController;

@interface FI_TListRowView : NSTableRowView {

	TFENode* _node;
	FI_TListViewController* _listViewController;
	BOOL _isDropTarget;

}

@property (assign,nonatomic) TFENode* node;                                            //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) FI_TListViewController * listViewController;              //@synthesize listViewController=_listViewController - In the implementation block
@property (assign,nonatomic) BOOL isDropTarget;                                        //@synthesize isDropTarget=_isDropTarget - In the implementation block
-(void)openNode;
-(FI_TListViewController *)listViewController;
-(void)setListViewController:(FI_TListViewController *)arg1 ;
-(void)setIsDropTarget:(BOOL)arg1 ;
-(void)updateCellSelectedStateAppearance;
-(BOOL)isDropTarget;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)updateLayer;
-(TFENode*)node;
-(void)setNode:(TFENode*)arg1 ;
@end

