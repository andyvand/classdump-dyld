/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ABCardCollectionViewDataSource.h>
#import <ContactsUI/ABCardCollectionViewDelegate.h>

@protocol CNContactListCellViewControllerDelegate;
@class ABCollectionViewItemFactory, AKCardViewDataSource, CNContactStore, ABAddressBook, CNContactPickerCardViewStyleProvider, NSString, CNContactListCellView, NSArray, CNContact;

@interface CNContactListCellViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate> {

	ABCollectionViewItemFactory* _itemFactory;
	AKCardViewDataSource* _dataSource;
	CNContactStore* _contactStore;
	ABAddressBook* _addressBook;
	CNContactPickerCardViewStyleProvider* _styleProvider;
	NSString* _contactIdentifier;
	NSString* _linkIdentifier;
	char _expanded;
	CNContactListCellView* _cellView;
	id<CNContactListCellViewControllerDelegate> _delegate;
	NSArray* _displayedKeys;

}

@property (__weak) CNContactListCellView * cellView;                                  //@synthesize cellView=_cellView - In the implementation block
@property (__weak) id<CNContactListCellViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;                         //@synthesize expanded=_expanded - In the implementation block
@property (copy) NSArray * displayedKeys;                                             //@synthesize displayedKeys=_displayedKeys - In the implementation block
@property (readonly) CNContact * contact; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)displayedKeys;
-(id)makeDataSource;
-(char)shouldEnableCell;
-(void)refreshCollectionView;
-(id)fetchContact;
-(char)hasDisplayedKeys;
-(char)hasValuesForDisplayedKeys;
-(id)scopeForItem:(id)arg1 ;
-(CNContactListCellView *)cellView;
-(void)setCellView:(CNContactListCellView *)arg1 ;
-(void)setEntry:(id)arg1 ;
-(id)collectionItems;
-(void)itemWasClicked:(id)arg1 ;
-(void)setDisplayedKeys:(NSArray *)arg1 ;
-(char)isMe;
-(id)init;
-(void)setDelegate:(id<CNContactListCellViewControllerDelegate>)arg1 ;
-(id<CNContactListCellViewControllerDelegate>)delegate;
-(char)isEditing;
-(void)awakeFromNib;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(CNContact *)contact;
-(void)setAddressBook:(id)arg1 ;
@end

