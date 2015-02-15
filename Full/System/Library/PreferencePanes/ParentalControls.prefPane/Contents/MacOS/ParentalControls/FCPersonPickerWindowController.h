/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ParentalControls/ParentalControls-Structs.h>
#import <AppKit/NSWindowController.h>
#import <ParentalControls/FCListViewDelegateMethods.h>

@class NSTextField, NSButton, NSTabView, FCContactEntryView, FCListView, ABPeoplePickerView, ABRecord, NSString;

@interface FCPersonPickerWindowController : NSWindowController <FCListViewDelegateMethods> {

	NSTextField* firstNameField;
	NSTextField* lastNameField;
	NSButton* disclosureButton;
	NSButton* addButton;
	NSTabView* tabview;
	FCContactEntryView* insertRowPrototypeView;
	FCListView* listView;
	NSButton* addPersonToMyAddressBookButton;
	ABPeoplePickerView* peoplePickerView;
	ABRecord* personToAdd;
	NSString* previousFirstName;
	NSString* previousLastName;
	CGRect originalWindowFrame;
	id target;

}
+(id)personPickerWithTarget:(id)arg1 ;
-(void)peoplePickerNameSelectionDidChangeNotificationHandler:(id)arg1 ;
-(void)toggleAddressBook:(id)arg1 ;
-(void)validateAddButton;
-(void)concludeWindowLife;
-(void)accountListDidChange;
-(void)returnPeople:(id)arg1 ;
-(void)cancelOperation;
-(void)addButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
@end
