/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@interface CNContactNameOrderImpl : NSObject
+(id)nameOrderForContact:(id)arg1 ;
+(id)lastNameFirstOrder;
+(id)defaultOrder;
+(char)isChineseJapaneseKoreanContact:(id)arg1 ;
+(char)isEmptyNameContact:(id)arg1 ;
+(id)defaultNewContactOrder;
+(id)firstNameFirstOrder;
-(id)nameKeys;
-(id)phoneticNameKeys;
-(id)fullNameForContact:(id)arg1 ;
-(id)phoneticFullNameForContact:(id)arg1 ;
-(id)fullNameForContact:(id)arg1 emphasisRange:(NSRange*)arg2 ;
-(id)attributedFullNameForContact:(id)arg1 ;
-(long long)nameOrderEnum;
@end

