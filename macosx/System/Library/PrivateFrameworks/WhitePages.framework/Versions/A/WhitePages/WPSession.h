/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WhitePages/WhitePages-Structs.h>
@class ODSession, WPOfflineCacheAgent, NSMutableDictionary, NSMutableArray, NSString, NSRecursiveLock, WPWorkerAgent, NSArray;

@interface WPSession : NSObject {

	ODSession* _defaultODSession;
	char _interestedInResults;
	WPOfflineCacheAgent* _agent;
	id _delegate;
	NSMutableDictionary* _results;
	NSMutableArray* _tempResults;
	NSString* _sessionUID;
	NSString* _nodePath;
	CGSize _defaultBadgeShadowPictureSize;
	double _defaultBadgeShadowScalingRatio;
	long long mLoadIntoMemoryRecordThreshold;
	char _uidFilteringIsActive;
	char mShouldReadAllRecordsIntoMemory;
	NSMutableDictionary* _authenticatedNodes;
	NSString* _URI;
	NSRecursiveLock* _sessionLock;
	char _filterSystemRecords;
	int _defaultQuerySourceMode;
	WPWorkerAgent* _asyncQueryWorkerAgent;
	int _authenticationMethod;
	NSArray* _cachedConfiguredNodes;
	NSArray* _cachedUnreachableNodes;
	NSArray* _cachedAvailableNodes;
	NSString* _contactSearchNodePath;
	NSString* _localNodePath;
	char _workaroundIsInitied;
	char _useJapaneseWorkaround;
	CFRunLoopSourceRef _rls;
	NSMutableDictionary* _adminGroups;

}
+(id)defaultSession;
+(id)plistToDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)dictionaryToPlist:(id)arg1 error:(out id*)arg2 ;
+(id)blessedUserAttributesToBeReturned;
+(id)blessedPersonAttributesToBeReturned;
+(id)blessedGroupAttributesToBeReturned;
+(id)blessedPlaceAttributesToBeReturned;
+(id)blessedMapAttributesToBeReturned;
+(id)blessedResourceAttributesToBeReturned;
+(id)blessedUserAttributesToBeSearched;
+(id)blessedPersonAttributesToBeSearched;
+(id)blessedGroupAttributesToBeSearched;
+(id)blessedPlaceAttributesToBeSearched;
+(id)blessedMapAttributesToBeSearched;
+(id)blessedResourceAttributesToBeSearched;
+(id)makeLDAPCompoundStringWithValues:(id)arg1 attributes:(id)arg2 matchType:(unsigned)arg3 ;
+(id)nameOfHost:(id)arg1 ;
+(id)defaultURI;
+(id)collaborationServicesRecordInNodeWithPath:(id)arg1 withSession:(id)arg2 ;
+(id)nameOfLocalhostWithNodePath:(id)arg1 ;
+(id)mainMACAddressWithNumberOfTries:(unsigned long long)arg1 sleep:(unsigned long long)arg2 ;
+(id)mainMACAddress;
+(unsigned)defaultContactSearchNodeType;
+(id)nameOfHostWithIPAddress:(id)arg1 ;
+(id)collaborationServicesRecordInNodeWithPath:(id)arg1 ;
+(id)blessedStandardAttributesToBeReturned;
+(id)stringByAppendingEllipsisToString:(id)arg1 ;
+(id)supportedChatProtocols;
+(id)stringsFromNSError:(id)arg1 ;
+(id)valueForLabel:(id)arg1 person:(id)arg2 ;
+(id)memberListFromArray:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)session;
+(id)makeUID;
-(int)authenticationMethod;
-(id)groups;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)directQueryRecordType:(id)arg1 nodePaths:(id)arg2 excludeLocalNodes:(char)arg3 attributesToBeSearched:(id)arg4 withValues:(id)arg5 attributesToBeReturned:(id)arg6 matchType:(unsigned)arg7 maxResults:(long long)arg8 querySourceMode:(int)arg9 offlineAgent:(id)arg10 sqlQuery:(id)arg11 error:(out id*)arg12 ;
-(char)filterSystemRecords;
-(void)setFilterSystemRecords:(char)arg1 ;
-(id)directQueryRecordType:(id)arg1 nodePaths:(id)arg2 attributesToBeSearched:(id)arg3 withValues:(id)arg4 attributesToBeReturned:(id)arg5 matchType:(unsigned)arg6 maxResults:(long long)arg7 error:(out id*)arg8 ;
-(id)ODSession;
-(void)setResults:(id)arg1 recordIdentifier:(id)arg2 sessionUID:(id)arg3 postNotification:(char)arg4 ;
-(id)performFilterOnSystemRecords:(id)arg1 ;
-(id)sessionUID;
-(void)setODSession:(id)arg1 ;
-(void)queryWorkerAgentHasCalled:(id)arg1 ;
-(void)setDefaultBadgeShadowPictureSize:(CGSize)arg1 ;
-(void)setDefaultBadgeShadowScalingRatio:(double)arg1 ;
-(void)setUIDFilteringIsActive:(char)arg1 ;
-(void)setDefaultQuerySourceMode:(int)arg1 ;
-(void)resetWPSession;
-(void)updateDirectoryServicesCachedNodes;
-(void)handlePartialResultsInNotification:(id)arg1 ;
-(void)updateDirectoryServicesCachedNodesAndNotify:(id)arg1 ;
-(void)setCachedConfiguredNodes:(id)arg1 ;
-(void)setCachedUnreachableNodes:(id)arg1 ;
-(void)setCachedAvailableNodes:(id)arg1 ;
-(id)authenticatedCachedInfoWithNodePath:(id)arg1 ;
-(char)loadKeychainItemWithNodePath:(id)arg1 ;
-(id)nameInKeychainItemWithNodePath:(id)arg1 ;
-(id)passwordInKeychainItemWithNodePath:(id)arg1 ;
-(id)genericAuthenticationWithNodePath:(id)arg1 userName:(id)arg2 password:(id)arg3 error:(out id*)arg4 ;
-(id)configuredNodesExcludingLocalNodes:(char)arg1 error:(out id*)arg2 ;
-(id)whoAmIInNode:(id)arg1 promptIfNeeded:(char)arg2 ;
-(id)kerberosAuthenticationWithNodePath:(id)arg1 promptIfNeeded:(char)arg2 error:(out id*)arg3 ;
-(id)namePasswordAuthenticationWithNodePath:(id)arg1 error:(out id*)arg2 ;
-(char)UIDFilteringIsActive;
-(id)cacheConfiguredNodes;
-(id)excludeLocalNodesFromArray:(id)arg1 ;
-(id)cacheUnreachableNodes;
-(id)cacheAvailableNodes;
-(id)collaborationServersInfoWithSession:(id)arg1 ;
-(id)collaborationServersInfo;
-(id)availableNodesExcludingLocalNodes:(char)arg1 error:(out id*)arg2 ;
-(void)queryRecordTypes:(id)arg1 nodePaths:(id)arg2 attributesToBeSearched:(id)arg3 withValues:(id)arg4 matchType:(unsigned)arg5 attributesToBeReturned:(id)arg6 maxResults:(long long)arg7 createNewSessionUID:(char)arg8 offlineAgent:(id)arg9 sqlQuery:(id)arg10 error:(out id*)arg11 ;
-(void)cancelQueriesInterestedInResults:(char)arg1 ;
-(id)contactSearchNodePath;
-(void)setSessionUID:(id)arg1 ;
-(int)defaultQuerySourceMode;
-(id)directQueryRecordType:(id)arg1 nodePaths:(id)arg2 attributesToBeSearched:(id)arg3 withValues:(id)arg4 attributesToBeReturned:(id)arg5 matchType:(unsigned)arg6 maxResults:(long long)arg7 querySourceMode:(int)arg8 offlineAgent:(id)arg9 sqlQuery:(id)arg10 error:(out id*)arg11 ;
-(id)unreachableNodesExcludingLocalNodes:(char)arg1 error:(out id*)arg2 ;
-(id)localNodePath;
-(long long)loadIntoMemoryRecordThreshold;
-(void)setShouldReadAllRecordsIntoMemory:(char)arg1 ;
-(id)directQueryRecordType:(id)arg1 nodePath:(id)arg2 attributesToBeSearched:(id)arg3 withValues:(id)arg4 attributesToBeReturned:(id)arg5 matchType:(unsigned)arg6 maxResults:(long long)arg7 error:(out id*)arg8 ;
-(void)allRecordsExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 error:(out id*)arg3 ;
-(id)allPeopleExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 attributesToBeReturned:(id)arg3 error:(out id*)arg4 ;
-(id)allSharedContactsExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 attributesToBeReturned:(id)arg3 error:(out id*)arg4 ;
-(id)allGroupsExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 attributesToBeReturned:(id)arg3 error:(out id*)arg4 ;
-(id)allLocationsExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 attributesToBeReturned:(id)arg3 error:(out id*)arg4 ;
-(id)allResourcesExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 attributesToBeReturned:(id)arg3 error:(out id*)arg4 ;
-(void)postQueryHasFinishedNotification;
-(void)setResults:(id)arg1 postNotification:(char)arg2 ;
-(id)resultsForRecordType:(id)arg1 ;
-(void)queryRecordTypes:(id)arg1 nodePaths:(id)arg2 attributesToBeSearched:(id)arg3 withValues:(id)arg4 matchType:(unsigned)arg5 attributesToBeReturned:(id)arg6 maxResults:(long long)arg7 createNewSessionUID:(char)arg8 error:(out id*)arg9 ;
-(id)allRecordsOfType:(id)arg1 excludingLocalAccounts:(char)arg2 withQueryMode:(int)arg3 attributesToBeReturned:(id)arg4 error:(out id*)arg5 ;
-(id)cleanDirtyResourceRecords:(id)arg1 ;
-(id)recordsOfType:(id)arg1 nodePath:(id)arg2 webServiceName:(id)arg3 hostName:(id)arg4 serviceType:(id)arg5 status:(int)arg6 attributesToBeReturned:(id)arg7 excludingLocalAccounts:(char)arg8 withQueryMode:(int)arg9 error:(out id*)arg10 ;
-(id)createPerson:(id)arg1 attributes:(id)arg2 inNode:(id)arg3 error:(out id*)arg4 ;
-(id)suggestShortNameFromLongName:(id)arg1 ;
-(id)createRecordWithType:(id)arg1 attributes:(id)arg2 inNode:(id)arg3 error:(out id*)arg4 ;
-(id)authenticatedCachedNodeWithNodePath:(id)arg1 ;
-(id)writableRecord:(id)arg1 inNode:(id)arg2 includeAttributes:(id)arg3 error:(out id*)arg4 ;
-(id)nextAvailableIDForRecordType:(id)arg1 nodePath:(id)arg2 ;
-(void)addValuesFromMultivalue:(id)arg1 prefix:(id)arg2 withProperty:(id)arg3 dictionary:(id*)arg4 ;
-(void)addValuesFromMultivalueAddress:(id)arg1 withProperty:(id)arg2 dictionary:(id*)arg3 ;
-(id)createUser:(id)arg1 attributes:(id)arg2 inNode:(id)arg3 error:(out id*)arg4 ;
-(id)badgePictureForUserWithCommand:(id)arg1 tempFilePath:(id)arg2 ;
-(void)postResults:(id)arg1 areInNotificationForRecordType:(id)arg2 ;
-(id)createRecordWithType:(id)arg1 attributes:(id)arg2 inNode:(id)arg3 resolveNamingConflict:(char)arg4 error:(out id*)arg5 ;
-(char)isNodeWithFullPathCollaborationServer:(id)arg1 ;
-(long long)WPMatchTypeToABSearchComparison:(unsigned)arg1 ;
-(id)WPAttributeToABProperty:(id)arg1 ;
-(void)setAuthenticationMethod:(int)arg1 ;
-(id)authenticationSearchNodePath;
-(void)setLoadIntoMemoryRecordThreshold:(long long)arg1 ;
-(char)shouldReadAllRecordsIntoMemory;
-(id)rootAuthenticationWithError:(out id*)arg1 wasAuthenticatedAsRoot:(char*)arg2 ;
-(char)isNodeWithFullPathAuthenticated:(id)arg1 ;
-(id)authenticatedCachedAccountWithNodePath:(id)arg1 ;
-(char)isUserAdmin:(id)arg1 inNodeWithFullPath:(id)arg2 ;
-(id)whoAmIPromptingIfNeeded:(char)arg1 ;
-(char)addToKeychainWithFullNodePath:(id)arg1 userName:(id)arg2 password:(id)arg3 ;
-(char)isNodeAvailable:(id)arg1 ;
-(void)cancelQueries:(char)arg1 ;
-(char)isSessionFinished;
-(void)checkIfWeShouldReadAllRecordsIntoMemory;
-(void)allRecordsWithQueryMode:(int)arg1 error:(out id*)arg2 ;
-(id)sharedContacts;
-(id)maps;
-(id)addressBookPeople;
-(id)allPeopleWithQueryMode:(int)arg1 attributesToBeReturned:(id)arg2 error:(out id*)arg3 ;
-(id)allSharedContactsWithQueryMode:(int)arg1 attributesToBeReturned:(id)arg2 error:(out id*)arg3 ;
-(id)allGroupsWithQueryMode:(int)arg1 attributesToBeReturned:(id)arg2 error:(out id*)arg3 ;
-(id)allMapsExcludingLocalAccounts:(char)arg1 withQueryMode:(int)arg2 attributesToBeReturned:(id)arg3 error:(out id*)arg4 ;
-(id)allAddressBookPeople;
-(id)recordsOfType:(id)arg1 withTimestampLaterThan:(id)arg2 attributesToBeReturned:(id)arg3 ;
-(id)recordsOfType:(id)arg1 hostName:(id)arg2 serviceType:(id)arg3 status:(int)arg4 attributesToBeReturned:(id)arg5 excludingLocalAccounts:(char)arg6 withQueryMode:(int)arg7 error:(out id*)arg8 ;
-(id)addressBookPersonToWhitePagesPerson:(id)arg1 inNode:(id)arg2 error:(out id*)arg3 ;
-(id)createGroup:(id)arg1 attributes:(id)arg2 members:(id)arg3 inNode:(id)arg4 error:(out id*)arg5 ;
-(id)createLocation:(id)arg1 description:(id)arg2 attributes:(id)arg3 inNode:(id)arg4 error:(out id*)arg5 ;
-(id)createMap:(id)arg1 description:(id)arg2 attributes:(id)arg3 inNode:(id)arg4 error:(out id*)arg5 ;
-(id)createResource:(id)arg1 description:(id)arg2 attributes:(id)arg3 inNode:(id)arg4 error:(out id*)arg5 ;
-(id)createWebServices:(id)arg1 withName:(id)arg2 inNode:(id)arg3 error:(out id*)arg4 ;
-(char)performFakeACLCheckForRecord:(id)arg1 usingAttribute:(id)arg2 ;
-(char)updateRecord:(id)arg1 inNode:(id)arg2 error:(out id*)arg3 ;
-(char)deleteRecord:(id)arg1 inNode:(id)arg2 error:(out id*)arg3 ;
-(id)allWebServicesRecords;
-(id)allWebServicesRecordsExcludingLocalNodes:(char)arg1 ;
-(id)webServicesRecordsForServiceOfType:(id)arg1 ;
-(void)setActivateCacheFilePath:(id)arg1 ;
-(void)setReadFromCache:(char)arg1 ;
-(void)setActivateCache:(char)arg1 filePath:(id)arg2 ;
-(void)setOfflineCacheAgent:(id)arg1 ;
-(CGSize)defaultBadgeShadowPictureSize;
-(double)defaultBadgeShadowScalingRatio;
-(id)addABPersons:(id)arg1 toNode:(id)arg2 ;
-(id)badgePictureForUserWithName:(id)arg1 ;
-(id)badgePictureForUserWithEmail:(id)arg1 ;
-(char)useJapaneseWorkaround;
-(char)_setupCachingSchemaAndReturnError:(out id*)arg1 ;
-(void)fromThreadPartialResultsReady:(id)arg1 ;
-(void)cacheResults:(id)arg1 withRecordType:(id)arg2 ;
-(id)makeABSearchElementsUsingAttributes:(id)arg1 values:(id)arg2 matchType:(unsigned)arg3 ;
-(id)whitePagesAttributes;
-(void)queryAddressBookWithAttributes:(id)arg1 values:(id)arg2 matchType:(unsigned)arg3 ;
-(id)queryCacheWithRecordTypes:(id)arg1 values:(id)arg2 matchType:(unsigned)arg3 sqlQuery:(id)arg4 ;
-(id)resolveRecordsWithGUIDs:(id)arg1 instantiatingWithWPType:(id)arg2 ;
-(void)postQueryHasBeenCanceledNotification;
-(void)synchronizeRecord:(id)arg1 verifyingAttributes:(id)arg2 ;
-(id)resources;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(id)results;
-(id)locations;
-(id)people;
@end

