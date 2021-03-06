/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>
#import <AddressBook/ABSaveRequestCommand.h>

@class CNContactStore, NSString;

@interface AKUndoableCommand : ABBookUndoableCommand <ABSaveRequestCommand> {

	CNContactStore* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(void)executeUndo;
-(void)visit:(id)arg1 ;
-(void)executeRedo;
-(void)willExecute;
-(void)didExecute;
-(void)executeWithSaveRequest:(id)arg1 ;
-(void)executeUndoWithSaveRequest:(id)arg1 ;
-(void)executeRedoWithSaveRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithAddressBook:(id)arg1 ;
@end

