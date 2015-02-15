/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/NSCopying.h>

@class IMHandle, NSAttributedString, NSString, NSDate, NSArray, NSError, NSColor, IMMessageItem;

@interface IMMessage : NSObject <NSCopying> {

	IMHandle* _sender;
	IMHandle* _subject;
	NSAttributedString* _text;
	NSString* _plainBody;
	NSDate* _time;
	NSDate* _timeDelivered;
	NSDate* _timeRead;
	NSDate* _timePlayed;
	NSString* _guid;
	NSAttributedString* _messageSubject;
	NSArray* _fileTransferGUIDs;
	NSError* _error;
	unsigned long long _flags;
	char _isInvitationMessage;
	long long _messageID;

}

@property (readonly) NSColor * embeddedBackgroundColor; 
@property (readonly) NSColor * embeddedFontColor; 
@property (assign,nonatomic) char hasCheckedForName; 
@property (assign,nonatomic) char nameFound; 
@property (nonatomic,retain) IMHandle * sender;                                               //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * subject;                                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * time;                                                   //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSDate * timeRead;                                               //@synthesize timeRead=_timeRead - In the implementation block
@property (nonatomic,retain) NSDate * timeDelivered;                                          //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (nonatomic,retain) NSDate * timePlayed;                                             //@synthesize timePlayed=_timePlayed - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain,readonly) NSAttributedString * messageSubject;                    //@synthesize messageSubject=_messageSubject - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * guid;                                                 //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) long long messageID;                                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain,readonly) NSString * plainBody; 
@property (nonatomic,retain,readonly) NSString * senderName; 
@property (nonatomic,retain,readonly) NSString * summaryString; 
@property (nonatomic,copy) NSArray * fileTransferGUIDs;                                       //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (nonatomic,readonly) char hasInlineAttachments; 
@property (nonatomic,retain,readonly) NSArray * inlineAttachmentAttributesArray; 
@property (nonatomic,readonly) char isSent; 
@property (nonatomic,readonly) char isFinished; 
@property (nonatomic,readonly) char isTypingMessage; 
@property (nonatomic,readonly) char isLocatingMessage; 
@property (nonatomic,readonly) char isEmote; 
@property (nonatomic,readonly) char isFromMe; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) char isDelayed; 
@property (nonatomic,readonly) char isAutoReply; 
@property (nonatomic,readonly) char isDelivered; 
@property (nonatomic,readonly) char isRead; 
@property (nonatomic,readonly) char isAudioMessage; 
@property (nonatomic,readonly) char isPlayed; 
@property (nonatomic,readonly) char isAddressedToMe; 
@property (nonatomic,readonly) char isAlert; 
@property (nonatomic,readonly) char isSystemMessage; 
@property (assign,nonatomic) char isInvitationMessage;                                        //@synthesize isInvitationMessage=_isInvitationMessage - In the implementation block
@property (nonatomic,readonly) char hasDataDetectorResults; 
@property (nonatomic,readonly) char wasDowngraded; 
@property (nonatomic,readonly) char wasDataDetected; 
@property (assign,nonatomic) unsigned long long flags;                                        //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain,readonly) IMMessageItem * _imMessageItem; 
+(id)colorForIMColorAttribute:(id)arg1 ;
+(id)locatingMessageWithGuid:(id)arg1 error:(id)arg2 ;
+(id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4 ;
+(id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 ;
+(id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 ;
+(id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 ;
+(id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3 ;
+(id)messageFromIMMessageItemDictionary:(id)arg1 sender:(id)arg2 subject:(id)arg3 ;
+(id)_vCardDataWithCLLocation:(id)arg1 ;
-(id)fontFamily;
-(id)superText;
-(id)superMessageSubject;
-(NSColor *)embeddedBackgroundColor;
-(char)isInteresting;
-(char)isSoloInlineImage;
-(char)messageContainsText;
-(id)speechDescription;
-(char)hasFontAttributes;
-(NSColor *)embeddedFontColor;
-(void)updateSenderBackgroundColor;
-(id)fontSize;
-(char)isStale;
-(id)plainSummary;
-(char)hasCheckedForName;
-(char)nameFound;
-(void)setNameFound:(char)arg1 ;
-(void)setHasCheckedForName:(char)arg1 ;
-(char)isAddressedTo:(id)arg1 ;
-(IMHandle *)sender;
-(NSDate *)time;
-(NSString *)summaryString;
-(char)isAudioMessage;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 ;
-(IMMessageItem *)_imMessageItem;
-(char)isPlayed;
-(NSDate *)timePlayed;
-(char)isTypingMessage;
-(char)isInvitationMessage;
-(char)isLocatingMessage;
-(char)wasDataDetected;
-(char)isDelivered;
-(void)_updateSender:(id)arg1 ;
-(char)wasDowngraded;
-(void)_updateGUID:(id)arg1 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 ;
-(id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14 ;
-(void)_updateTime:(id)arg1 ;
-(NSDate *)timeRead;
-(void)_updateTimeRead:(id)arg1 ;
-(NSDate *)timeDelivered;
-(void)_updateTimeDelivered:(id)arg1 ;
-(void)_updateTimePlayed:(id)arg1 ;
-(void)_updateMessageID:(long long)arg1 ;
-(NSString *)plainBody;
-(NSString *)senderName;
-(char)hasInlineAttachments;
-(char)hasDataDetectorResults;
-(id)_copyWithFlags:(unsigned long long)arg1 ;
-(id)initWithSender:(id)arg1 fileTransfer:(id)arg2 ;
-(NSArray *)inlineAttachmentAttributesArray;
-(void)setIsAddressedToMe:(char)arg1 ;
-(char)isAddressedToMe;
-(char)isAlert;
-(long long)compare:(id)arg1 comparisonType:(long long)arg2 ;
-(void)_updateError:(id)arg1 ;
-(void)setIsInvitationMessage:(char)arg1 ;
-(void)_updateFileTransferGUIDs:(id)arg1 ;
-(NSArray *)fileTransferGUIDs;
-(char)isEmote;
-(char)isFromMe;
-(char)isDelayed;
-(char)isAutoReply;
-(char)isSystemMessage;
-(char)isSent;
-(NSAttributedString *)messageSubject;
-(long long)messageID;
-(char)isRead;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(char)isEmpty;
-(char)isFinished;
-(NSError *)error;
-(NSAttributedString *)text;
-(IMHandle *)subject;
-(unsigned long long)flags;
-(void)_updateText:(id)arg1 ;
-(NSString *)guid;
@end
