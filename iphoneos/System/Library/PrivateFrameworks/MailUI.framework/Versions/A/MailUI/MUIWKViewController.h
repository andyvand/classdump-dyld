/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <MailUI/WKBrowsingContextLoadDelegate.h>

@protocol NSObjectNSSecureCoding;
@class MUIWebDocumentView, NSMutableArray, MUIWebDocumentViewGroup, NSMapTable, MUIContextMenuController, MUIWebFindController, MUILinkEditWindowController, MUIJavaScriptController, NSString, NSPort;

@interface MUIWKViewController : NSViewController <WKBrowsingContextLoadDelegate> {

	char _editable;
	char _webInspectorEnabled;
	MUIWebDocumentView* _webDocumentView;
	NSMutableArray* _pendingDocumentInteractionRequests;
	char _ignoreKVOHTMLChanges;
	char _isEditing;
	MUIWebDocumentViewGroup* _viewGroup;
	NSMapTable* _attachmentControllersByAttachment;
	MUIContextMenuController* _contextMenuController;
	MUIWebFindController* _findController;
	MUILinkEditWindowController* _linkEditController;
	MUIJavaScriptController* _javaScriptController;
	/*^block*/id _generateWebDocumentCompletionHandler;
	/*^block*/id _cacheDisplayInRectCompletionHandler;
	NSString* _bundleReplyMessageString;
	id<NSObject><NSSecureCoding> _bundleReplyMessageData;
	NSPort* _bundleMessageReplyPort;

}

@property (assign,nonatomic) MUIWebDocumentView * webDocumentView; 
@property (nonatomic,retain) MUIWebDocumentViewGroup * viewGroup;                              //@synthesize viewGroup=_viewGroup - In the implementation block
@property (assign,nonatomic) char editable; 
@property (nonatomic,retain) NSMapTable * attachmentControllersByAttachment;                   //@synthesize attachmentControllersByAttachment=_attachmentControllersByAttachment - In the implementation block
@property (nonatomic,retain) MUIContextMenuController * contextMenuController;                 //@synthesize contextMenuController=_contextMenuController - In the implementation block
@property (nonatomic,retain) MUIWebFindController * findController;                            //@synthesize findController=_findController - In the implementation block
@property (nonatomic,retain) MUILinkEditWindowController * linkEditController;                 //@synthesize linkEditController=_linkEditController - In the implementation block
@property (nonatomic,retain) MUIJavaScriptController * javaScriptController;                   //@synthesize javaScriptController=_javaScriptController - In the implementation block
@property (assign,nonatomic) char webInspectorEnabled; 
@property (nonatomic,copy) id generateWebDocumentCompletionHandler;                            //@synthesize generateWebDocumentCompletionHandler=_generateWebDocumentCompletionHandler - In the implementation block
@property (nonatomic,copy) id cacheDisplayInRectCompletionHandler;                             //@synthesize cacheDisplayInRectCompletionHandler=_cacheDisplayInRectCompletionHandler - In the implementation block
@property (nonatomic,copy) NSString * bundleReplyMessageString;                                //@synthesize bundleReplyMessageString=_bundleReplyMessageString - In the implementation block
@property (nonatomic,retain) id<NSObject><NSSecureCoding> bundleReplyMessageData;              //@synthesize bundleReplyMessageData=_bundleReplyMessageData - In the implementation block
@property (nonatomic,readonly) NSPort * bundleMessageReplyPort;                                //@synthesize bundleMessageReplyPort=_bundleMessageReplyPort - In the implementation block
@property (assign,nonatomic) char ignoreKVOHTMLChanges;                                        //@synthesize ignoreKVOHTMLChanges=_ignoreKVOHTMLChanges - In the implementation block
@property (assign,nonatomic) char isEditing;                                                   //@synthesize isEditing=_isEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newReplyMessageNameForMessageName:(id)arg1 ;
-(char)webInspectorEnabled;
-(void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(char)arg3 ;
-(void)saveAttachmentsWithPanel:(id)arg1 ;
-(void)exportAttachments:(id)arg1 toApplication:(id)arg2 ;
-(MUILinkEditWindowController *)linkEditController;
-(char)canExportAttachments:(id)arg1 toApplication:(id)arg2 ;
-(MUIWebDocumentView *)webDocumentView;
-(void)evaluateDocumentInteractionRequest:(/*^block*/id)arg1 ;
-(MUIJavaScriptController *)javaScriptController;
-(void)setWebDocumentView:(MUIWebDocumentView *)arg1 ;
-(void)setViewGroup:(MUIWebDocumentViewGroup *)arg1 ;
-(MUIWebFindController *)findController;
-(MUIWebDocumentViewGroup *)viewGroup;
-(void)setWebInspectorEnabled:(char)arg1 ;
-(void)cacheDisplayInRect:(CGRect)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingCacheDisplayInRect;
-(void)setAttachments:(id)arg1 asHidden:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)appendAttachment:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)appendString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)appendAttributedString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAttachment:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateStyleInlinedWebDocument:(/*^block*/id)arg1 ;
-(void)generateSelectionWebDocument:(/*^block*/id)arg1 ;
-(NSMapTable *)attachmentControllersByAttachment;
-(void)reloadDocument;
-(void)toggleAutomaticListInsertion:(id)arg1 ;
-(void)receiveMessageFromWebProcessController:(id)arg1 messageBody:(id)arg2 wkObject:(id)arg3 ;
-(void)setFindController:(MUIWebFindController *)arg1 ;
-(id)sendMessageToWebProcessControllerSynchronously:(id)arg1 messageBody:(id)arg2 ;
-(void)_muiWKViewControllerCommonInit;
-(void)_documentSelectionChanged:(id)arg1 ;
-(void)setContextMenuController:(MUIContextMenuController *)arg1 ;
-(MUIContextMenuController *)contextMenuController;
-(void)setJavaScriptController:(MUIJavaScriptController *)arg1 ;
-(void)setLinkEditController:(MUILinkEditWindowController *)arg1 ;
-(void)_fullResolutionDataDidBecomeAvailable:(id)arg1 ;
-(char)ignoreKVOHTMLChanges;
-(void)_updateImageScaling;
-(void)_updateFontPreferences;
-(void)_updateDebuggingPreferences;
-(void)_didLoadMainFrameTimeout;
-(void)_runPendingDocumentInteractionRequests;
-(void)_webProcessDidLayoutContent:(id)arg1 ;
-(void)_webProcessDidPaintContent:(id)arg1 ;
-(void)_didGenerateStyleInlinedWebDocument:(id)arg1 ;
-(void)_didGenerateSelectionWebDocument:(id)arg1 ;
-(void)_completeWebDocumentPasteboardType;
-(void)_didReceiveCacheDisplayData:(id)arg1 ;
-(void)_ddExternalUIRequested:(id)arg1 ;
-(NSString *)bundleReplyMessageString;
-(void)setBundleReplyMessageData:(id<NSObject><NSSecureCoding>)arg1 ;
-(NSPort *)bundleMessageReplyPort;
-(void)setBundleReplyMessageString:(NSString *)arg1 ;
-(void)sendMessageToWebProcessController:(id)arg1 messageBody:(id)arg2 ;
-(id<NSObject><NSSecureCoding>)bundleReplyMessageData;
-(void)_documentContentChanged:(id)arg1 ;
-(id)_stringByRemovingCharactersInSet:(id)arg1 fromString:(id)arg2 ;
-(void)_beginEditing;
-(id)generateWebDocumentCompletionHandler;
-(void)setGenerateWebDocumentCompletionHandler:(id)arg1 ;
-(void)setIgnoreKVOHTMLChanges:(char)arg1 ;
-(void)_updateRepresentedObjectWithDocumentContents:(id)arg1 ;
-(void)_endEditing;
-(void)_saveAttachment:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3 makePathUnique:(char)arg4 ;
-(void)_noteFileSystemChanged:(id)arg1 ;
-(void)setCacheDisplayInRectCompletionHandler:(id)arg1 ;
-(id)cacheDisplayInRectCompletionHandler;
-(void)editLink:(id)arg1 ;
-(id)_imageAttachments;
-(void)setAttachmentControllersByAttachment:(NSMapTable *)arg1 ;
-(void)setIsEditing:(char)arg1 ;
-(void)browsingContextControllerDidFinishLoad:(id)arg1 ;
-(char)editable;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)view;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)commitEditing;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)discardEditing;
-(char)isEditing;
-(void)setEditable:(char)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)tearDown;
@end

