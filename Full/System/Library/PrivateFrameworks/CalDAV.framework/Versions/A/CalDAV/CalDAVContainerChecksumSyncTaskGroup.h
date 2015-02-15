/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVContainerSyncTaskGroup.h>

@class NSArray, NSString, CoreDAVItemParserMapping, NSMutableDictionary, NSDictionary;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {

	NSArray* _preferredChecksumVersions;
	NSString* _unusedSyncToken;
	NSString* _unusedCTag;
	CoreDAVItemParserMapping* _bestServerChecksumVersion;
	NSMutableDictionary* _serverURLsToChecksums;
	NSDictionary* _localURLsToChecksums;
	char _mismatchDetected;

}

@property (nonatomic,retain) NSArray * preferredChecksumVersions;                               //@synthesize preferredChecksumVersions=_preferredChecksumVersions - In the implementation block
@property (assign,nonatomic) id<CalDAVChecksumLocalDBInfoProvider> delegate; 
@property (nonatomic,retain) CoreDAVItemParserMapping * bestServerChecksumVersion;              //@synthesize bestServerChecksumVersion=_bestServerChecksumVersion - In the implementation block
@property (nonatomic,readonly) char mismatchDetected;                                           //@synthesize mismatchDetected=_mismatchDetected - In the implementation block
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7 ;
-(void)setBestServerChecksumVersion:(CoreDAVItemParserMapping *)arg1 ;
-(id)_calculatedCalendarHome;
-(void)_handleResponseToChecksumPropfind:(id)arg1 ;
-(void)_serverChecksumSupportPropfind;
-(char)_hadOutOfDateCollectionToken;
-(NSArray *)preferredChecksumVersions;
-(CoreDAVItemParserMapping *)bestServerChecksumVersion;
-(char)mismatchDetected;
-(void)dealloc;
-(void)startTaskGroup;
-(void)setPreferredChecksumVersions:(NSArray *)arg1 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(char)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(void)deleteResourceURLs:(id)arg1 ;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
@end

