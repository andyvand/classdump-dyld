/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mds/mds-Structs.h>
#import <mds/MDSMachPortObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class MDSAccessToken, NSObject, NSMutableDictionary, NSMutableArray, ImporterBundleDetails, NSDictionary, NSArray;

@interface MDSImporterProxy : MDSMachPortObject {

	unsigned _machPort;
	unsigned _user;
	MDSAccessToken* _accessToken;
	unsigned _perUserBootstrap;
	unsigned _sizerLaunchPort;
	unsigned _sizerWorkPort;
	unsigned _sizerLifeCyclePort;
	unsigned _workerLaunchPort;
	unsigned _workerLifeCyclePort;
	NSObject*<OS_dispatch_source> _bundleFetchDelayTimer;
	NSMutableDictionary* _importerGroupsByLabel;
	NSMutableDictionary* _frameworkImportersByLabel;
	NSMutableArray* _frameworkWorkArray;
	NSMutableArray* _frameworkImporterArray;
	int _beforeWrangler;
	int _afterWrangler;
	int _beforeExternalWrangler;
	int _afterExternalWrangler;
	int _bundleFinderRequestCount;
	int _bundleFinderFailed;
	int _bundleFinderBusy;
	int _bundleFinderEarlyDeathCount;
	long long _notificationMergeTime;
	long long _notificationPenaltyTime;
	int _penaltyDepth;
	int _requestedBundleInfo;
	CFArrayRef _pluginDirectorySources;
	char _didResumeServiceQueue;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	ImporterBundleDetails* _fallbackBundleEntry;
	ImporterBundleDetails* _fsOnlyBundleEntry;
	NSMutableDictionary* _exactUtiMapping;
	NSMutableDictionary* _exactBundleWrapperUtiMapping;
	NSMutableDictionary* _unionUtiMapping;
	NSMutableDictionary* _prescanUtiMapping;
	NSMutableDictionary* _fileExtensionUtiMapping;
	NSMutableDictionary* _folderExtensionUtiMapping;
	NSMutableDictionary* _fileExtensionUtiDynMapping;
	char _updatedFromBundleFinder;
	NSDictionary* _completeSchemaInformation;
	MDPlistContainerRef _flatSchema;
	NSArray* _flatSchemaLanguageArray;
	int _flatSchemaGeneration;
	int _LSUpdateNotificationCount;
	int _KQUpdateNotificationCount;
	ConfStrOverridePaths _overridePaths;
	char _confstr_0[1024];
	char _confstr_C[1024];
	char _confstr_T[1024];

}
-(void)addRunLoopSources;
-(void)invalidateRunLoopSources;
-(unsigned)qosClass;
-(void)scheduleSizing:(id)arg1 ;
-(id)importerGroupForLabel:(id)arg1 ;
-(id)getAccessToken;
-(void)pathOverride;
-(void)clearPathOverride;
-(void)findImporterLabelForUnitsOfWork:(id)arg1 isPrescan:(char)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)handleNonImportReplyBlock:(/*^block*/id)arg1 ;
-(id)initForUser:(unsigned)arg1 ;
-(void)handleCopyImporterInformation:(unsigned)arg1 ;
-(void)completeFast:(char)arg1 accessToken:(id)arg2 schemaInformation:(/*^block*/id)arg3 ;
-(void)findExternalImporterLabel:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)sendWork:(id)arg1 command:(unsigned)arg2 options:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)createFrameworkImporterForLabel:(id)arg1 singlePlugin:(char)arg2 seatbeltProfile:(id)arg3 ;
-(void)handleDelayedBundleFetch;
-(void)listenForBundleChanges:(id)arg1 ;
-(void)requestBundleInfo;
-(void)parseCompleteSchema:(id)arg1 ;
-(void)assignWorkerLabelForUnitsOfWork:(id)arg1 isPrescan:(char)arg2 withBlock:(/*^block*/id)arg3 ;
-(MDPlistContainerRef)flatSchema:(id)arg1 forAccessToken:(id)arg2 ;
-(void)internalUtiMapping:(id)arg1 ;
-(void)bundleFinderDeath:(id)arg1 ;
-(void)sizerDeath:(id)arg1 ;
-(void)dealloc;
@end
