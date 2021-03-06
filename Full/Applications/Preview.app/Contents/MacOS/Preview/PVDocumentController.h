/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <AppKit/NSDocumentController.h>

@class NSMutableArray, NSMutableDictionary, NSSet;

@interface PVDocumentController : NSDocumentController {

	NSMutableArray* _windowControllers;
	NSMutableDictionary* _fileIDsToDocuments;
	char _addToRecentDocumentURL;
	char _checkingDocumentsForExternalChange;
	NSSet* _readableImageTypes;
	NSSet* _readablePDFTypes;
	NSSet* _readableQuickLookTypes;
	NSSet* _readableC3DTypes;
	NSSet* _allReadableTypes;
	NSMutableArray* _activeLoadGroups;
	unsigned long long _selfTestCount;
	NSAppleEventManagerSuspensionRef _selfTestAESuspensionID;
	id _closeAllOuterDelegate;
	SEL _closeAllOuterSelector;

}

@property (getter=isCheckingDocumentsForExternalChange) char checkingDocumentsForExternalChange;              //@synthesize checkingDocumentsForExternalChange=_checkingDocumentsForExternalChange - In the implementation block
+(id)sharedDocumentController;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(char)_isPurgedItemAtURL:(id)arg1 ;
+(char)_isInaccessibleUbiquitousItemAtURL:(id)arg1 ;
-(void)_openFiles:(id)arg1 openingMode:(long long)arg2 restoringWindow:(char)arg3 display:(char)arg4 usingExistingWindowController:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)checkDocumentsForExternalChange:(id)arg1 ;
-(id)openableBundleTypes;
-(void)pvDocController:(id)arg1 shouldTerminate:(char)arg2 ;
-(void)pvNoteNewRecentDocumentURL:(id)arg1 ;
-(void)openFiles:(id)arg1 ;
-(char)canOpenDocumentAtURL:(id)arg1 typeID:(id*)arg2 ;
-(void)addDocumentAtURL:(id)arg1 ofType:(id)arg2 fromTopLevelURL:(id)arg3 toLoadGroup:(id)arg4 ;
-(void)completeLoadGroup:(id)arg1 ;
-(id)typeIdentifierOfFileURL:(id)arg1 ;
-(id)frontmostWindowController;
-(void)openFilesUntitled:(id)arg1 inWindowController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)readableQuickLookTypes;
-(char)isCheckingDocumentsForExternalChange;
-(void)setCheckingDocumentsForExternalChange:(char)arg1 ;
-(void)checkDocumentForExternalChange:(id)arg1 ;
-(void)fileChangedAlertSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)allReadableTypes;
-(id)readableImageTypes;
-(id)readablePDFTypes;
-(void)_openDocumentsWithContentsOfURLs:(id)arg1 display:(char)arg2 presentErrors:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createWindowWithMediaContainers:(id)arg1 ;
-(void)openFiles:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)openFiles:(id)arg1 inWindowController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)openFilesUntitled:(id)arg1 ;
-(void)openFiles:(id)arg1 inOpeningMode:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)openBookmark:(id)arg1 ;
-(Class)containerClassForFileUTI:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)_openFile:(id)arg1 ;
-(void)openDocument:(id)arg1 ;
-(void)addDocument:(id)arg1 ;
-(id)documentForURL:(id)arg1 ;
-(void)openDocumentWithContentsOfURL:(id)arg1 display:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDocument:(id)arg1 ;
-(id)_setupOpenPanel;
-(id)_openableTypes;
-(void)beginOpenPanel:(id)arg1 forTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)makeDocumentWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)makeDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id*)arg4 ;
-(void)noteNewRecentDocumentURL:(id)arg1 ;
-(void)_closeAllDocumentsWithDelegate:(id)arg1 shouldTerminateSelector:(SEL)arg2 ;
-(void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
@end

