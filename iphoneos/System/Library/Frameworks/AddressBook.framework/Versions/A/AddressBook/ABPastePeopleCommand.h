/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCommand.h>

@class NSMutableArray, ABGroup;

@interface ABPastePeopleCommand : ABCommand {

	NSMutableArray* _people;
	NSMutableArray* _linkedPeople;
	NSMutableArray* _peopleProperties;
	ABGroup* _selectedGroup;

}
-(void)undoIt;
-(void)redoIt;
-(char)doIt;
-(id)initWithGroup:(id)arg1 addressBook:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
@end

