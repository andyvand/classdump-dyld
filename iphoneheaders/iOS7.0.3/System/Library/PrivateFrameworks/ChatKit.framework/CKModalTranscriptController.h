/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptController.h>

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController {

	BOOL _mimeType;
	BOOL _alreadySetUp;
	NSMutableArray* _partsToInsert;
	NSMutableArray* _typesToInsert;
	int _entryViewInvisible;
	BOOL _cameraSelectionDisabled;
	BOOL _forceMMS;

}

@property (assign,nonatomic) BOOL mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) BOOL forceMMS;              //@synthesize forceMMS=_forceMMS - In the implementation block
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)mimeType;
-(BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2 ;
-(void)registerForNotifications;
-(void)_setConversation:(id)arg1 ;
-(BOOL)_shouldAllowCameraAttachments;
-(void)transitionFromNewMessageToConversation;
-(BOOL)_shouldUseExistingConversations;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)insertTextPart:(id)arg1 ;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)_addPart:(id)arg1 ;
-(BOOL)_insertMediaObject:(id)arg1 ;
-(void)_conversationListDidFinishLoading:(id)arg1 ;
-(void)setMimeType:(BOOL)arg1 ;
-(void)disableCameraAttachments;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(BOOL)_shouldUseDefaultFirstResponder;
@end
