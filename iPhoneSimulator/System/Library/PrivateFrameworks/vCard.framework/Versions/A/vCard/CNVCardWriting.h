/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNVCardWriting : NSObject
+(void)serializePerson:(id)arg1 withSerializer:(id)arg2 options:(id)arg3 ;
+(id)blacklistedMeCardFields;
+(id)blacklistFieldsForPerson:(id)arg1 options:(id)arg2 ;
+(void)makevCardWithBuilder:(id)arg1 serializer:(id)arg2 options:(id)arg3 ;
+(id)dataWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)stringWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

