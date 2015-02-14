/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTextField.h>

@class BookmarksSidebarTableCellView;

@interface BookmarksSidebarTitleTextField : NSTextField {

	BookmarksSidebarTableCellView* _bookmarksSidebarTableCellView;

}

@property (assign,nonatomic,__weak) BookmarksSidebarTableCellView * bookmarksSidebarTableCellView;              //@synthesize bookmarksSidebarTableCellView=_bookmarksSidebarTableCellView - In the implementation block
+(void)initialize;
-(BookmarksSidebarTableCellView *)bookmarksSidebarTableCellView;
-(void)bookmarksSidebarTitleTextViewBecameFirstResponder;
-(void)bookmarksSidebarTitleTextViewResignFirstResponder;
-(void)setBookmarksSidebarTableCellView:(BookmarksSidebarTableCellView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSEdgeInsets)alignmentRectInsets;
-(void)setBezeled:(char)arg1 ;
@end

