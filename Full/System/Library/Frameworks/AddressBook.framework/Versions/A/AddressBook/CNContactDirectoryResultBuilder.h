/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/CNDirectoryResultBuilder.h>

@class CNMutableContact, NSString;

@interface CNContactDirectoryResultBuilder : NSObject <CNDirectoryResultBuilder> {

	CNMutableContact* _contact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builder;
-(id)build;
-(void)setMiddleName:(id)arg1 ;
-(void)setNickname:(id)arg1 ;
-(void)setBirthdayComponents:(id)arg1 ;
-(void)setOrganization:(id)arg1 ;
-(void)addEmailAddress:(id)arg1 withLabel:(id)arg2 ;
-(void)addPhoneNumber:(id)arg1 withLabel:(id)arg2 ;
-(void)addInstantMessageUsername:(id)arg1 service:(id)arg2 label:(id)arg3 ;
-(void)addPostalAddress:(id)arg1 withLabel:(id)arg2 ;
-(void)addValue:(id)arg1 withLabel:(id)arg2 toPropertyWithKey:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(void)setImageData:(id)arg1 ;
@end

