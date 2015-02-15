/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCDRecord.h>

@interface ABCDInfo : ABCDRecord
+(char)_isPublicRecord;
+(id)_table;
+(id)nts_CreateInfoWithAddressBook:(id)arg1 inPersistentStoreAtURL:(id)arg2 ;
+(id)abEntityName;
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(id)metadataType;
+(id)_generateSerialNumber;
-(id)meUniqueId;
-(id)parentGroups;
-(id)initWithUniqueId:(id)arg1 addressBook:(id)arg2 ;
-(char)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3 ;
-(id)fetchedAddressBookSourceWithAddressBook:(id)arg1 store:(id)arg2 ;
-(void)setSerialNumber:(id)arg1 ;
-(id)serialNumber;
-(id)remoteLocations;
-(void)setMeUniqueId:(id)arg1 ;
-(id)copyMultiValueWithRecord:(id)arg1 withProperty:(id)arg2 ;
-(void)setRemoteLocations:(id)arg1 ;
-(id)readSharingACL;
-(void)setReadSharingACL:(id)arg1 ;
-(id)readWriteSharingACL;
-(void)setReadWriteSharingACL:(id)arg1 ;
@end

