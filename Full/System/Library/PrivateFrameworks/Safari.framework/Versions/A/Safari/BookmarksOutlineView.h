/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/OutlineViewPlus.h>

@class SidebarSearchFieldView, NSSearchField;

@interface BookmarksOutlineView : OutlineViewPlus {

	SidebarSearchFieldView* _searchFieldView;

}

@property (assign,nonatomic) id<BookmarksOutlineViewDelegate> delegate; 
@property (nonatomic,readonly) NSSearchField * searchField; 
@property (nonatomic,readonly) SidebarSearchFieldView * searchFieldView;              //@synthesize searchFieldView=_searchFieldView - In the implementation block
-(NSSearchField *)searchField;
-(SidebarSearchFieldView *)searchFieldView;
-(void)_commonBookmarksOutlineViewInit;
-(void)_didRecogizeLongPress:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)keyDown:(id)arg1 ;
-(CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2 ;
-(char)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2 ;
-(double)_totalHeightOfTableView;
-(void)drawGridInClipRect:(CGRect)arg1 ;
@end

