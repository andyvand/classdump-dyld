/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <iBAReaderKit/THLinkTraversalDelegate.h>
#import <iBAReaderKit/THGlossaryEntryLayoutStyleProvider.h>
#import <iBAReaderKit/THGlossaryDefinitionsViewControllerDelegate.h>
#import <iBAReaderKit/THGlossaryNavigationDelegate.h>
#import <iBAReaderKit/THMacCurrentViewController.h>

@protocol THBookNavigation;
@class THMacGlossaryTermsViewController, THMacGlossaryDefinitionsViewController, THModelGlossaryEntry, THDocumentRoot, NSButton, NSString;

@interface THMacGlossaryViewController : NSViewController <THLinkTraversalDelegate, THGlossaryEntryLayoutStyleProvider, THGlossaryDefinitionsViewControllerDelegate, THGlossaryNavigationDelegate, THMacCurrentViewController> {

	THMacGlossaryTermsViewController* _glossaryTermsController;
	THMacGlossaryDefinitionsViewController* _glossaryDefinitionsController;
	THModelGlossaryEntry* _lastDisplayedEntry;
	THDocumentRoot* _documentRoot;
	id<THBookNavigation> _bookNavigator;
	NSButton* _resumeButton;

}

@property (assign,nonatomic) THMacGlossaryTermsViewController * glossaryTermsController;                          //@synthesize glossaryTermsController=_glossaryTermsController - In the implementation block
@property (assign,nonatomic) THMacGlossaryDefinitionsViewController * glossaryDefinitionsController;              //@synthesize glossaryDefinitionsController=_glossaryDefinitionsController - In the implementation block
@property (nonatomic,retain) THModelGlossaryEntry * lastDisplayedEntry;                                           //@synthesize lastDisplayedEntry=_lastDisplayedEntry - In the implementation block
@property (assign,nonatomic) THDocumentRoot * documentRoot;                                                       //@synthesize documentRoot=_documentRoot - In the implementation block
@property (assign,nonatomic) id<THBookNavigation> bookNavigator;                                                  //@synthesize bookNavigator=_bookNavigator - In the implementation block
@property (nonatomic,retain) NSButton * resumeButton;                                                             //@synthesize resumeButton=_resumeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)glossaryEntryLayoutFloatingStyle;
-(char)glossaryEntryLayoutIncludePortion:(int)arg1 ;
-(double)glossaryEntryLayoutDefaultHeightForPortion:(int)arg1 ;
-(double)glossaryEntryLayoutTopMarginForPortion:(int)arg1 ;
-(char)glossaryEntryLayoutHasFooter;
-(CGSize)glossaryEntryLayoutContentSize;
-(void)showEntryAtPath:(id)arg1 ;
-(void)showLastVisitedEntry;
-(void)didScrollToEntry:(id)arg1 ;
-(void)setGlossaryDefinitionsController:(THMacGlossaryDefinitionsViewController *)arg1 ;
-(char)shouldAnimateShowEntry;
-(double)glossaryEntryLayoutValueForDistance:(int)arg1 ;
-(void)setGlossaryTermsController:(THMacGlossaryTermsViewController *)arg1 ;
-(void)showEntryAtIndex:(long long)arg1 ;
-(THDocumentRoot *)documentRoot;
-(void)displayEntryByPath:(id)arg1 ;
-(CGSize)pageSize;
-(char)followAnchor:(id)arg1 pulse:(char)arg2 ;
-(void)showEntry:(id)arg1 ;
-(void)setBookNavigator:(id<THBookNavigation>)arg1 ;
-(id)firstResponderWhenShown;
-(char)keepMoviePlayingWhenBecomingCurrent;
-(id)initWithDocumentRoot:(id)arg1 bookNavigator:(id)arg2 ;
-(id)lastVisitedEntry;
-(id)tableOfContentsTitle;
-(void)showSearchField:(id)arg1 ;
-(void)setDocumentRoot:(THDocumentRoot *)arg1 ;
-(THMacGlossaryDefinitionsViewController *)glossaryDefinitionsController;
-(void)setLastDisplayedEntry:(THModelGlossaryEntry *)arg1 ;
-(THMacGlossaryTermsViewController *)glossaryTermsController;
-(THModelGlossaryEntry *)lastDisplayedEntry;
-(char)followGlossaryAnchor:(id)arg1 ;
-(void)setResumeButton:(NSButton *)arg1 ;
-(id)glossaryEntryLayoutStyleProvider;
-(void)loadEntry:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)glossaryEntryLayoutBackgroundColor;
-(CGRect)glossaryEntryLayoutViewFrame;
-(id<THBookNavigation>)bookNavigator;
-(char)followLink:(id)arg1 ;
-(CGSize)minPageSize;
-(void)displayEntry:(id)arg1 ;
-(NSButton *)resumeButton;
-(id)displayedEntry;
-(CGSize)minimumContentSize;
-(void)teardown;
-(void)dealloc;
-(void)awakeFromNib;
-(void)viewDidChangeBackingProperties;
@end
