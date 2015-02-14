/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) unsigned short fileHFSFlags; 
@property (nonatomic,readonly) unsigned long long fileHFSResourceForkSize; 
@property (readonly) unsigned long long count; 
+(id)safari_dictionaryWithContentsOfData:(id)arg1 ;
+(id)safari_dictionaryWithContentsOfData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)isd_propertyValueWithType:(int)arg1 bytesEncodedForSqlite:(const void*)arg2 ;
+(id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1 ;
+(id)dictionaryWithParametersInURLString:(id)arg1 ;
+(id)dictionaryFromXMLString:(id)arg1 ;
+(id)dd_serializableResultWithResult:(_DDResult*)arg1 ;
+(id)_geo_dictionaryFromXPCObject:(void*)arg1 ;
+(id)dictionaryWithArchive:(id)arg1 ofClass:(Class)arg2 ;
+(id)_dictionaryWithData:(id)arg1 isPlist:(char)arg2 allowedClasses:(id)arg3 ;
+(id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2 ;
+(id)dictionaryWithPlistData:(id)arg1 ;
+(id)dictionaryWithArchiveData:(id)arg1 ;
+(id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2 ;
+(id)_scriptingDictionaryOfType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(char)arg2 ;
+(char)supportsSecureCoding;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(char)arg2 ;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dictionary;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
-(id)_mutableDeepCopy;
-(id)_mutableDeepCopyWithZone:(NSZone*)arg1 ;
-(char)containsKey:(id)arg1 ;
-(char)isNSDictionary__;
-(id)vcChannelRequestID;
-(char)shouldTriggerDownloadQueueCheck;
-(id)objectForCaseInsensitiveKey:(id)arg1 ;
-(long long)integerForKeyFE_FI:(id)arg1 ;
-(id)stringForKeyFE_FI:(id)arg1 ;
-(BOOL)boolForKeyFE_FI:(id)arg1 ;
-(id)dictionaryForKeyFE_FI:(id)arg1 ;
-(BOOL)boolForKeyFE_FI:(id)arg1 defaultValue:(BOOL)arg2 ;
-(long long)integerForKeyFE_FI:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)keyExistsFE_FI:(id)arg1 ;
-(unsigned)fourCharCodeForKeyFE_FI:(id)arg1 ;
-(CGRect)rectForKeyFE_FI:(id)arg1 ;
-(unsigned)fourCharCodeForKeyFE_FI:(id)arg1 defaultValue:(unsigned)arg2 ;
-(id)mutableCopyDeepFE_FI;
-(id)arrayForKeyFE_FI:(id)arg1 ;
-(id)copyDeepFE_FI;
-(id)dataForKeyFE_FI:(id)arg1 ;
-(double)cgFloatForKeyFE_FI:(id)arg1 ;
-(id)copyDeepCommonFE_FI:(BOOL)arg1 ;
-(double)cgFloatForKeyFE_FI:(id)arg1 defaultValue:(double)arg2 ;
-(double)doubleForKeyFE_FI:(id)arg1 defaultValue:(double)arg2 ;
-(long long)sint64ForKeyFE_FI:(id)arg1 defaultValue:(long long)arg2 ;
-(CGSize)sizeForKeyFE_FI:(id)arg1 defaultValue:(const CGSize*)arg2 ;
-(CGPoint)pointForKeyFE_FI:(id)arg1 defaultValue:(const CGPoint*)arg2 ;
-(CGRect)rectForKeyFE_FI:(id)arg1 defaultValue:(const CGRect*)arg2 ;
-(id)stringForKeyFE_FI:(id)arg1 defaultValue:(id)arg2 ;
-(id)initWithObjectFE_FI:(id)arg1 forKey:(id)arg2 ;
-(double)doubleForKeyFE_FI:(id)arg1 ;
-(long long)sint64ForKeyFE_FI:(id)arg1 ;
-(CGSize)sizeForKeyFE_FI:(id)arg1 ;
-(CGPoint)pointForKeyFE_FI:(id)arg1 ;
-(id)numberForKeyFE_FI:(id)arg1 ;
-(id)arrayForKeyFE_FI:(id)arg1 defaultValue:(id)arg2 ;
-(id)safari_URLForKey:(id)arg1 ;
-(id)safari_dateForKey:(id)arg1 ;
-(id)safari_stringForKey:(id)arg1 ;
-(char)safari_boolForKey:(id)arg1 ;
-(id)safari_dictionaryForKey:(id)arg1 ;
-(id)safari_dataForKey:(id)arg1 ;
-(id)safari_arrayForKey:(id)arg1 ;
-(id)safari_numberForKey:(id)arg1 ;
-(id)reverseDictionary;
-(id)filteredDictionaryPassingTest:(/*^block*/id)arg1 ;
-(id)CalMutableRecursiveCopy;
-(id)mutableCopyWithElementsCopy;
-(char)CalHasKeyIn:(id)arg1 ;
-(int)isd_quickDirtyCoderType;
-(id)isd_deepCopy;
-(void*)isd_bytesEncodedForSqlite;
-(int)isd_sqlitePropertyValueType;
-(id)isd_summaryWithIndent:(long long)arg1 ;
-(id)isd_reverseDictionaryMapping;
-(id)isd_reversedDictionaryUsingStrings;
-(id)allDistinctValues;
-(int)isd_collectionType;
-(id)isd_reversedDictionaryUsingSets;
-(id)isd_dictionarySubsetWithKeys:(id)arg1 ;
-(id)mutableCopyWithElementsCopy;
-(id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)CDVObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)CDVMergeOverrideDictionary:(id)arg1 ;
-(char)doesMatchOn:(id)arg1 ;
-(char)_mapkit_writeBinaryPlist:(id)arg1 atomically:(char)arg2 ;
-(id)mutableSomewhatDeepCopy;
-(double)cgfloatForKey:(id)arg1 ;
-(CGSize)sizeForKey:(id)arg1 ;
-(id)objectForIntegerKey:(long long)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)passTypeSpecificData;
-(id)fieldsNamed:(id)arg1 ;
-(id)XMLString;
-(id)fixUpSettings;
-(id)dictionaryWithStringsSwappedForURLs;
-(id)dictionaryWithURLsSwappedForStrings;
-(_DDResult*)dd_createResult;
-(id)_webkit_objectForMIMEType:(id)arg1 ;
-(id)_webkit_stringForKey:(id)arg1 ;
-(char)_webkit_boolForKey:(id)arg1 ;
-(id)_webkit_arrayForKey:(id)arg1 ;
-(id)_webkit_numberForKey:(id)arg1 ;
-(int)_webkit_intForKey:(id)arg1 ;
-(id)_FTFilteredDictionaryForAPS;
-(id)_objectForCaseInsensitiveKey:(id)arg1 ;
-(id)_sa_mappedDictionaryWithBlock:(/*^block*/id)arg1 ;
-(id)_abFilter:(/*^block*/id)arg1 ;
-(id)_ab_dictionaryByMappingValues:(/*^block*/id)arg1 ;
-(id)abNonNullValueForKey:(id)arg1 ;
-(id)abDictionaryByAddingMissingValuesFromDictionary:(id)arg1 ;
-(id)_ab_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void*)_geo_newXPCObject;
-(id)_placeOrCurrentLocation:(char*)arg1 ;
-(id)mutableDeepAutoreleasedCopy;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)archivedDictionary;
-(id)profileSnippetPath;
-(id)profileSnippetModificationDate;
-(id)stringForKey:(id)arg1 ;
-(id)bundleIdentifierFromInfoDictionary;
-(id)shortVersionFromInfoDictionary;
-(char)boolForKey:(id)arg1 defaultValue:(char)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(int)integerForKey:(id)arg1 ;
-(id)arrayForKeyFE_BU:(id)arg1 ;
-(CGRect)rectForKeyFE_BU:(id)arg1 ;
-(long long)integerForKeyFE_BU:(id)arg1 defaultValue:(long long)arg2 ;
-(id)dictionaryForKeyFE_BU:(id)arg1 ;
-(double)doubleForKeyFE_BU:(id)arg1 ;
-(long long)integerForKeyFE_BU:(id)arg1 ;
-(BOOL)keyExistsFE_BU:(id)arg1 ;
-(double)cgFloatForKeyFE_BU:(id)arg1 ;
-(unsigned)fourCharCodeForKeyFE_BU:(id)arg1 ;
-(BOOL)boolForKeyFE_BU:(id)arg1 defaultValue:(BOOL)arg2 ;
-(double)cgFloatForKeyFE_BU:(id)arg1 defaultValue:(double)arg2 ;
-(double)doubleForKeyFE_BU:(id)arg1 defaultValue:(double)arg2 ;
-(long long)sint64ForKeyFE_BU:(id)arg1 defaultValue:(long long)arg2 ;
-(unsigned)fourCharCodeForKeyFE_BU:(id)arg1 defaultValue:(unsigned)arg2 ;
-(CGSize)sizeForKeyFE_BU:(id)arg1 defaultValue:(const CGSize*)arg2 ;
-(CGPoint)pointForKeyFE_BU:(id)arg1 defaultValue:(const CGPoint*)arg2 ;
-(CGRect)rectForKeyFE_BU:(id)arg1 defaultValue:(const CGRect*)arg2 ;
-(id)stringForKeyFE_BU:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)boolForKeyFE_BU:(id)arg1 ;
-(long long)sint64ForKeyFE_BU:(id)arg1 ;
-(CGSize)sizeForKeyFE_BU:(id)arg1 ;
-(CGPoint)pointForKeyFE_BU:(id)arg1 ;
-(id)stringForKeyFE_BU:(id)arg1 ;
-(id)numberForKeyFE_BU:(id)arg1 ;
-(id)dataForKeyFE_BU:(id)arg1 ;
-(id)arrayForKeyFE_BU:(id)arg1 defaultValue:(id)arg2 ;
-(id)dictionaryChanging:(id)arg1 to:(id)arg2 ;
-(unsigned short)fileHFSFlags;
-(unsigned long long)fileHFSResourceForkSize;
-(id)_dataForKey:(id)arg1 ;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(id)_stringForKey:(id)arg1 ;
-(id)_arrayForKey:(id)arg1 ;
-(char)__imIsMutable;
-(id)__imDeepCopy;
-(id)keysOfChangedEntriesComparedTo:(id)arg1 ;
-(id)dictionaryFromChanges:(id)arg1 ;
-(id)plistData;
-(id)archiveData;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(KeyValueArray*)CA_copyRenderKeyValueArray;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_scriptClassTerminologyForName:(id)arg1 ;
-(id)_scriptCommandTerminologyForName:(id)arg1 ;
-(char)_scriptIsYesForKey:(id)arg1 default:(char)arg2 ;
-(id)_scriptTerminologyDescription;
-(id)_scriptTerminologyName;
-(id)_scriptTerminologyNameOrNames;
-(id)_scriptTerminologyPluralName;
-(char)_scriptFlagsForKey:(id)arg1 containFlag:(id)arg2 ;
-(id)_scriptingDescriptorOfRecordType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)storedValueForKey:(id)arg1 ;
-(void)takeStoredValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)fileOwnerAccountName;
-(unsigned long long)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileSystemFileNumber;
-(char)fileIsAppendOnly;
-(id)fileCreationDate;
-(id)fileGroupOwnerAccountID;
-(id)fileOwnerAccountID;
-(unsigned long long)filePosixPermissions;
-(id)fileModificationDate;
-(id)fileType;
-(char)fileIsImmutable;
-(char)fileExtensionHidden;
-(unsigned)fileHFSTypeCode;
-(unsigned)fileHFSCreatorCode;
-(unsigned long long)fileSize;
-(id)_web_numberForKey:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(id)_stringToWrite;
-(id)descriptionInStringsFileFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(char)containsKey:(id)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(char)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)invertedDictionary;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countForKey:(id)arg1 ;
-(char)isNSDictionary__;
-(unsigned long long)_cfTypeID;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(char)arg2 ;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)containsObject:(id)arg1 ;
-(char)isEqualToDictionary:(id)arg1 ;
-(id)objectEnumerator;
-(id)allKeys;
-(id)keyEnumerator;
-(id)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

