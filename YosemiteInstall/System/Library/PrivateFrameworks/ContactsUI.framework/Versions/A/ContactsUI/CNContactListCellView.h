/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSView.h>

@class CNContactListCellViewController, ABCardCollectionView, NSTextField, NSArray;

@interface CNContactListCellView : NSView {

	CNContactListCellViewController* _controller;
	ABCardCollectionView* _collectionView;
	NSTextField* _nameView;
	NSArray* _customConstraints;

}

@property (retain) CNContactListCellViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (__weak) ABCardCollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (retain) NSTextField * nameView;                                    //@synthesize nameView=_nameView - In the implementation block
@property (retain) NSArray * customConstraints;                               //@synthesize customConstraints=_customConstraints - In the implementation block
-(void)setName:(id)arg1 emphasisRange:(NSRange)arg2 ;
-(NSTextField *)nameView;
-(void)setNameView:(NSTextField *)arg1 ;
-(NSArray *)customConstraints;
-(void)setCustomConstraints:(NSArray *)arg1 ;
-(void)setCollectionView:(ABCardCollectionView *)arg1 ;
-(id)metrics;
-(void)setEnabled:(char)arg1 ;
-(void)updateConstraints;
-(CNContactListCellViewController *)controller;
-(void)setController:(CNContactListCellViewController *)arg1 ;
-(void)awakeFromNib;
-(ABCardCollectionView *)collectionView;
-(id)views;
@end
