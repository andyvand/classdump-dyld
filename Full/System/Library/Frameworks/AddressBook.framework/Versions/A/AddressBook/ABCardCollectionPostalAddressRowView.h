/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCardCollectionRowView.h>

@class CNPostalAddress, ABWidthLimitingStackView, NSArray;

@interface ABCardCollectionPostalAddressRowView : ABCardCollectionRowView {

	CNPostalAddress* _postalAddress;
	ABWidthLimitingStackView* _addressFieldsContainer;
	char _isEditing;
	NSArray* _postalConstraints;

}

@property (retain) CNPostalAddress * postalAddress;                                //@synthesize postalAddress=_postalAddress - In the implementation block
@property (retain) ABWidthLimitingStackView * addressFieldsContainer;              //@synthesize addressFieldsContainer=_addressFieldsContainer - In the implementation block
@property (readonly) char isEditing;                                               //@synthesize isEditing=_isEditing - In the implementation block
-(ABWidthLimitingStackView *)addressFieldsContainer;
-(id)baselineAlignmentConstraint;
-(id)labelTopInsetConstraint;
-(id)trailingEdgePin;
-(id)firstTextField;
-(void)updateValueView;
-(id)valueView;
-(CNPostalAddress *)postalAddress;
-(void)didInsertIntoCollectionView:(id)arg1 ;
-(void)rebuildAddressEntryFields;
-(char)isEmptyAndNotFirstResponder;
-(void)processControlTextDidChange:(id)arg1 ;
-(void)drawValueHighlightRect:(CGRect)arg1 labelRect:(CGRect)arg2 ;
-(id)actionGlyphButton;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(void)setAddressFieldsEnabled:(char)arg1 ;
-(void)highlightSearchTerms:(id)arg1 ;
-(void)textFieldWillBecomeFirstResponder:(id)arg1 ;
-(void)textFieldWillResignFirstResponder:(id)arg1 ;
-(void)setAddressFieldsContainer:(ABWidthLimitingStackView *)arg1 ;
-(char)hasValue;
-(void)dealloc;
-(void)updateConstraints;
-(char)isEditing;
-(void)controlTextDidChange:(id)arg1 ;
-(id)updateKeyViewLoop;
@end

