/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AKUndoableCommand.h>

@class CNContactIdentifier;

@interface AKSetMeCardCommand : AKUndoableCommand {

	CNContactIdentifier* _newIdentifier;
	CNContactIdentifier* _originalIdentifier;

}
+(id)commandWithIdentifier:(id)arg1 addressBook:(id)arg2 ;
-(id)actionName;
-(void)executeWithSaveRequest:(id)arg1 ;
-(void)executeUndoWithSaveRequest:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 addressBook:(id)arg2 ;
-(void)dealloc;
@end

