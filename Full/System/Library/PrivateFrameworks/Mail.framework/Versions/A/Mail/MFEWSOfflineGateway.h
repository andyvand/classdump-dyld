/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSGateway.h>
#import <Mail/NSKeyedUnarchiverDelegate.h>

@class NSMutableDictionary, MFEWSConnection, MFEWSResponseOperation, NSOperationQueue, NSString;

@interface MFEWSOfflineGateway : MFEWSGateway <NSKeyedUnarchiverDelegate> {

	NSMutableDictionary* _offlineToRealEWSIdStrings;
	id _offlineToRealEWSIdStringsLock;
	MFEWSConnection* _offlineConnection;
	MFEWSResponseOperation* _lastResponseDecoded;
	NSOperationQueue* _requestResponseQueue;

}

@property (nonatomic,retain) NSMutableDictionary * offlineToRealEWSIdStrings; 
@property (retain) MFEWSConnection * offlineConnection;                                    //@synthesize offlineConnection=_offlineConnection - In the implementation block
@property (retain) MFEWSResponseOperation * lastResponseDecoded;                           //@synthesize lastResponseDecoded=_lastResponseDecoded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingRequestResponseQueue;
-(id)initWithAccount:(id)arg1 ;
-(id)requestResponseQueue;
-(id)resolvedIdStringForIdString:(id)arg1 ;
-(void)addOfflineToRealEWSIdStrings:(id)arg1 forRequest:(id)arg2 ;
-(void)addRequest:(id)arg1 ;
-(void)takeRequestOffline:(id)arg1 error:(id)arg2 ;
-(id)initWithAccount:(id)arg1 connection:(id)arg2 ;
-(void)setOfflineToRealEWSIdStrings:(NSMutableDictionary *)arg1 ;
-(id)playbackRequests:(id)arg1 offlineToRealEWSIdStrings:(id*)arg2 error:(id*)arg3 ;
-(MFEWSConnection *)offlineConnection;
-(MFEWSResponseOperation *)lastResponseDecoded;
-(void)setLastResponseDecoded:(MFEWSResponseOperation *)arg1 ;
-(id)_deleteRequestRemovingUndeletedItems:(id)arg1 ;
-(id)_EWSFolderFromCreateRequestOperation:(id)arg1 ;
-(void)_moveMessageFromFailedCreateRequest:(id)arg1 withBackupManager:(id)arg2 toMailboxNamed:(id)arg3 actualName:(id*)arg4 ;
-(void)_undeleteMessagesFromFailedCopyRequest:(id)arg1 ;
-(void)_undeleteMessagesFromFailedDeleteRequest:(id)arg1 ;
-(NSMutableDictionary *)offlineToRealEWSIdStrings;
-(void)setOfflineConnection:(MFEWSConnection *)arg1 ;
-(id)connection;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
@end

