/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABFuture.h>

@class ABAddressBook, ABPerson;

@interface CNPhotoFuture : ABFuture {

	ABAddressBook* _addressBook;
	ABPerson* _person;
	long long _tag;

}
-(id)initWithAddressBook:(id)arg1 person:(id)arg2 ;
-(id)photoForImageData:(id)arg1 ;
-(void)didCancel;
-(void)dealloc;
-(void)start;
@end

