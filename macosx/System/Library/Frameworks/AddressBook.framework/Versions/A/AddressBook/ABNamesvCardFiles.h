/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABNamesvCardFiles : NSObject
+(id)nameWithStrings:(id)arg1 ;
+(id)nameForPeople:(id)arg1 ;
+(id)pathWithNames:(id)arg1 inDirectory:(id)arg2 ;
+(id)nameForPerson:(id)arg1 ;
+(id)nameForPerson:(id)arg1 andPerson:(id)arg2 ;
+(id)nameForPerson:(id)arg1 andOthers:(unsigned long long)arg2 ;
+(id)nameForPersonAsCompany:(id)arg1 ;
+(id)nameForPersonAsPerson:(id)arg1 ;
+(id)stringByReplacingUnsafePathCharactersInString:(id)arg1 ;
+(id)unconflictedNameWithName:(id)arg1 andName:(id)arg2 ;
+(id)unconflictedNameWithName:(id)arg1 andOthers:(unsigned long long)arg2 ;
+(id)nameWithStrings:(id)arg1 conflicts:(unsigned long long)arg2 ;
+(id)nameWithName:(id)arg1 conflicts:(unsigned long long)arg2 ;
+(id)nameWithName:(id)arg1 andName:(id)arg2 conflicts:(unsigned long long)arg3 ;
+(id)nameWithName:(id)arg1 andOthers:(unsigned long long)arg2 conflicts:(unsigned long long)arg3 ;
+(id)unconflictedNameWithName:(id)arg1 ;
+(id)conflictedNameWithName:(id)arg1 conflicts:(unsigned long long)arg2 ;
+(id)conflictedNameWithName:(id)arg1 andName:(id)arg2 conflicts:(unsigned long long)arg3 ;
+(id)conflictedNameWithName:(id)arg1 andOthers:(unsigned long long)arg2 conflicts:(unsigned long long)arg3 ;
+(id)pathWithNames:(id)arg1 inDirectory:(id)arg2 fileManager:(id)arg3 ;
@end

