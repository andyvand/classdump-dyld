/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSTableRowView.h>
#import <AddressBook/ABGroupListRowView.h>

@class NSTrackingArea, NSString;

@interface ABCleanGroupListRowView : NSTableRowView <ABGroupListRowView> {

	char _highlighted;
	NSTrackingArea* _contentTrackingArea;

}

@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSelectionAppearanceOfCellViews;
-(void)ABBookGroupListRowView_commonInit;
-(void)addTrackingAreaToVisibleRect;
-(void)enumerateGroupListCellViewsWithBlock:(/*^block*/id)arg1 ;
-(void)x_drawSelectionInRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isHighlighted;
-(void)setHighlighted:(char)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
@end

