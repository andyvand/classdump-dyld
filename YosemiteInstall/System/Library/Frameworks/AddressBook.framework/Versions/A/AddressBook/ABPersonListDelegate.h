/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonListDelegate <NSObject>
@optional
-(char)personListCanDeleteContacts:(id)arg1;
-(char)personList:(id)arg1 deleteContactsWithSender:(id)arg2;
-(void)entriesChangedInPersonList:(id)arg1;
-(void)personListDidChangeAddressBook:(id)arg1;

@required
-(void)personList:(id)arg1 didSelectEntries:(id)arg2;
-(void)personListDidDoubleClick:(id)arg1;
-(unsigned long long)personList:(id)arg1 validateFilenamesDrop:(id)arg2;
-(unsigned long long)personList:(id)arg1 validateGroupsDrop:(id)arg2;
-(char)personList:(id)arg1 acceptFilenamesDrop:(id)arg2;
-(char)personList:(id)arg1 acceptGroupsDrop:(id)arg2;
-(void)toggleCardEditingMode:(id)arg1;
-(void)setCardEditingMode:(char)arg1;
-(char)shouldDrawHorizontalSeparators;

@end
