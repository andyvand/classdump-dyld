/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class CNContactListView, CNGroupListView, ABBookSearchField, NSScrollView, NSView, CNGroupListBackgroundView, CNContactPickerBorderView, NSStackView, CNContactPickerViewLayout, NSMutableDictionary, NSArray;

@interface CNContactPickerView : NSView {

	char _groupListVisible;
	char _searchFieldVisible;
	CNContactListView* _contactListView;
	CNGroupListView* _groupListView;
	ABBookSearchField* _searchField;
	NSScrollView* _contactListScrollView;
	NSView* _groupListScrollView;
	CNGroupListBackgroundView* _groupListBackgroundView;
	CNContactPickerBorderView* _horizontalBorderView;
	CNContactPickerBorderView* _verticalBorderView;
	NSStackView* _stackView;
	NSView* _searchFieldRowView;
	NSView* _mainRowView;
	CNContactPickerViewLayout* _pickerLayout;
	NSMutableDictionary* _sections;
	NSView* _contentView;
	NSView* _rightTopBarView;
	NSArray* _customConstraints;

}

@property (__weak) CNContactListView * contactListView;                              //@synthesize contactListView=_contactListView - In the implementation block
@property (__weak) CNGroupListView * groupListView;                                  //@synthesize groupListView=_groupListView - In the implementation block
@property (retain) ABBookSearchField * searchField;                                  //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) char groupListVisible;                                  //@synthesize groupListVisible=_groupListVisible - In the implementation block
@property (assign,nonatomic) char searchFieldVisible;                                //@synthesize searchFieldVisible=_searchFieldVisible - In the implementation block
@property (retain) NSScrollView * contactListScrollView;                             //@synthesize contactListScrollView=_contactListScrollView - In the implementation block
@property (retain) NSView * groupListScrollView;                                     //@synthesize groupListScrollView=_groupListScrollView - In the implementation block
@property (retain) CNGroupListBackgroundView * groupListBackgroundView;              //@synthesize groupListBackgroundView=_groupListBackgroundView - In the implementation block
@property (retain) CNContactPickerBorderView * horizontalBorderView;                 //@synthesize horizontalBorderView=_horizontalBorderView - In the implementation block
@property (retain) CNContactPickerBorderView * verticalBorderView;                   //@synthesize verticalBorderView=_verticalBorderView - In the implementation block
@property (retain) NSStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSView * searchFieldRowView;                                      //@synthesize searchFieldRowView=_searchFieldRowView - In the implementation block
@property (retain) NSView * mainRowView;                                             //@synthesize mainRowView=_mainRowView - In the implementation block
@property (retain) CNContactPickerViewLayout * pickerLayout;                         //@synthesize pickerLayout=_pickerLayout - In the implementation block
@property (retain) NSMutableDictionary * sections;                                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSView * rightTopBarView;                               //@synthesize rightTopBarView=_rightTopBarView - In the implementation block
@property (retain) NSArray * customConstraints;                                      //@synthesize customConstraints=_customConstraints - In the implementation block
-(void)addSection:(id)arg1 ;
-(void)setupResponderChain;
-(void)showSectionWithIdentifier:(id)arg1 ;
-(void)setSearchFieldVisible:(char)arg1 ;
-(void)setContactListView:(CNContactListView *)arg1 ;
-(CNContactListView *)contactListView;
-(NSArray *)customConstraints;
-(void)setCustomConstraints:(NSArray *)arg1 ;
-(void)setGroupListVisible:(char)arg1 ;
-(void)setGroupListView:(CNGroupListView *)arg1 ;
-(char)searchFieldVisible;
-(CNGroupListView *)groupListView;
-(void)setSearchFieldRowView:(NSView *)arg1 ;
-(void)setMainRowView:(NSView *)arg1 ;
-(NSView *)searchFieldRowView;
-(NSView *)mainRowView;
-(id)sectionWithIdentifier:(id)arg1 ;
-(NSView *)rightTopBarView;
-(void)setRightTopBarView:(NSView *)arg1 ;
-(char)groupListVisible;
-(NSScrollView *)contactListScrollView;
-(void)setContactListScrollView:(NSScrollView *)arg1 ;
-(NSView *)groupListScrollView;
-(void)setGroupListScrollView:(NSView *)arg1 ;
-(CNGroupListBackgroundView *)groupListBackgroundView;
-(void)setGroupListBackgroundView:(CNGroupListBackgroundView *)arg1 ;
-(CNContactPickerBorderView *)horizontalBorderView;
-(void)setHorizontalBorderView:(CNContactPickerBorderView *)arg1 ;
-(CNContactPickerBorderView *)verticalBorderView;
-(void)setVerticalBorderView:(CNContactPickerBorderView *)arg1 ;
-(CNContactPickerViewLayout *)pickerLayout;
-(void)setPickerLayout:(CNContactPickerViewLayout *)arg1 ;
-(ABBookSearchField *)searchField;
-(void)setSearchField:(ABBookSearchField *)arg1 ;
-(NSMutableDictionary *)sections;
-(void)setSections:(NSMutableDictionary *)arg1 ;
-(void)updateConstraints;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(char)canSmoothFontsInLayer;
-(void)awakeFromNib;
-(id)views;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)updateLayout;
@end

