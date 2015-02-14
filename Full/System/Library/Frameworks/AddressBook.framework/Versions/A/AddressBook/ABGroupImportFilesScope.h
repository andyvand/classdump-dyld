/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABAccount, ABAddressBook, ABGroup, NSArray;

@interface ABGroupImportFilesScope : NSObject {

	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABGroup* _group;
	NSArray* _filenames;

}

@property (readonly) ABAccount * account;                      //@synthesize account=_account - In the implementation block
@property (readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) ABGroup * group;                          //@synthesize group=_group - In the implementation block
@property (readonly) NSArray * filenames;                      //@synthesize filenames=_filenames - In the implementation block
-(ABGroup *)group;
-(ABAddressBook *)addressBook;
-(id)initWithFilenames:(id)arg1 ;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3 filenames:(id)arg4 ;
-(void)dealloc;
-(NSArray *)filenames;
-(ABAccount *)account;
@end

