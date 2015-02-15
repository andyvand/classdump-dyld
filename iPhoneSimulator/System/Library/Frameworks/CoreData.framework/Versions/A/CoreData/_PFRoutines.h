/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFRoutines : NSObject
+(id)_getUUID;
+(id)_getPFBundleVersionNumber;
+(id)valueForProcessArgument:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(char)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3 ;
+(void)getIndexes:(unsigned*)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3 ;
+(unsigned long long)_generateHashForString:(id)arg1 ;
+(id)invalidXMLCharacterSet;
+(char)isInvalidXMLCharacter:(unsigned short)arg1 ;
+(unsigned short*)_protectEvilCharacter:(unsigned short)arg1 ;
+(unsigned short)_unprotectEvilCharacter:(id)arg1 ;
+(id)revertInvalidXMLEscapedString:(id)arg1 ;
+(id)_dataFromBase64String:(id)arg1 ;
+(id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 ;
+(char)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id*)arg2 andEntries:(id*)arg3 ;
+(id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3 ;
+(id)_frameworkHash;
+(id)_groupObjectsByRootEntity:(id)arg1 ;
+(id)_coalescedPrefetchKeypaths:(id)arg1 ;
+(char)_doNameAndTypeCheck:(id)arg1 ;
+(char)convertCString:(const char*)arg1 toUnsignedInt64:(unsigned long long*)arg2 withBase:(int)arg3 ;
+(id)writePFExternalReferenceDataToInterimFile:(id)arg1 ;
+(char)moveInterimFileToPermanentLocation:(id)arg1 ;
+(void*)readExternalReferenceDataFromFile:(id)arg1 ;
+(void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void*)arg2 range:(NSRange)arg3 ;
+(id)newMappedDataForExternalReference:(id)arg1 ;
+(long long)lengthOfFileAtExternalReferenceLocation:(const char*)arg1 ;
+(void)deleteFileForPFExternalReferenceData:(id)arg1 ;
+(char)createExternalReferenceLinkFromPath:(const char*)arg1 toPath:(const char*)arg2 protectionLevel:(int)arg3 ;
+(void)cleanupExternalReferenceLink:(const char*)arg1 ;
+(void)attemptToUpdatePermissionsForFileAtPath:(const char*)arg1 toLevel:(int)arg2 ;
+(void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
+(id)_createNicksBase64EncodedStringFromData:(id)arg1 ;
+(id)_base64StringFromData:(id)arg1 ;
+(id)escapeInvalidXMLCharactersInString:(id)arg1 ;
+(id)_convert:(id)arg1 toValueClassUsing:(id)arg2 ;
+(id)simpleNodesFromXMLDocument:(id)arg1 atPath:(id)arg2 ;
+(id)decodeValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)encodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 ;
+(id)anyObjectFromCollection:(id)arg1 ;
+(id)newArrayOfObjectIDsFromCollection:(id)arg1 ;
+(id)newSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)newOrderedSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(char)isUbiquitousURLUploaded:(id)arg1 error:(id*)arg2 ;
+(char)isUbiquitousURLDownloaded:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
+(char)isUbiquitousItemAtURL:(id)arg1 ;
@end

