/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/MCMessageSortingInterface.h>
#import <MailCore/NSCopying.h>
#import <MailCore/MCActivityTarget.h>

@protocol MCMessageDataSource;
@class NSString, NSArray, NSData, NSUUID, NSMutableSet, NSIndexSet, NSSet, NSURL, NSDictionary;

@interface MCMessage : NSObject <MCMessageSortingInterface, NSCopying, MCActivityTarget> {

	NSString* _subject;
	NSArray* _toRecipients;
	NSString* _sender;
	NSData* _messageIDHeaderDigest;
	NSData* _inReplyToHeaderDigest;
	NSUUID* _documentID;
	unsigned _messageFlags;
	struct {
		unsigned colorHasBeenEvaluated : 1;
		unsigned colorWasSetManually : 1;
		unsigned redColor : 8;
		unsigned greenColor : 8;
		unsigned blueColor : 8;
		unsigned loadingBody : 1;
		unsigned firstUnused : 2;
		unsigned isMarkedForOverwrite : 1;
		unsigned unused : 2;
	}  _flags;
	char _type;
	double _dateSentInterval;
	double _dateReceivedInterval;
	double _dateLastViewedInterval;
	id<MCMessageDataSource> _dataSource;
	unsigned char _subjectPrefixLength;
	NSMutableSet* _gmailLabels;
	char _recipientType;

}

@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,readonly) int conversationPosition; 
@property (nonatomic,readonly) NSIndexSet * appliedFlagColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSSet * gmailLabels; 
@property (assign) char recipientType;                                             //@synthesize recipientType=_recipientType - In the implementation block
@property (nonatomic,readonly) char isThread; 
@property (nonatomic,readonly) NSURL * imageArchiveURL; 
@property (nonatomic,copy,readonly) NSDictionary * remoteAttachments; 
@property (assign) char primitiveMessageType;                                      //@synthesize type=_type - In the implementation block
@property (assign) double primitiveDateSentInterval;                               //@synthesize dateSentInterval=_dateSentInterval - In the implementation block
@property (assign) double primitiveDateReceivedInterval;                           //@synthesize dateReceivedInterval=_dateReceivedInterval - In the implementation block
@property (assign) double primitiveDateLastViewedInterval;                         //@synthesize dateLastViewedInterval=_dateLastViewedInterval - In the implementation block
+(char)_messageTypeForMessageTypeKey:(id)arg1 ;
+(id)messageWithRFC822Data:(id)arg1 sanitizeData:(char)arg2 ;
+(id)replyPrefixWithSpacer:(char)arg1 ;
+(id)descriptionForType:(char)arg1 plural:(char)arg2 ;
+(id)messageTypeKeyForMessageType:(char)arg1 ;
+(id)unreadMessagesFromMessages:(id)arg1 ;
+(char)allMessages:(id)arg1 areSameType:(char)arg2 ;
+(long long)displayablePriorityForPriority:(long long)arg1 ;
+(id)messageWithRFC822Data:(id)arg1 ;
+(unsigned char)subjectPrefixLengthUnknown;
+(char)isMessageURLString:(id)arg1 ;
+(id)sharedKeySetForSpotlightAttributes;
+(char)colorIsSetInMoreFlags:(SCD_Struct_MC8)arg1 ;
+(id)forwardedMessagePrefixWithSpacer:(char)arg1 ;
+(long long)validatePriority:(long long)arg1 ;
+(void)initialize;
-(char)isParentResponseMessage:(char*)arg1 isRejected:(char*)arg2 requestedAddresses:(id)arg3 requestIsForSenders:(char*)arg4 ;
-(void)setPermissionRequestState:(long long)arg1 ;
-(char)isChildRequestMessage;
-(char)isChildRequestMessage:(id)arg1 requestIsForSenders:(char*)arg2 childAddress:(id*)arg3 permissionRequestState:(long long*)arg4 ;
-(long long)conversationID;
-(int)conversationPosition;
-(NSIndexSet *)appliedFlagColors;
-(id)mailMailbox;
-(id)mailAccount;
-(id)backupID;
-(void)_addRecipientsForKey:(id)arg1 toArray:(id)arg2 ;
-(void)_setAppleScriptFlag:(id)arg1 state:(char)arg2 ;
-(id)_performBackgroundGetContent;
-(void)_performBackgroundSetContainer:(id)arg1 command:(id)arg2 ;
-(void)setIsRead:(char)arg1 ;
-(char)wasRepliedTo;
-(void)setWasRepliedTo:(char)arg1 ;
-(char)wasForwarded;
-(void)setWasForwarded:(char)arg1 ;
-(char)wasRedirected;
-(void)setWasRedirected:(char)arg1 ;
-(char)isJunk;
-(void)setIsJunk:(char)arg1 ;
-(void)setIsDeleted:(char)arg1 ;
-(char)isFlagged;
-(void)setIsFlagged:(char)arg1 ;
-(long long)flaggedStatus;
-(void)setFlaggedStatus:(long long)arg1 ;
-(id)replyTo;
-(id)scriptedMessageSize;
-(id)messageIDHeader;
-(id)rawSource;
-(id)allHeaders;
-(unsigned)actionColorMessage;
-(id)appleScriptHeaders;
-(id)appleScriptAttachments;
-(id)valueInAppleScriptAttachmentsWithUniqueID:(id)arg1 ;
-(char)isRead;
-(void)setBackgroundColor:(unsigned)arg1 ;
-(id)objectSpecifier;
-(id)content;
-(unsigned)backgroundColor;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(id)recipients;
-(char)isDeleted;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(id)URLString;
-(id)dateLastViewed;
-(id)stringForIndexing;
-(id)sender;
-(id)headers;
-(void)unlockedSetMessageIDHeaderDigest:(id)arg1 ;
-(void)unlockedSetInReplyToHeaderDigest:(id)arg1 ;
-(void)renderBody:(id)arg1 ;
-(id)stringValueRenderMode:(long long)arg1 updateBodyFlags:(char)arg2 junkRecorder:(id)arg3 bodyOnly:(char)arg4 ;
-(id)_newDateFromHeader:(id)arg1 inHeaders:(id)arg2 ;
-(id)_newDateFromReceivedHeadersInHeaders:(id)arg1 ;
-(id)_newDateFromDateHeaderInHeaders:(id)arg1 ;
-(double)primitiveDateReceivedInterval;
-(double)primitiveDateSentInterval;
-(void)_setDateReceivedFromHeaders:(id)arg1 ;
-(void)_setDateSentFromHeaders:(id)arg1 ;
-(void)setMessageIDHeaderDigest:(id)arg1 ;
-(void)setPriorityFromHeaders:(id)arg1 ;
-(id)_URLFetchIfNotAvailable:(char)arg1 ;
-(void)setAttachmentInfoFromBody:(id)arg1 forced:(char)arg2 ;
-(char)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned*)arg2 isSigned:(char*)arg3 isEncrypted:(char*)arg4 force:(char)arg5 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 ;
-(id)stringForBodyContent;
-(char)isMessageMeeting;
-(id)attachmentNamesIfAvailable;
-(char)isMarkedForOverwrite;
-(void)setMarkedForOverwrite:(char)arg1 ;
-(id)stringForIndexingUpdatingBodyFlags:(char)arg1 ;
-(id)subjectIfAvailable;
-(id)senderIfAvailable;
-(id)URLStringIfAvailable;
-(void)forceSetAttachmentInfoFromBody:(id)arg1 ;
-(void)renderHeaders:(id)arg1 ;
-(unsigned)messageFlags;
-(long long)junkMailLevel;
-(unsigned long long)messageSize;
-(id)headerData;
-(id)bodyData;
-(id)rawSourceFromHeaders:(id)arg1 body:(id)arg2 ;
-(id)documentID;
-(id)messageIDHeaderDigest;
-(id)messageDataIncludingFromSpace:(char)arg1 newDocumentID:(id)arg2 ;
-(id)dateSent;
-(id)to;
-(id)dateReceived;
-(id)headersIfAvailable;
-(id)messageDataIncludingFromSpace:(char)arg1 ;
-(char)isMessageContentLocallyAvailable;
-(id)remoteID;
-(id)messageID;
-(void)setMessageFlags:(unsigned)arg1 mask:(unsigned)arg2 ;
-(void)setDateReceivedTimeIntervalSince1970:(double)arg1 ;
-(void)setDateSentTimeIntervalSince1970:(double)arg1 ;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 type:(char)arg2 ;
-(NSSet *)gmailLabels;
-(id)stringForJunk:(id)arg1 ;
-(id)stringForJunk;
-(SCD_Struct_MC8)moreMessageFlags;
-(void)setPrimitiveMessageFlags:(unsigned)arg1 mask:(unsigned)arg2 ;
-(void)setPrimitiveColor:(id)arg1 hasBeenEvaluated:(char)arg2 flags:(unsigned)arg3 mask:(unsigned)arg4 ;
-(id)spotlightAttributesIncludingText:(char)arg1 ;
-(id)remoteMailboxURLString;
-(id)originalMailboxURLString;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(id)messageBodyIfAvailableUpdatingFlags:(char)arg1 ;
-(void)setMessageInfo:(id)arg1 subjectPrefixLength:(unsigned char)arg2 to:(id)arg3 sender:(id)arg4 type:(char)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 dateLastViewedTimeIntervalSince1970:(double)arg10 ;
-(void)setDocumentID:(id)arg1 ;
-(void)setGmailLabels:(NSSet *)arg1 ;
-(char)dataSourceShouldBeSet;
-(void)setRecipientType:(char)arg1 ;
-(double)dateLastViewedAsTimeIntervalSince1970;
-(id)dataForMimePart:(id)arg1 ;
-(id)messageBodyIfAvailable;
-(void)setSubjectPrefixLength:(unsigned char)arg1 ;
-(void)setTo:(id)arg1 ;
-(void)setInReplyToHeaderDigest:(id)arg1 ;
-(id)extendedDescription;
-(char)hasCachedDataForMimePart:(id)arg1 ;
-(id)messageBodyUpdatingFlags:(char)arg1 ;
-(char)colorHasBeenEvaluated;
-(char)supportsSnippets;
-(char)primitiveMessageType;
-(void)setPrimitiveMessageType:(char)arg1 ;
-(void)setPrimitiveColorHasBeenEvaluated:(char)arg1 ;
-(void)setPrimitiveColor:(id)arg1 ;
-(id)references;
-(id)inReplyToHeaderDigest;
-(id)primitiveDataSource;
-(char)isPartialMessageBodyAvailable;
-(void)setColorHasBeenEvaluated:(char)arg1 ;
-(void)setColor:(id)arg1 hasBeenEvaluated:(char)arg2 flags:(unsigned)arg3 mask:(unsigned)arg4 ;
-(void)_calculateAttachmentInfoFromBody:(id)arg1 ;
-(void)setAttachmentFilenames:(id)arg1 ;
-(void)cacheBodyAndHeader;
-(void)uncacheBodyAndHeader;
-(id)_cachedHeaders;
-(void)_cacheHeadersIfPossible:(id)arg1 ;
-(id)_cachedHeaderData;
-(void)_cacheHeaderDataIfPossible:(id)arg1 ;
-(id)_cachedMessageBody;
-(void)_cacheMessageBodyIfPossible:(id)arg1 ;
-(id)_cachedMessageBodyData;
-(void)_cacheMessageBodyDataIfPossible:(id)arg1 ;
-(void)setPrimitiveDateLastViewedInterval:(double)arg1 ;
-(void)renderString:(id)arg1 ;
-(void)setAttachmentInfoFromBody:(id)arg1 ;
-(int)colorForSort;
-(char)isThread;
-(id)senderDisplayName;
-(unsigned long long)numberOfAttachments;
-(unsigned long long)subjectPrefixLength;
-(unsigned)uidForSort;
-(void)addGmailLabels:(id)arg1 ;
-(void)removeGmailLabels:(id)arg1 ;
-(char)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned*)arg2 isSigned:(char*)arg3 isEncrypted:(char*)arg4 ;
-(double)primitiveDateLastViewedInterval;
-(int)colorIntValue;
-(id)subjectNotIncludingReAndFwdPrefix;
-(char)recipientType;
-(void)setPrimitiveDateSentInterval:(double)arg1 ;
-(void)setPrimitiveDateReceivedInterval:(double)arg1 ;
-(id)senderDisplayNameInfo;
-(void)setDateLastViewedTimeIntervalSince1970:(double)arg1 ;
-(id)bodyDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)headerDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)messageBodyFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)messageBodyForIndexing;
-(NSURL *)imageArchiveURL;
-(NSDictionary *)remoteAttachments;
-(char)hasCalculatedNumberOfAttachments;
-(void)setMessageInfoFromMessage:(id)arg1 ;
-(id)_messageIDHeaderDigestIvar;
-(id)_inReplyToHeaderDigestIvar;
-(id)init;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)type;
-(char)isEditable;
-(void)setDataSource:(id)arg1 ;
-(void)setType:(char)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)color;
-(id)dataSource;
-(long long)priority;
-(id)attributedString;
-(id)persistentID;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)messageBody;
-(unsigned)uid;
-(id)account;
-(void)setSender:(id)arg1 ;
-(id)mailbox;
-(char)isReply;
@end

