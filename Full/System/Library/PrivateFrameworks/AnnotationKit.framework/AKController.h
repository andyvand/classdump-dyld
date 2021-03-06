/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AKControllerDelegateProtocol;
#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKModelController, NSView, NSMutableArray, NSMapTable, AKActionController, AKToolController, AKToolbarViewController, AKAttributeController, AKUndoController, AKMainEventHandler, AKTextEditorController, AKIntelligentSketchController, AKSignatureModelController, AKCursorController_Mac, AKFontUIController_Mac, AKFormFeatureDetectorController, NSWindow, AKPageController;

@interface AKController : NSObject {

	char overlayShouldPixelate;
	char _isTestingInstance;
	id<AKControllerDelegateProtocol> _delegate;
	AKModelController* _modelController;
	NSView* _toolbarView;
	unsigned long long _currentPageIndex;
	NSMutableArray* _pageControllers;
	NSMapTable* _pageModelControllersToPageControllers;
	AKActionController* _actionController;
	AKToolController* _toolController;
	AKToolbarViewController* _toolbarViewController;
	AKAttributeController* _attributeController;
	AKUndoController* _undoController;
	AKMainEventHandler* _mainEventHandler;
	AKTextEditorController* _textEditorController;
	AKIntelligentSketchController* _intelligentSketchController;
	AKSignatureModelController* _signatureModelController;
	AKCursorController_Mac* _cursorController;
	AKFontUIController_Mac* _fontUIController;
	AKFormFeatureDetectorController* _formDetectionController;
	NSWindow* _cachedWindow;
	unsigned long long _pasteCascadingMultiplier;
	long long _lastPasteboardChangeCount;
	unsigned long long _creationCascadingMultiplier;
	AKPageController* _lastCreationCascadingPageController;

}

@property (__weak) id<AKControllerDelegateProtocol> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (retain) AKModelController * modelController;                                      //@synthesize modelController=_modelController - In the implementation block
@property (retain) NSView * toolbarView;                                                     //@synthesize toolbarView=_toolbarView - In the implementation block
@property (assign,nonatomic) char overlayShouldPixelate; 
@property (assign) unsigned long long currentPageIndex;                                      //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign) char isTestingInstance;                                                   //@synthesize isTestingInstance=_isTestingInstance - In the implementation block
@property (retain) NSMutableArray * pageControllers;                                         //@synthesize pageControllers=_pageControllers - In the implementation block
@property (retain) NSMapTable * pageModelControllersToPageControllers;                       //@synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers - In the implementation block
@property (retain) AKActionController * actionController;                                    //@synthesize actionController=_actionController - In the implementation block
@property (retain) AKToolController * toolController;                                        //@synthesize toolController=_toolController - In the implementation block
@property (retain) AKToolbarViewController * toolbarViewController;                          //@synthesize toolbarViewController=_toolbarViewController - In the implementation block
@property (retain) AKAttributeController * attributeController;                              //@synthesize attributeController=_attributeController - In the implementation block
@property (retain) AKUndoController * undoController;                                        //@synthesize undoController=_undoController - In the implementation block
@property (retain) AKMainEventHandler * mainEventHandler;                                    //@synthesize mainEventHandler=_mainEventHandler - In the implementation block
@property (retain) AKTextEditorController * textEditorController;                            //@synthesize textEditorController=_textEditorController - In the implementation block
@property (retain) AKIntelligentSketchController * intelligentSketchController;              //@synthesize intelligentSketchController=_intelligentSketchController - In the implementation block
@property (retain) AKSignatureModelController * signatureModelController;                    //@synthesize signatureModelController=_signatureModelController - In the implementation block
@property (retain) AKCursorController_Mac * cursorController;                                //@synthesize cursorController=_cursorController - In the implementation block
@property (retain) AKFontUIController_Mac * fontUIController;                                //@synthesize fontUIController=_fontUIController - In the implementation block
@property (retain) AKFormFeatureDetectorController * formDetectionController;                //@synthesize formDetectionController=_formDetectionController - In the implementation block
@property (__weak) NSWindow * cachedWindow;                                                  //@synthesize cachedWindow=_cachedWindow - In the implementation block
@property (assign) unsigned long long pasteCascadingMultiplier;                              //@synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier - In the implementation block
@property (assign) long long lastPasteboardChangeCount;                                      //@synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount - In the implementation block
@property (assign) unsigned long long creationCascadingMultiplier;                           //@synthesize creationCascadingMultiplier=_creationCascadingMultiplier - In the implementation block
@property (__weak) AKPageController * lastCreationCascadingPageController;                   //@synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController - In the implementation block
+(id)akBundle;
+(id)akBundleIdentifier;
+(id)controllerWithDelegate:(id)arg1 ;
-(id)currentPageController;
-(AKActionController *)actionController;
-(char)validateSender:(id)arg1 ;
-(AKCursorController_Mac *)cursorController;
-(void)performActionForSender:(id)arg1 ;
-(AKAttributeController *)attributeController;
-(AKSignatureModelController *)signatureModelController;
-(id)pageControllerForPageModelController:(id)arg1 ;
-(AKModelController *)modelController;
-(AKPageController *)lastCreationCascadingPageController;
-(void)setLastCreationCascadingPageController:(AKPageController *)arg1 ;
-(void)setCreationCascadingMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)pasteCascadingMultiplier;
-(unsigned long long)creationCascadingMultiplier;
-(void)setPasteCascadingMultiplier:(unsigned long long)arg1 ;
-(AKToolbarViewController *)toolbarViewController;
-(AKTextEditorController *)textEditorController;
-(AKIntelligentSketchController *)intelligentSketchController;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(AKToolController *)toolController;
-(NSMutableArray *)pageControllers;
-(void)setIsTestingInstance:(char)arg1 ;
-(void)setPageControllers:(NSMutableArray *)arg1 ;
-(void)setPageModelControllersToPageControllers:(NSMapTable *)arg1 ;
-(void)setModelController:(AKModelController *)arg1 ;
-(void)setUndoController:(AKUndoController *)arg1 ;
-(void)setIntelligentSketchController:(AKIntelligentSketchController *)arg1 ;
-(void)setToolController:(AKToolController *)arg1 ;
-(void)setAttributeController:(AKAttributeController *)arg1 ;
-(void)setActionController:(AKActionController *)arg1 ;
-(void)setToolbarViewController:(AKToolbarViewController *)arg1 ;
-(void)setToolbarView:(NSView *)arg1 ;
-(void)setMainEventHandler:(AKMainEventHandler *)arg1 ;
-(void)setTextEditorController:(AKTextEditorController *)arg1 ;
-(void)setSignatureModelController:(AKSignatureModelController *)arg1 ;
-(void)setCursorController:(AKCursorController_Mac *)arg1 ;
-(void)setFontUIController:(AKFontUIController_Mac *)arg1 ;
-(void)setFormDetectionController:(AKFormFeatureDetectorController *)arg1 ;
-(char)isTestingInstance;
-(void)resetToDefaultToolMode;
-(AKMainEventHandler *)mainEventHandler;
-(AKUndoController *)undoController;
-(NSMapTable *)pageModelControllersToPageControllers;
-(char)overlayShouldPixelate;
-(char)validateUndo:(id)arg1 ;
-(char)validateRedo:(id)arg1 ;
-(char)validateCut:(id)arg1 ;
-(char)validateCopy:(id)arg1 ;
-(char)validatePaste:(id)arg1 ;
-(char)validateDelete:(id)arg1 ;
-(id)signaturesMenu;
-(char)_validateCutCopyDelete;
-(void)setLastPasteboardChangeCount:(long long)arg1 ;
-(long long)lastPasteboardChangeCount;
-(NSWindow *)cachedWindow;
-(id)initForTesting;
-(id)overlayViewAtIndex:(unsigned long long)arg1 ;
-(char)isOverlayViewLoadedAtIndex:(unsigned long long)arg1 ;
-(void)prepareOverlayAtIndex:(unsigned long long)arg1 ;
-(void)relinquishOverlayAtIndex:(unsigned long long)arg1 ;
-(void)updateOverlayViewAtIndex:(unsigned long long)arg1 ;
-(void)renderAnnotation:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setOverlayShouldPixelate:(char)arg1 ;
-(void)reloadVisibleToolbarItemIdentifiers;
-(long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1 ;
-(double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1 ;
-(CGRect)contentAlignedRectForRect:(CGRect)arg1 onPageAtIndex:(unsigned long long)arg2 ;
-(id)toolbarButtonItemOfType:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(id)pageControllerForAnnotation:(id)arg1 ;
-(AKFontUIController_Mac *)fontUIController;
-(AKFormFeatureDetectorController *)formDetectionController;
-(id)hostingWindow;
-(char)validateDuplicate:(id)arg1 ;
-(char)validateSelectAll:(id)arg1 ;
-(void)setCachedWindow:(NSWindow *)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)teardown;
-(void)setDelegate:(id<AKControllerDelegateProtocol>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSView *)toolbarView;
-(void)commitEditing;
-(id<AKControllerDelegateProtocol>)delegate;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(char)handleEvent:(id)arg1 ;
-(void)duplicate:(id)arg1 ;
@end

