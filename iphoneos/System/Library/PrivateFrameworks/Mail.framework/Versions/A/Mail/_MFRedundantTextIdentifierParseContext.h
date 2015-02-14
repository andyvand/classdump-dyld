/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class _MFRedundantTextIdentifierAttachmentContext, NSDictionary;

@interface _MFRedundantTextIdentifierParseContext : NSObject {

	char _searchInForwardDirection;
	char _isParsingEntity;
	char _isParsingAttachment;
	char _attachmentIsTag;
	unsigned short _startTagCharacter;
	unsigned short _endTagCharacter;
	unsigned short _startEntityCharacter;
	unsigned short _endEntityCharacter;
	unsigned short _entityValueCharacter;
	SCD_Struct_MF19* _buffer;
	long long _bufferStartIndex;
	long long _bufferLength;
	long long _currentIndex;
	long long _startMatchIndexForCurrentLine;
	long long _entityStartIndex;
	_MFRedundantTextIdentifierAttachmentContext* _attachmentContext;
	long long _attachmentStartIndex;
	long long _attachmentEndIndex;
	NSDictionary* _attachmentContextsByURL;

}

@property (nonatomic,readonly) SCD_Struct_MF19* buffer;                                                    //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) long long bufferStartIndex;                                                 //@synthesize bufferStartIndex=_bufferStartIndex - In the implementation block
@property (nonatomic,readonly) long long bufferLength;                                                     //@synthesize bufferLength=_bufferLength - In the implementation block
@property (assign,nonatomic) long long currentIndex;                                                       //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) long long startMatchIndexForCurrentLine;                                      //@synthesize startMatchIndexForCurrentLine=_startMatchIndexForCurrentLine - In the implementation block
@property (assign,nonatomic) char searchInForwardDirection;                                                //@synthesize searchInForwardDirection=_searchInForwardDirection - In the implementation block
@property (nonatomic,readonly) unsigned short startTagCharacter;                                           //@synthesize startTagCharacter=_startTagCharacter - In the implementation block
@property (nonatomic,readonly) unsigned short endTagCharacter;                                             //@synthesize endTagCharacter=_endTagCharacter - In the implementation block
@property (nonatomic,readonly) unsigned short startEntityCharacter;                                        //@synthesize startEntityCharacter=_startEntityCharacter - In the implementation block
@property (nonatomic,readonly) unsigned short endEntityCharacter;                                          //@synthesize endEntityCharacter=_endEntityCharacter - In the implementation block
@property (assign,nonatomic) char isParsingEntity;                                                         //@synthesize isParsingEntity=_isParsingEntity - In the implementation block
@property (assign,nonatomic) unsigned short entityValueCharacter;                                          //@synthesize entityValueCharacter=_entityValueCharacter - In the implementation block
@property (assign,nonatomic) long long entityStartIndex;                                                   //@synthesize entityStartIndex=_entityStartIndex - In the implementation block
@property (assign,nonatomic) char isParsingAttachment;                                                     //@synthesize isParsingAttachment=_isParsingAttachment - In the implementation block
@property (nonatomic,retain) _MFRedundantTextIdentifierAttachmentContext * attachmentContext;              //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (assign,nonatomic) long long attachmentStartIndex;                                               //@synthesize attachmentStartIndex=_attachmentStartIndex - In the implementation block
@property (assign,nonatomic) long long attachmentEndIndex;                                                 //@synthesize attachmentEndIndex=_attachmentEndIndex - In the implementation block
@property (assign,nonatomic) char attachmentIsTag;                                                         //@synthesize attachmentIsTag=_attachmentIsTag - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attachmentContextsByURL;                                //@synthesize attachmentContextsByURL=_attachmentContextsByURL - In the implementation block
+(void)normalizeEntitiesInString:(id)arg1 ;
+(id)normalizedStringForEntity:(id)arg1 ;
-(SCD_Struct_MF19*)buffer;
-(long long)bufferStartIndex;
-(long long)bufferLength;
-(long long)startMatchIndexForCurrentLine;
-(long long)currentIndex;
-(char)searchInForwardDirection;
-(char)isParsingAttachment;
-(_MFRedundantTextIdentifierAttachmentContext *)attachmentContext;
-(long long)attachmentStartIndex;
-(char)attachmentIsTag;
-(NSDictionary *)attachmentContextsByURL;
-(id)charactersInMessageWithCurrentIndexMarked;
-(long long)remainingCharacters;
-(unsigned short)currentCharFromBuffer;
-(unsigned short)startTagCharacter;
-(char)advanceToEndOfCommentIfExists;
-(SCD_Struct_MF18)readElementIsCloseElement:(char*)arg1 shouldParseAttachmentTags:(char)arg2 ;
-(char)advanceToClosingTagMatchingOpenTag:(SCD_Struct_MF18)arg1 ;
-(unsigned short)endTagCharacter;
-(void)incrementCurrentIndex;
-(void)setCurrentIndex:(long long)arg1 ;
-(char)parseAttachmentFilenameFromAttribute:(CFStringRef)arg1 ;
-(void)setAttachmentStartIndex:(long long)arg1 ;
-(void)setAttachmentEndIndex:(long long)arg1 ;
-(void)setAttachmentIsTag:(char)arg1 ;
-(void)setIsParsingAttachment:(char)arg1 ;
-(void)setAttachmentContext:(_MFRedundantTextIdentifierAttachmentContext *)arg1 ;
-(void)incrementCurrentIndexBy:(long long)arg1 ;
-(char)isParsingEntity;
-(unsigned short)entityValueCharacter;
-(void)setIsParsingEntity:(char)arg1 ;
-(void)setEntityValueCharacter:(unsigned short)arg1 ;
-(void)setEntityStartIndex:(long long)arg1 ;
-(SCD_Struct_MF18)readAndAdvanceToEndOfTagIsCloseTag:(char*)arg1 shouldParseAttachmentTags:(char)arg2 ;
-(char)isBlockLevelTag:(SCD_Struct_MF18)arg1 ;
-(unsigned short)startEntityCharacter;
-(char)advanceToEndOfAttachmentPlaceholderIfExists;
-(unsigned short)readAndAdvanceToEndOfEntityIfExists;
-(unsigned short)endEntityCharacter;
-(long long)advanceToEndOfLine:(char*)arg1 ;
-(unsigned short)charFromBufferAtIndex:(long long)arg1 ;
-(id)initWithBuffer:(SCD_Struct_MF19*)arg1 bufferStartIndex:(long long)arg2 bufferLength:(long long)arg3 searchInForwardDirection:(char)arg4 attachmentContextsByURL:(id)arg5 ;
-(unsigned short)nextCharacterToMatch;
-(long long)advancePastNonContentTagsAndWhitespaceParsingAttachmentPlaceholders:(char)arg1 ;
-(long long)advanceToEndOfLine;
-(void)resetCurrentIndex;
-(id)parseAndSanitizeAttributionLineInRange:(SCD_Struct_MF18*)arg1 ;
-(void)setStartMatchIndexForCurrentLine:(long long)arg1 ;
-(void)setSearchInForwardDirection:(char)arg1 ;
-(long long)entityStartIndex;
-(long long)attachmentEndIndex;
-(id)description;
@end

