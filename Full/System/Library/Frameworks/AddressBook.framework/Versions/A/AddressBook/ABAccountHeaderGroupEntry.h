/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABHeaderGroupEntry.h>

@class ABAddressBook;

@interface ABAccountHeaderGroupEntry : ABHeaderGroupEntry {

	ABAddressBook* _addressBook;

}
-(id)createGroupInSectionHelperWithFactory:(id)arg1 ;
-(id)selectHelperWithFactory:(id)arg1 ;
-(char)canCreateGroupInSection;
-(id)iconWithStyleProvider:(id)arg1 ;
-(id)actionScope;
-(id)initWithName:(id)arg1 account:(id)arg2 children:(id)arg3 addressBook:(id)arg4 ;
-(void)dealloc;
@end

