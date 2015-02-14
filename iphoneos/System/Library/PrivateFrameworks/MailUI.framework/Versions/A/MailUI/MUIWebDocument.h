/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <MailUI/NSCoding.h>
#import <MailUI/NSCopying.h>

@class NSString, NSMutableDictionary, NSArray, NSURL, NSDictionary, NSError, MUIRemoteImageCollector;

@interface MUIWebDocument : NSObject <NSCoding, NSCopying> {

	NSString* _html;
	NSMutableDictionary* _jsDocumentContext;
	char _blockRemoteContent;
	char _hasBlockedRemoteContent;
	char _isEncrypted;
	char _isSigned;
	NSArray* _attachments;
	Class _webAttachmentClass;
	unsigned long long _imageScale;
	NSURL* _baseURL;
	NSDictionary* _dataDetectorsContext;
	NSError* _parseError;
	unsigned long long _originalEncoding;
	MUIRemoteImageCollector* _remoteImageCollector;
	NSArray* _signers;
	NSArray* _signerNames;

}

@property (nonatomic,copy) NSString * html;                                               //@synthesize html=_html - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                                         //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) unsigned long long imageScale;                               //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,nonatomic) Class webAttachmentClass;                                    //@synthesize webAttachmentClass=_webAttachmentClass - In the implementation block
@property (nonatomic,copy) NSArray * signers;                                             //@synthesize signers=_signers - In the implementation block
@property (nonatomic,copy) NSArray * signerNames;                                         //@synthesize signerNames=_signerNames - In the implementation block
@property (assign,nonatomic) char isEncrypted;                                            //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (assign,nonatomic) char isSigned;                                               //@synthesize isSigned=_isSigned - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * jsDocumentContext; 
@property (nonatomic,copy) NSDictionary * dataDetectorsContext;                           //@synthesize dataDetectorsContext=_dataDetectorsContext - In the implementation block
@property (nonatomic,retain) NSError * parseError;                                        //@synthesize parseError=_parseError - In the implementation block
@property (assign,nonatomic) char blockRemoteContent;                                     //@synthesize blockRemoteContent=_blockRemoteContent - In the implementation block
@property (assign,nonatomic) char hasBlockedRemoteContent;                                //@synthesize hasBlockedRemoteContent=_hasBlockedRemoteContent - In the implementation block
@property (nonatomic,retain) MUIRemoteImageCollector * remoteImageCollector;              //@synthesize remoteImageCollector=_remoteImageCollector - In the implementation block
@property (assign,nonatomic) unsigned long long originalEncoding;                         //@synthesize originalEncoding=_originalEncoding - In the implementation block
-(void)setImageScale:(unsigned long long)arg1 ;
-(id)_defaultDocumentHTML;
-(void)_muiWebDocumentCommonInit;
-(NSDictionary *)jsDocumentContext;
-(void)setValueInJsDocumentContext:(id)arg1 forKey:(id)arg2 ;
-(id)attachmentForContentID:(id)arg1 ;
-(Class)webAttachmentClass;
-(void)setWebAttachmentClass:(Class)arg1 ;
-(unsigned long long)imageScale;
-(NSDictionary *)dataDetectorsContext;
-(void)setDataDetectorsContext:(NSDictionary *)arg1 ;
-(NSError *)parseError;
-(void)setParseError:(NSError *)arg1 ;
-(char)blockRemoteContent;
-(void)setBlockRemoteContent:(char)arg1 ;
-(char)hasBlockedRemoteContent;
-(void)setHasBlockedRemoteContent:(char)arg1 ;
-(unsigned long long)originalEncoding;
-(void)setOriginalEncoding:(unsigned long long)arg1 ;
-(MUIRemoteImageCollector *)remoteImageCollector;
-(void)setRemoteImageCollector:(MUIRemoteImageCollector *)arg1 ;
-(void)setIsEncrypted:(char)arg1 ;
-(NSArray *)signers;
-(void)setSigners:(NSArray *)arg1 ;
-(NSArray *)signerNames;
-(void)setSignerNames:(NSArray *)arg1 ;
-(char)isSigned;
-(void)setIsSigned:(char)arg1 ;
-(char)isEncrypted;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)init;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attachments;
-(NSURL *)baseURL;
-(void)setAttachments:(NSArray *)arg1 ;
@end

