/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCMessageGenerator : NSObject {

	char _shouldConvertCompositeImages;
	char _shouldMarkNonresizableAttachmentData;
	char _createsMimeAlternatives;
	char _createsPlainTextOnly;
	char _createsRichText;
	char _allows8BitMimeParts;
	char _allowsBinaryMimeParts;
	char _allowsAppleDoubleAttachments;
	char _signsOutput;
	char _encryptsOutput;
	unsigned long long _preferredEncoding;
	unsigned long long _encodingHint;

}

@property (assign,nonatomic) unsigned long long preferredEncoding;              //@synthesize preferredEncoding=_preferredEncoding - In the implementation block
@property (assign,nonatomic) unsigned long long encodingHint;                   //@synthesize encodingHint=_encodingHint - In the implementation block
@property (assign,nonatomic) char createsMimeAlternatives;                      //@synthesize createsMimeAlternatives=_createsMimeAlternatives - In the implementation block
@property (assign,nonatomic) char createsPlainTextOnly;                         //@synthesize createsPlainTextOnly=_createsPlainTextOnly - In the implementation block
@property (assign,nonatomic) char alwaysCreatesRichText;                        //@synthesize createsRichText=_createsRichText - In the implementation block
@property (assign,nonatomic) char allows8BitMimeParts;                          //@synthesize allows8BitMimeParts=_allows8BitMimeParts - In the implementation block
@property (assign,nonatomic) char allowsBinaryMimeParts;                        //@synthesize allowsBinaryMimeParts=_allowsBinaryMimeParts - In the implementation block
@property (assign,nonatomic) char allowsAppleDoubleAttachments;                 //@synthesize allowsAppleDoubleAttachments=_allowsAppleDoubleAttachments - In the implementation block
@property (assign,nonatomic) char signsOutput;                                  //@synthesize signsOutput=_signsOutput - In the implementation block
@property (assign,nonatomic) char encryptsOutput;                               //@synthesize encryptsOutput=_encryptsOutput - In the implementation block
+(id)domainHintForResentIDFromHeaders:(id)arg1 hasResentFromHeaders:(char*)arg2 ;
-(void)setCreatesMimeAlternatives:(char)arg1 ;
-(void)setAllowsAppleDoubleAttachments:(char)arg1 ;
-(unsigned long long)preferredEncoding;
-(id)_newPartAndDataForString:(id)arg1 charset:(id)arg2 subtype:(id)arg3 partData:(id)arg4 ;
-(id)_newMimePartWithWebResource:(id)arg1 partData:(id)arg2 seenURLStrings:(id)arg3 ;
-(void)_recursivelyAddSubresourcesFromArchive:(id)arg1 toArray:(id)arg2 ;
-(id)_newPartForAttachment:(id)arg1 partData:(id)arg2 ;
-(id)_newPartForStationeryCompositeImage:(id)arg1 partData:(id)arg2 ;
-(id)_newPlainTextPartWithAttributedString:(id)arg1 partData:(id)arg2 ;
-(id)_newOutgoingMessageFromTopLevelMimePart:(id)arg1 topLevelHeaders:(id)arg2 withPartData:(id)arg3 ;
-(char)createsPlainTextOnly;
-(char)alwaysCreatesRichText;
-(id)_newMimePartWithAttributedString:(id)arg1 partData:(id)arg2 outputRich:(char)arg3 ;
-(char)signsOutput;
-(id)_newOutgoingMessage;
-(id)newMessageByRemovingAttachmentsFromMessage:(id)arg1 ;
-(id)_newDataForMimePart:(id)arg1 withPartData:(id)arg2 ;
-(char)_encodeDataForMimePart:(id)arg1 withPartData:(id)arg2 ;
-(void)_appendHeadersForMimePart:(id)arg1 toHeaders:(id)arg2 ;
-(char)encryptsOutput;
-(char)allowsBinaryMimeParts;
-(char)createsMimeAlternatives;
-(void)_setMimeTypeFromAttachment:(id)arg1 onMimePart:(id)arg2 filename:(id*)arg3 ;
-(char)allowsAppleDoubleAttachments;
-(id)_hfsFilenameDataWithFilename:(id)arg1 partData:(id)arg2 ;
-(id)_newPartForDirectoryAttachment:(id)arg1 partData:(id)arg2 ;
-(id)_newRFC2047NameParameterDataForMimePart:(id)arg1 ;
-(unsigned long long)_preferredEncodingUsingHintIfNecessary;
-(char)allows8BitMimeParts;
-(void)setShouldConvertCompositeImages:(char)arg1 ;
-(void)setShouldMarkNonresizableAttachmentData:(char)arg1 ;
-(id)newDataForAttributedString:(id)arg1 ;
-(void)setCreatesPlainTextOnly:(char)arg1 ;
-(void)setAlwaysCreatesRichText:(char)arg1 ;
-(void)setAllows8BitMimeParts:(char)arg1 ;
-(void)setAllowsBinaryMimeParts:(char)arg1 ;
-(void)setSignsOutput:(char)arg1 ;
-(char)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3 ;
-(id)newMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(void)setPreferredEncoding:(unsigned long long)arg1 ;
-(void)setEncodingHint:(unsigned long long)arg1 ;
-(id)newMessageFromMessage:(id)arg1 reencodedWithCharset:(id)arg2 ;
-(id)newMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3 ;
-(void)setEncryptsOutput:(char)arg1 ;
-(id)newMessageWithAttributedString:(id)arg1 headers:(id)arg2 ;
-(id)newMessageWithBodyData:(id)arg1 headers:(id)arg2 ;
-(unsigned long long)encodingHint;
-(id)init;
@end

