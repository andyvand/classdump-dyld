/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AKUndoableCommand.h>

@class NSArray;

@interface AKDeletePeopleCommand : AKUndoableCommand {

	NSArray* _people;

}
+(id)commandWithPerson:(id)arg1 addressBook:(id)arg2 ;
+(id)commandWithPeople:(id)arg1 addressBook:(id)arg2 ;
-(id)initWithPeople:(id)arg1 addressBook:(id)arg2 ;
-(id)actionName;
-(void)executeWithSaveRequest:(id)arg1 ;
-(void)executeUndoWithSaveRequest:(id)arg1 ;
-(id)initWithPerson:(id)arg1 addressBook:(id)arg2 ;
-(void)dealloc;
@end

