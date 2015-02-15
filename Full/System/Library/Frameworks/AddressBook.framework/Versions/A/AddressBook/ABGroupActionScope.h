/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAccount, ABAddressBook, ABRecordContext, ABGroup;

@interface ABGroupActionScope : NSObject {

	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABRecordContext* _recordContext;
	ABGroup* _group;

}

@property (readonly) ABAccount * account;                          //@synthesize account=_account - In the implementation block
@property (readonly) ABAddressBook * addressBook;                  //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) ABRecordContext * recordContext;              //@synthesize recordContext=_recordContext - In the implementation block
@property (readonly) ABGroup * group;                              //@synthesize group=_group - In the implementation block
-(ABGroup *)group;
-(ABAddressBook *)addressBook;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3 ;
-(ABRecordContext *)recordContext;
-(id)groups;
-(void)dealloc;
-(ABAccount *)account;
-(id)initWithGroup:(id)arg1 ;
@end

