/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangeOperation.h>
#import <CalendarPersistence/CalMessageTraceableOpearation.h>

@class NSString;

@interface CalExchangeSyncAccountOperation : CalExchangeOperation <CalMessageTraceableOpearation> {

	NSString* _messageTracerUID;
	char _fetchMailbox;
	char _refreshDelegatePrivileges;

}

@property (assign) char fetchMailbox;                           //@synthesize fetchMailbox=_fetchMailbox - In the implementation block
@property (assign) char refreshDelegatePrivileges;              //@synthesize refreshDelegatePrivileges=_refreshDelegatePrivileges - In the implementation block
+(id)findFolderResponseShape;
+(id)findFolderRestriction;
+(id)getFolderResponseShape;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 ;
-(void)setFetchMailbox:(char)arg1 ;
-(void)setRefreshDelegatePrivileges:(char)arg1 ;
-(id)debugTitle;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)messageTracerName;
-(id)messageTracerUUID;
-(char)refreshDelegatePrivileges;
-(char)_fetchRootFolderIdForPrincipal:(id)arg1 binding:(id)arg2 error:(id*)arg3 ;
-(char)_fetchDeletedItemsFolderId:(id)arg1 mailbox:(id)arg2 binding:(id)arg3 error:(id*)arg4 ;
-(char)updateCalendarsForPrincipal:(id)arg1 withFolders:(id)arg2 binding:(id)arg3 error:(id*)arg4 ;
-(char)syncDelegate:(id)arg1 binding:(id)arg2 error:(id*)arg3 ;
-(char)syncPrincipalFolderHierarchy:(id)arg1 binding:(id)arg2 error:(id*)arg3 ;
-(char)fetchMailbox;
-(char)syncPrincipal:(id)arg1 binding:(id)arg2 error:(id*)arg3 ;
@end

