/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preview/Preview-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Preview/NSToolbarDelegate.h>
#import <Preview/NSTableViewDelegate.h>

@class NSView, NSColorWell, NSTextField, NSButton, NSMatrix, NSPopUpButton, NSString;

@interface PVPreferencesController : NSWindowController <NSToolbarDelegate, NSTableViewDelegate> {

	NSView* _generalPane;
	NSView* _imagesPane;
	NSView* _pdfPane;
	NSColorWell* _generalWindowbackgroundColor;
	NSTextField* _pdfAnnotationUserName;
	NSButton* _pdfAnnotationUseUserName;
	NSMatrix* _imagesRespectDPIMatrix;
	NSMatrix* _imagesWindowMatrix;
	NSPopUpButton* _pdfDefaultPageViewModePopup;
	NSButton* _PDFAntiAliased;
	NSButton* _PDFOpenWithSidebar;
	NSButton* _PDFLogicalPages;
	NSButton* _PDFRememberPage;
	NSMatrix* _PDFRespectDPIMatrix;
	NSView* _currentView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sharedInstance;
-(void)openPreferencePanel;
-(void)prefsToPanel;
-(void)selectGeneralPane:(id)arg1 ;
-(void)selectImagesPane:(id)arg1 ;
-(void)selectPDFPane:(id)arg1 ;
-(void)pdfDefaultPageViewModeChanged:(id)arg1 ;
-(void)selectPane:(long long)arg1 ;
-(void)replaceSubview:(id)arg1 ;
-(void)openToGeneralPane:(id)arg1 ;
-(void)openToImagesPane:(id)arg1 ;
-(void)openToPDFPane:(id)arg1 ;
-(void)generalWindowBackgroundColorChanged:(id)arg1 ;
-(void)imagesRespectImageDPIChanged:(id)arg1 ;
-(void)imagesWindowOpenChanged:(id)arg1 ;
-(void)pdfAntiAliasOptionChanged:(id)arg1 ;
-(void)pdfLogicalPagesChanged:(id)arg1 ;
-(void)pdfRememberPageChanged:(id)arg1 ;
-(void)pdfRespectScreenDPIForScaleChanged:(id)arg1 ;
-(void)pdfOpenWithSidebarChanged:(id)arg1 ;
-(void)pdfAnnotationUserNameChanged:(id)arg1 ;
-(void)pdfAnnotationUseUserNameChanged:(id)arg1 ;
-(void)initializeDefaults;
-(id)init;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)windowDidLoad;
@end

