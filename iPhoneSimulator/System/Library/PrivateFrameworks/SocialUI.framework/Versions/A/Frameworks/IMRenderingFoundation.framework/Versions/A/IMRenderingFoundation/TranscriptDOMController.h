/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
@class DOMDocument, DOMHTMLBodyElement, ChatItemDOMProvider, FileTransferDOMProvider, TranscriptStyleController, TranscriptDOMEventHandler, FileTransferEventHandler, IMTranscriptChatItem, IMMessage, NSMutableDictionary;

@interface TranscriptDOMController : NSObject {

	char _isAnimatingReceipt;
	char _allowsPlugins;
	DOMDocument* _DOM;
	DOMHTMLBodyElement* _body;
	ChatItemDOMProvider* _domProvider;
	FileTransferDOMProvider* _fileTransferDomProvider;
	TranscriptStyleController* _styleController;
	TranscriptDOMEventHandler* _eventHandler;
	FileTransferEventHandler* _fileTransferEventHandler;
	IMTranscriptChatItem* _lastChatItem;
	IMMessage* _lastMessage;
	NSMutableDictionary* _chatItemGUIDToDDElement;

}

@property (nonatomic,retain) DOMDocument * DOM;                                                //@synthesize DOM=_DOM - In the implementation block
@property (nonatomic,retain) DOMHTMLBodyElement * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) ChatItemDOMProvider * domProvider;                                //@synthesize domProvider=_domProvider - In the implementation block
@property (nonatomic,retain) FileTransferDOMProvider * fileTransferDomProvider;                //@synthesize fileTransferDomProvider=_fileTransferDomProvider - In the implementation block
@property (assign,nonatomic,__weak) TranscriptStyleController * styleController;               //@synthesize styleController=_styleController - In the implementation block
@property (nonatomic,retain) TranscriptDOMEventHandler * eventHandler;                         //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) FileTransferEventHandler * fileTransferEventHandler;              //@synthesize fileTransferEventHandler=_fileTransferEventHandler - In the implementation block
@property (nonatomic,retain) IMTranscriptChatItem * lastChatItem;                              //@synthesize lastChatItem=_lastChatItem - In the implementation block
@property (nonatomic,retain) IMMessage * lastMessage;                                          //@synthesize lastMessage=_lastMessage - In the implementation block
@property (assign,nonatomic) char isAnimatingReceipt;                                          //@synthesize isAnimatingReceipt=_isAnimatingReceipt - In the implementation block
@property (assign,nonatomic) char allowsPlugins;                                               //@synthesize allowsPlugins=_allowsPlugins - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * chatItemGUIDToDDElement;                    //@synthesize chatItemGUIDToDDElement=_chatItemGUIDToDDElement - In the implementation block
-(void)setBody:(DOMHTMLBodyElement *)arg1 ;
-(DOMHTMLBodyElement *)body;
-(IMMessage *)lastMessage;
-(id)initWithTranscriptStyleController:(id)arg1 ;
-(DOMDocument *)DOM;
-(void)setStyleController:(TranscriptStyleController *)arg1 ;
-(void)showNamesAndPictures;
-(void)showPictures;
-(void)setDOM:(DOMDocument *)arg1 ;
-(ChatItemDOMProvider *)domProvider;
-(FileTransferDOMProvider *)fileTransferDomProvider;
-(TranscriptStyleController *)styleController;
-(FileTransferEventHandler *)fileTransferEventHandler;
-(char)_shouldOverrideSelectionColorForAqua;
-(void)_anonymizeChatWindow:(id)arg1 ;
-(void)setNameStyle;
-(void)setLastMessage:(IMMessage *)arg1 ;
-(void)setLastChatItem:(IMTranscriptChatItem *)arg1 ;
-(void)insertChatItem:(id)arg1 betweenPreviousItem:(id)arg2 andNextItem:(id)arg3 ;
-(void)_setChatItemGroupAttributes:(id)arg1 ;
-(void)removeChatItemWithGUID:(id)arg1 ;
-(void)updateOldElement:(id)arg1 toMatchNewElement:(id)arg2 ;
-(void)dateFormatDidChange;
-(void)appendChatItem:(id)arg1 ;
-(void)moveChatItemGUID:(id)arg1 toBetweenPreviousItem:(id)arg2 andNextItem:(id)arg3 ;
-(void)removeChatItem:(id)arg1 ;
-(void)rebuildChatItem:(id)arg1 ;
-(void)showMyPicture;
-(void)showNames;
-(void)setWatchMessageAddressing:(char)arg1 ;
-(void)setSampleTranscriptMode;
-(char)isSampleTranscript;
-(void)emptyBody;
-(CGRect)rectOfChatItemWithGUID:(id)arg1 ;
-(void)setDomProvider:(ChatItemDOMProvider *)arg1 ;
-(void)setFileTransferDomProvider:(FileTransferDOMProvider *)arg1 ;
-(void)setFileTransferEventHandler:(FileTransferEventHandler *)arg1 ;
-(IMTranscriptChatItem *)lastChatItem;
-(char)isAnimatingReceipt;
-(void)setIsAnimatingReceipt:(char)arg1 ;
-(char)allowsPlugins;
-(void)setAllowsPlugins:(char)arg1 ;
-(NSMutableDictionary *)chatItemGUIDToDDElement;
-(void)setChatItemGUIDToDDElement:(NSMutableDictionary *)arg1 ;
-(void)setTextSize:(long long)arg1 ;
-(void)dealloc;
-(TranscriptDOMEventHandler *)eventHandler;
-(void)setEventHandler:(TranscriptDOMEventHandler *)arg1 ;
@end
