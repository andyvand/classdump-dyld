/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <MailCore/MCMessage.h>

@class MCMessageHeaders, NSData, MCMimeBody, NSString, NSArray;

@interface MFRecoveredMessage : MCMessage {

	MCMessageHeaders* _headers;
	SCD_Struct_MF13 _remoteFlags;
	NSData* _bodyData;
	NSData* _allData;
	MCMimeBody* _messageBody;
	char _loadedFileData;
	NSString* _path;
	NSString* _remoteID;
	NSString* _remoteMailboxURL;
	NSString* _originalMailboxURL;
	NSArray* _gmailLabelIDs;

}

@property (nonatomic,copy,readonly) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * remoteID;                        //@synthesize remoteID=_remoteID - In the implementation block
@property (nonatomic,copy) NSString * remoteMailboxURL;                //@synthesize remoteMailboxURL=_remoteMailboxURL - In the implementation block
@property (nonatomic,copy) NSString * originalMailboxURL;              //@synthesize originalMailboxURL=_originalMailboxURL - In the implementation block
@property (nonatomic,copy) NSArray * gmailLabelIDs;                    //@synthesize gmailLabelIDs=_gmailLabelIDs - In the implementation block
@property (assign,nonatomic) char loadedFileData;                      //@synthesize loadedFileData=_loadedFileData - In the implementation block
+(id)spotlightAttributesForBodyData:(id)arg1 plistData:(id)arg2 ;
-(id)headers;
-(unsigned)messageFlags;
-(id)bodyData;
-(id)messageDataIncludingFromSpace:(char)arg1 newDocumentID:(id)arg2 ;
-(id)headersIfAvailable;
-(NSString *)remoteID;
-(id)messageID;
-(SCD_Struct_MF17)moreMessageFlags;
-(id)spotlightAttributesIncludingText:(char)arg1 ;
-(id)remoteMailboxURLString;
-(id)originalMailboxURLString;
-(id)messageBodyIfAvailableUpdatingFlags:(char)arg1 ;
-(char)setMessageID:(long long)arg1 directory:(id)arg2 ;
-(void)setRemoteID:(NSString *)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(id)messageBodyIfAvailable;
-(SCD_Struct_MF13)remoteFlags;
-(char)hasCachedDataForMimePart:(id)arg1 ;
-(id)messageBodyUpdatingFlags:(char)arg1 ;
-(id)_initWithBodyData:(id)arg1 ;
-(void)_parseBodyDataWithPList:(id)arg1 ;
-(char)loadedFileData;
-(void)setLoadedFileData:(char)arg1 ;
-(void)_parseFileData:(id)arg1 ;
-(void)setRemoteMailboxURL:(NSString *)arg1 ;
-(void)setOriginalMailboxURL:(NSString *)arg1 ;
-(void)setGmailLabelIDs:(NSArray *)arg1 ;
-(id)_extendedAttributes;
-(void)_loadFileDataIfNeeded;
-(NSString *)remoteMailboxURL;
-(NSString *)originalMailboxURL;
-(id)bodyDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(NSArray *)gmailLabelIDs;
-(id)headerDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)messageBodyFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)messageBodyForIndexing;
-(void)flushCachedData;
-(id)init;
-(id)description;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(id)initWithURL:(id)arg1 ;
-(id)messageBody;
-(id)account;
-(id)mailbox;
@end

