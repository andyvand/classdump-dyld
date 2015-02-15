/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString;

@interface NSFileManager : NSObject

@property (assign) id<NSFileManagerDelegate> delegate; 
@property (copy,readonly) NSString * currentDirectoryPath; 
@property (copy,readonly) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken; 
+(char)ensureDirectoryExists:(id)arg1 ;
+(id)cacheDirectoryPathWithName:(id)arg1 ;
+(char)_storeMovePath:(id)arg1 toPath:(id)arg2 ;
+(id)userDownloadsFolder;
+(id)userDesktopFolder;
+(id)mimeTypeForFile:(id)arg1 ;
+(id)defaultManager;
-(char)createDirectoryAtPath:(id)arg1 ;
-(char)_isFileSignedAtPath:(id)arg1 withRequirement:(CFDataRef)arg2 basicCheck:(char)arg3 ;
-(char)isSignedByAppleFileAtPath:(id)arg1 basicCheck:(char)arg2 ;
-(char)isSignedByDeveloperFileAtPath:(id)arg1 basicCheck:(char)arg2 ;
-(char)isInstallableAtPath:(id)arg1 ;
-(char)isBootableVolume:(id)arg1 ;
-(char)_isFileSignedAtPath:(id)arg1 withRequirement:(CFDataRef)arg2 ;
-(char)isSignedByAppleFileAtPath:(id)arg1 ;
-(char)isSignedByDeveloperFileAtPath:(id)arg1 ;
-(char)isSignedFileAtPath:(id)arg1 ;
-(char)isAppStoreAppAtPath:(id)arg1 ;
-(char)isUpdatableAtPath:(id)arg1 ;
-(char)writeReceiptString:(id)arg1 toPath:(id)arg2 ;
-(id)safari_settingsDirectory;
-(id)safari_ensureDirectoryExists:(id)arg1 ;
-(id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2 ;
-(id)_safari_containerDirectory;
-(id)_safari_safariLibraryDirectory;
-(char)safari_moveItemAtURL:(id)arg1 toURL:(id)arg2 allowCopying:(char)arg3 allowOverwriting:(char)arg4 ;
-(char)safari_removeFileAtURL:(id)arg1 error:(id*)arg2 ;
-(id)safari_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)safari_pathForSingleItemAtPath:(id)arg1 ;
-(char)safari_moveDownloadedPath:(id)arg1 toPath:(id)arg2 ;
-(void)safari_setQuarantineInformationForFilePath:(id)arg1 downloadRequest:(id)arg2 ;
-(id)safari_localCachesDirectoryPreferringHome;
-(unsigned long long)safari_capacityForDirectory:(id)arg1 withCurrentSize:(unsigned long long)arg2 maxCapacity:(unsigned long long)arg3 maxRatioToAvailableDiskSpace:(double)arg4 ;
-(id)safari_roamingCachesDirectory;
-(id)safari_localCachesDirectory;
-(id)uniquePathWithPreferredPath:(id)arg1 ;
-(id)archivedDataAtPath:(id)arg1 createPKZipArchive:(char)arg2 ;
-(char)makeCompletePath:(id)arg1 mode:(int)arg2 ;
-(id)makeUniqueDirectoryWithPath:(id)arg1 ;
-(char)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(char)arg3 ;
-(void)isd_bzip2FileAtPathInThread:(id)arg1 ;
-(char)isd_bzip2FileAtPath:(id)arg1 replace:(char)arg2 ;
-(id)isd_fileAliasForFileAtPath:(id)arg1 ;
-(id)isd_pathForFileAlias:(id)arg1 getNewAliasData:(id*)arg2 ;
-(id)mf_subpathsOfDirectoryAtPath:(id)arg1 ;
-(char)canWriteToFileAtPath:(id)arg1 ;
-(id)pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2 ;
-(void)deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3 ;
-(char)canWriteToDirectoryAtPath:(id)arg1 ;
-(id)localizedFullPath:(id)arg1 ;
-(id)uniquePathInDirectory:(id)arg1 withName:(id)arg2 extension:(id)arg3 ;
-(id)pathByResolvingAliasesInPath:(id)arg1 ;
-(id)pathByUniquingPath:(id)arg1 ;
-(id)URLForNonContainerizedHomeDirectory;
-(long long)fileSizeAtPath:(id)arg1 traverseLink:(char)arg2 ;
-(id)fileModificationDateAtPath:(id)arg1 traverseLink:(char)arg2 ;
-(id)createUniqueDirectoryAtPath:(id)arg1 withIntermediateDirectories:(char)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(void)_webkit_setMetadataURL:(id)arg1 referrer:(id)arg2 atPath:(id)arg3 ;
-(id)_webkit_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)_webkit_startupVolumeName;
-(id)_sizeOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)abExtendedAttributeForKey:(id)arg1 onFile:(id)arg2 ;
-(char)abSetExtendedAttribute:(id)arg1 forKey:(id)arg2 onFile:(id)arg3 ;
-(char)abRemoveExtendedAttributeForKey:(id)arg1 onFile:(id)arg2 ;
-(id)abExtendedAttributesOnFile:(id)arg1 ;
-(id)abPathToOriginalItemOfPath:(id)arg1 ;
-(id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(char)IKIPMakeDirectoriesInPath:(id)arg1 mode:(int)arg2 ;
-(char)_cuiConfirmDirectoryAtPath:(id)arg1 ;
-(char)_cuiConfirmFileAtPath:(id)arg1 ;
-(id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(int)gs_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)gs_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 andExtension:(id)arg3 error:(id*)arg4 ;
-(char)makeDirectoriesInPath:(id)arg1 mode:(unsigned)arg2 ;
-(id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)_randomTemporaryPathWithFileName:(id)arg1 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 ;
-(id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(char)_isPathOnMissingVolume:(id)arg1 ;
-(char)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(char)arg5 ;
-(id)_generateLinkForURL:(id)arg1 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 ;
-(char)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 ;
-(char)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 ;
-(char)_cutIsPathOnMissingVolume:(id)arg1 ;
-(id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutRandomTemporaryPathWithFileName:(id)arg1 ;
-(id)_web_visibleItemsInDirectoryAtPath:(id)arg1 ;
-(char)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(id)componentsToDisplayForPath:(id)arg1 ;
-(char)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2 ;
-(id)subpathsAtPath:(id)arg1 ;
-(id)contentsAtPath:(id)arg1 ;
-(char)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2 ;
-(char)directoryCanBeCreatedAtPath:(id)arg1 ;
-(id)_info;
-(char)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3 ;
-(id)_URLForTrashingItemAtURL:(id)arg1 create:(char)arg2 error:(id*)arg3 ;
-(id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4 ;
-(long long)relationshipOfURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)_newReplicatePath:(id)arg1 ref:(void*)arg2 atPath:(id)arg3 ref:(void*)arg4 operation:(int)arg5 fileMap:(id)arg6 handler:(id)arg7 ;
-(char)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3 ;
-(char)_removeFileAtPath:(id)arg1 handler:(id)arg2 shouldDeleteFork:(char)arg3 enteredDirectory:(char)arg4 ;
-(NSString *)currentDirectoryPath;
-(char)_replicatePath:(id)arg1 atPath:(id)arg2 operation:(int)arg3 fileMap:(id)arg4 handler:(id)arg5 ;
-(id)_posixPathComponentsWithPath:(id)arg1 ;
-(char)_removeFileAtPath:(id)arg1 handler:(id)arg2 shouldDeleteFork:(char)arg3 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(char)arg4 error:(id*)arg5 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(char)arg4 ;
-(char)changeFileAttributes:(id)arg1 atPath:(id)arg2 ;
-(char)contentsEqualAtPath:(id)arg1 andPath:(id)arg2 ;
-(char)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5 ;
-(long long)relationshipOfDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(id)_windowsPathComponentsWithPath:(id)arg1 ;
-(id)_displayPathForPath:(id)arg1 ;
-(char)changeCurrentDirectoryPath:(id)arg1 ;
-(char)isDeletableFileAtPath:(id)arg1 ;
-(id)pathContentOfSymbolicLinkAtPath:(id)arg1 ;
-(char)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2 ;
-(id)fileSystemAttributesAtPath:(id)arg1 ;
-(id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2 ;
-(id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(char)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(char)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4 ;
-(char)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(char)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2 ;
-(char)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3 ;
-(id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(char)arg2 error:(id*)arg3 ;
-(id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(char)arg2 error:(id*)arg3 ;
-(char)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(char)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6 ;
-(char)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)setUbiquitous:(char)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4 ;
-(char)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3 ;
-(void)_registerForUbiquityAccountChangeNotifications;
-(id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1 ;
-(char)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2 ;
-(void)_performRemoveFileAtPath:(id)arg1 ;
-(char)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4 ;
-(void)_web_backgroundRemoveFileAtPath:(id)arg1 ;
-(char)_web_removeFileOnlyAtPath:(id)arg1 ;
-(void)_web_backgroundRemoveLeftoverFiles:(id)arg1 ;
-(id)_web_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)_web_carbonPathForPath_nowarn:(id)arg1 ;
-(char)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(char*)arg2 traverseLink:(char)arg3 ;
-(id)_web_startupVolumeName_nowarn;
-(char)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2 ;
-(void)_web_noteFileChangedAtPath_nowarn:(id)arg1 ;
-(char)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2 ;
-(void)setDelegate:(id<NSFileManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id<NSFileManagerDelegate>)delegate;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(id)URLForUbiquityContainerIdentifier:(id)arg1 ;
-(char)_processHasUbiquityContainerEntitlement;
-(id)directoryContentsAtPath:(id)arg1 ;
-(char)removeFileAtPath:(id)arg1 handler:(id)arg2 ;
-(char)fileExistsAtPath:(id)arg1 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(char)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(char)fileExistsAtPath:(id)arg1 isDirectory:(char*)arg2 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(char)arg2 ;
-(char)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(char)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)_itemAtURLIsInAnyTrash:(id)arg1 ;
-(char)isUbiquitousItemAtURL:(id)arg1 ;
-(id)stringWithFileSystemRepresentation:(const char*)arg1 length:(unsigned long long)arg2 ;
-(char)isWritableFileAtPath:(id)arg1 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(char)arg4 error:(id*)arg5 ;
-(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)displayNameAtPath:(id)arg1 ;
-(id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2 ;
-(char)isReadableFileAtPath:(id)arg1 ;
-(char)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(char)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(const char*)fileSystemRepresentationWithPath:(id)arg1 ;
-(char)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 ;
-(char)isExecutableFileAtPath:(id)arg1 ;
-(id)enumeratorAtPath:(id)arg1 ;
-(char)copyPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(char)movePath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(char)linkPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2 ;
-(char)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3 ;
-(char)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
@end

