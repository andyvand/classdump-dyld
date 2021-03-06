/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCommand.h>

@class NSMutableArray, ABGroup;

@interface ABGroupCommand : ABCommand {

	NSMutableArray* _records;
	ABGroup* _group;

}
-(id)initWithGroup:(id)arg1 records:(id)arg2 addressBook:(id)arg3 ;
-(id)addRecordsToGroup;
-(id)removeRecordsFromGroup;
-(void)finalize;
-(void)dealloc;
@end

