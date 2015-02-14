/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/IMAPSingleClientOperation.h>

@protocol IMAPFetchResponseHandler;
@class NSMutableArray, NSIndexSet;

@interface IMAPClientFetchOperation : IMAPSingleClientOperation {

	NSMutableArray* _dataItems;
	id<IMAPFetchResponseHandler> _responseHandler;
	NSIndexSet* _messageNumbers;

}

@property (copy) NSIndexSet * messageNumbers;                                 //@synthesize messageNumbers=_messageNumbers - In the implementation block
@property (retain) NSMutableArray * dataItems;                                //@synthesize dataItems=_dataItems - In the implementation block
@property (retain) id<IMAPFetchResponseHandler> responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)_headersToFetch;
+(id)_fetchDataItemsForMessageSkeletonsWithHeaders:(id)arg1 ;
-(id)activityString;
-(id)init;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(void)_imapClientFetchOperationCommonInitWithMessageNumbers:(id)arg1 ;
-(id)initWithMessageNumbers:(id)arg1 ;
-(char)_isLegalRange:(NSRange)arg1 ;
-(NSRange)_nsRangeForIMAPRange:(NSRange)arg1 ;
-(NSIndexSet *)messageNumbers;
-(void)setMessageNumbers:(NSIndexSet *)arg1 ;
-(NSMutableArray *)dataItems;
-(id)_fetchDataItemsForMessageSkeletonsWithAdditionalHeaderFields:(id)arg1 ;
-(void)addDataItem:(id)arg1 ;
-(id)_newMessageSetCommandString;
-(void)addMessageSkeletonDataItemsWithAdditionalHeaderFields:(id)arg1 ;
-(void)addMessageUidsAndFlagsDataItemsWithAdditionalHeaderFields:(id)arg1 ;
-(void)setDataItems:(NSMutableArray *)arg1 ;
-(id<IMAPFetchResponseHandler>)responseHandler;
-(void)setResponseHandler:(id<IMAPFetchResponseHandler>)arg1 ;
@end

