/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCDRecord.h>

@class NSString;

@interface ABCDDeletedRecordLog : ABCDRecord {

	id _creationDate;

}

@property (copy) NSString * deletedRecordUniqueId; 
+(char)_isPublicRecord;
+(id)_table;
+(id)abEntityName;
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(void)doRemoveRecordsAndCreateLogsWithAddressBook:(id)arg1 ;
-(void)touch:(id)arg1 ;
-(void)setPrimitiveCreationDate:(id)arg1 ;
-(void)setPrimitiveCreationDateYear:(id)arg1 ;
-(void)setPrimitiveCreationDateYearless:(id)arg1 ;
-(void)dealloc;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
@end

