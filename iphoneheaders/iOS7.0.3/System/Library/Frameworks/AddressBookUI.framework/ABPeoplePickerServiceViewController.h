/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPeoplePickerNavigationController.h>
#import <AddressBookUI/ABPeoplePickerNavigationControllerInternalDelegate.h>
#import <AddressBookUI/ABPeoplePickerServiceViewControllerProtocol.h>

@interface ABPeoplePickerServiceViewController : ABPeoplePickerNavigationController <ABPeoplePickerNavigationControllerInternalDelegate, ABPeoplePickerServiceViewControllerProtocol>
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)setupAsAddressBook:(id)arg1 withStyle:(id)arg2 ;
-(id)remoteViewControllerProxy;
-(void)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 replyHandler:(/*^block*/ id)arg5 ;
-(void)dealloc;
-(id)init;
-(void)_willAppearInRemoteViewController;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)setDisplayedProperties:(id)arg1 ;
@end
