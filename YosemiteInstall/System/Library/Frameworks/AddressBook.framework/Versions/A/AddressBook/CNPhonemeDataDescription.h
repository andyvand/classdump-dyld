/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNPropertyDescription.h>
#import <AddressBook/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNPhonemeDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copyFromContact:(id)arg1 to:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(char)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(id)init;
@end

