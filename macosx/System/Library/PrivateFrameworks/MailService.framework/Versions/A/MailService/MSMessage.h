/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailService.framework/Versions/A/MailService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailService/NSSecureCoding.h>

@class NSDate, NSString, NSArray;

@interface MSMessage : NSObject <NSSecureCoding> {

	char _isRead;
	unsigned _messageFlags;
	NSDate* _dateReceived;
	NSDate* _dateSent;
	NSString* _sender;
	NSString* _subject;
	NSArray* _toRecipients;
	NSArray* _CCRecipients;
	NSString* _snippet;
	NSString* _messageID;
	NSString* _path;
	long long _libraryID;

}

@property (copy) NSDate * dateReceived;                //@synthesize dateReceived=_dateReceived - In the implementation block
@property (copy) NSDate * dateSent;                    //@synthesize dateSent=_dateSent - In the implementation block
@property (copy) NSString * sender;                    //@synthesize sender=_sender - In the implementation block
@property (copy) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (copy) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (copy) NSArray * CCRecipients;               //@synthesize CCRecipients=_CCRecipients - In the implementation block
@property (copy) NSString * snippet;                   //@synthesize snippet=_snippet - In the implementation block
@property (copy) NSString * messageID;                 //@synthesize messageID=_messageID - In the implementation block
@property (copy) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (assign) unsigned messageFlags;              //@synthesize messageFlags=_messageFlags - In the implementation block
@property (assign) long long libraryID;                //@synthesize libraryID=_libraryID - In the implementation block
@property (assign) char isRead;                        //@synthesize isRead=_isRead - In the implementation block
+(char)supportsSecureCoding;
+(id)toOrCCRecipientsAllowedClasses;
-(NSString *)sender;
-(void)setDateSent:(NSDate *)arg1 ;
-(NSArray *)toRecipients;
-(unsigned)messageFlags;
-(void)setIsRead:(char)arg1 ;
-(long long)libraryID;
-(NSDate *)dateSent;
-(void)setDateReceived:(NSDate *)arg1 ;
-(NSDate *)dateReceived;
-(NSString *)messageID;
-(void)setToRecipients:(NSArray *)arg1 ;
-(void)setLibraryID:(long long)arg1 ;
-(void)setMessageFlags:(unsigned)arg1 ;
-(void)setMessageID:(NSString *)arg1 ;
-(char)isRead;
-(void)setSnippet:(NSString *)arg1 ;
-(NSString *)snippet;
-(id)description;
-(NSString *)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSender:(NSString *)arg1 ;
-(NSArray *)CCRecipients;
-(void)setCCRecipients:(NSArray *)arg1 ;
-(id)initWithDateReceived:(id)arg1 dateSent:(id)arg2 sender:(id)arg3 subject:(id)arg4 toRecipients:(id)arg5 CCRecipients:(id)arg6 snippet:(id)arg7 messageID:(id)arg8 path:(id)arg9 messageFlags:(unsigned)arg10 libraryID:(long long)arg11 isRead:(char)arg12 ;
@end

