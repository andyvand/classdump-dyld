/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNPropertyDescription.h>
#import <AddressBook/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNPostalAddressesDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copyFromContact:(id)arg1 to:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(char)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(char)isValue:(id)arg1 equivalentToValue:(id)arg2 ;
-(char)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2 ;
-(char)isValue:(id)arg1 equivalentToValue:(id)arg2 forKey:(id)arg3 ;
-(char)isStateValue:(id)arg1 equivalentToValue:(id)arg2 ;
-(char)isPostalCodeValue:(id)arg1 equivalentToValue:(id)arg2 ;
-(unsigned long long)indexOfUSState:(id)arg1 ;
-(unsigned long long)preferenceScoreForAddress:(id)arg1 ;
-(char)address:(id)arg1 winsTieBreakerAgainstAddress:(id)arg2 ;
-(unsigned long long)preferenceScoreForKey:(id)arg1 ;
-(char)postalCodeIsMoreComplete:(id)arg1 ;
-(char)address:(id)arg1 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)arg2 ;
-(char)address:(id)arg1 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)arg2 ;
-(id)init;
@end

