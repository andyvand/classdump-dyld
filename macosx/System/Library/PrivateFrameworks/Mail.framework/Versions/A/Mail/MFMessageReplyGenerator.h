/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MUIWebDocumentView, NSString, MCMutableMessageHeaders;

@interface MFMessageReplyGenerator : NSObject {

	MUIWebDocumentView* _documentView;
	/*^block*/id _completionHandler;
	NSString* _contentToAdd;
	NSString* _attributionLine;
	MCMutableMessageHeaders* _messageHeaders;
	MFMessageReplyGenerator* _me;

}

@property (nonatomic,retain) MUIWebDocumentView * documentView;                     //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * contentToAdd;                                 //@synthesize contentToAdd=_contentToAdd - In the implementation block
@property (nonatomic,copy) NSString * attributionLine;                              //@synthesize attributionLine=_attributionLine - In the implementation block
@property (nonatomic,retain) MCMutableMessageHeaders * messageHeaders;              //@synthesize messageHeaders=_messageHeaders - In the implementation block
@property (nonatomic,retain) MFMessageReplyGenerator * me;                          //@synthesize me=_me - In the implementation block
-(MFMessageReplyGenerator *)me;
-(void)setMe:(MFMessageReplyGenerator *)arg1 ;
-(void)setContentToAdd:(NSString *)arg1 ;
-(void)setAttributionLine:(NSString *)arg1 ;
-(void)setMessageHeaders:(MCMutableMessageHeaders *)arg1 ;
-(NSString *)attributionLine;
-(NSString *)contentToAdd;
-(MCMutableMessageHeaders *)messageHeaders;
-(void)generateMessageWithType:(unsigned long long)arg1 originalMessage:(id)arg2 newContent:(id)arg3 forwardHeaders:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MUIWebDocumentView *)documentView;
-(void)setDocumentView:(MUIWebDocumentView *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
@end

