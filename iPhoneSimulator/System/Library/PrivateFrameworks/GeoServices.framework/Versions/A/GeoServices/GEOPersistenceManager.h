/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOPersistenceManager : NSObject
+(char)phoneNumberMuidMappingFileExists;
+(char)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 version:(id*)arg3 error:(id*)arg4 ;
+(char)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 error:(id*)arg3 ;
+(char)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 error:(id*)arg3 ;
+(char)createMuidMappingDirectoryWithError:(id*)arg1 ;
@end

