/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABCustomPropertyCache : NSObject {

	NSMutableDictionary* _propertiesByNameByRecordTypeByPersistentStore;

}
+(id)storeIdentifierForStore:(id)arg1 ;
-(void)clearCustomPropertyCaches;
-(id)customPropertyDescriptionsWithRecordType:(id)arg1 inContext:(id)arg2 persistentStore:(id)arg3 ;
-(id)customPropertyWithName:(id)arg1 recordType:(id)arg2 inContext:(id)arg3 persistentStore:(id)arg4 ;
-(id)customPropertyDescriptionWithName:(id)arg1 recordType:(id)arg2 inContext:(id)arg3 persistentStore:(id)arg4 ;
-(void)accountRepositoryDidChange:(id)arg1 ;
-(id)customPropertyDescriptionsByNameWithRecordType:(id)arg1 inManagedObjectContext:(id)arg2 persistentStore:(id)arg3 ;
-(id)cachedCustomPropertiesByNameForRecordType:(id)arg1 persistentStore:(id)arg2 ;
-(void)cacheCustomProperties:(id)arg1 withRecordType:(id)arg2 ;
-(void)nts_cacheCustomProperty:(id)arg1 forPropertyName:(id)arg2 recordType:(id)arg3 persistentStoreIdentifier:(id)arg4 ;
-(id)nts_propertiesByNameByRecordTypeForstoreIdentifier:(id)arg1 ;
-(id)nts_propertiesByNameForRecordType:(id)arg1 inPropertiesByNameByRecordType:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

