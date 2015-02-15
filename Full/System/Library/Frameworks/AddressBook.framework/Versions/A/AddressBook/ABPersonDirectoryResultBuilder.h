/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/CNDirectoryResultBuilder.h>

@class ABPerson, ABAddressBook, NSString;

@interface ABPersonDirectoryResultBuilder : NSObject <CNDirectoryResultBuilder> {

	ABPerson* _product;
	ABAddressBook* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderWithAddressBook:(id)arg1 account:(id)arg2 ;
-(id)initWithAddressBook:(id)arg1 account:(id)arg2 ;
-(id)build;
-(void)setMiddleName:(id)arg1 ;
-(void)setNickname:(id)arg1 ;
-(void)setBirthdayComponents:(id)arg1 ;
-(void)setOrganization:(id)arg1 ;
-(void)addValue:(id)arg1 label:(id)arg2 property:(id)arg3 ;
-(void)addEmailAddress:(id)arg1 withLabel:(id)arg2 ;
-(void)addPhoneNumber:(id)arg1 withLabel:(id)arg2 ;
-(void)addInstantMessageUsername:(id)arg1 service:(id)arg2 label:(id)arg3 ;
-(void)addPostalAddress:(id)arg1 withLabel:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(void)setImageData:(id)arg1 ;
@end

