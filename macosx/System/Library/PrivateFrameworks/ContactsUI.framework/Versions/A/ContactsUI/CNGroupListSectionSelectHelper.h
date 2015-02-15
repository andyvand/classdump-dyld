/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ABGroupSelectHelper.h>

@protocol CNContactPickerInternalResponseDelegate;
@class CNContactPickerView, ABPersonListSearchController, NSString;

@interface CNGroupListSectionSelectHelper : NSObject <ABGroupSelectHelper> {

	CNContactPickerView* _pickerView;
	id<CNContactPickerInternalResponseDelegate> _delegate;
	ABPersonListSearchController* _searchController;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 contactPickerView:(id)arg2 searchController:(id)arg3 sectionIdentifier:(id)arg4 ;
-(void)showSection;
-(void)updateSearchConfiguration;
-(void)performSelect;
@end
