/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCollectionViewItem.h>

@class NSArray;

@interface ABPostalAddressCollectionViewItem : ABCollectionViewItem {

	NSArray* _countryMenuItems;
	unsigned long long _updateViewCallDepth;

}
-(id)postalAddress;
-(void)addressSubfieldTextDidChange:(id)arg1 ;
-(void)_updateViewLabelMenu;
-(void)_updateViewValue;
-(void)datumView:(id)arg1 textDidChange:(id)arg2 ;
-(double)yOffsetOfValueView;
-(double)yOffsetOfEditView;
-(id)postalAddressRowView;
-(id)editPostalAddressRowView;
-(SEL)mutatorSelectorForTag:(unsigned long long)arg1 ;
-(void)updateCountryMenu;
-(id)countryMenuItems;
-(void)addressFormatChanged:(id)arg1 ;
-(id)nonEditViewFocusView;
-(id)editViewFocusView;
-(void)mapsButtonPressed:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

