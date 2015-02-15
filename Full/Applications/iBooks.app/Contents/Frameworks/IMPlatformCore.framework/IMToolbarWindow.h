/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <IMPlatformCore/IMWindow.h>
#import <IMPlatformCore/IMPlugIn.h>
#import <IMPlatformCore/IMUndoDelegateHost.h>
#import <IMPlatformCore/NSToolbarDelegate.h>

@protocol IMWindowUndoDelegate;
@class IMToolbarWindowFrame, IMPlugInInstanceDescriptor, NSString;

@interface IMToolbarWindow : IMWindow <IMPlugIn, IMUndoDelegateHost, NSToolbarDelegate> {

	IMToolbarWindowFrame* _windowFrame;
	IMPlugInInstanceDescriptor* _descriptor;
	NSString* _toolbarViewControllerClz;
	char _supportIMReaderWindowPlugInProxy;
	char _windowCanEnterFullScreen;
	int _state;
	id<IMWindowUndoDelegate> undoDelegate;

}

@property (__weak,readonly) IMToolbarWindowFrame * windowFrame;              //@synthesize windowFrame=_windowFrame - In the implementation block
@property (assign) char windowCanEnterFullScreen;                            //@synthesize windowCanEnterFullScreen=_windowCanEnterFullScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (__weak) id<IMWindowUndoDelegate> undoDelegate; 
+(char)isFullKeyboardAccessEnabled;
+(Class)frameViewClassForStyleMask:(unsigned long long)arg1 ;
-(id)tocTitle;
-(void)setTocTitle:(id)arg1 ;
-(id)initWithPlugInInstanceDescriptor:(id)arg1 ;
-(IMToolbarWindowFrame *)windowFrame;
-(void)responderChainWasInitialized;
-(CGSize)frameSizeForWindowFrameContentSize:(CGSize)arg1 ;
-(void)imToggleFullScreen:(id)arg1 ;
-(char)windowCanEnterFullScreen;
-(void)imPerformMiniaturize:(id)arg1 ;
-(void)imPerformZoom:(id)arg1 ;
-(id)createToolbarWindowFrameWithRect:(CGRect)arg1 ;
-(id)createToolbarViewController;
-(CGRect)frameRectForWindowFrameContentRect:(CGRect)arg1 ;
-(void)showToolbarPresentingWindow:(char)arg1 ;
-(void)setWindowImage:(id)arg1 ;
-(void)freezeWindowContent;
-(void)unfreezeWindowContentWithCompletion:(/*^block*/id)arg1 ;
-(void)unfreezeWindowContent;
-(void)setWindowCanEnterFullScreen:(char)arg1 ;
-(id<IMWindowUndoDelegate>)undoDelegate;
-(void)setUndoDelegate:(id<IMWindowUndoDelegate>)arg1 ;
-(void)addToolbar;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)sendEvent:(id)arg1 ;
-(char)canBecomeMainWindow;
-(void)becomeKeyWindow;
-(void)setContentView:(id)arg1 ;
-(void)toggleFullScreen:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)resignKeyWindow;
-(void)resignMainWindow;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(id)backgroundColor;
-(void)becomeMainWindow;
-(char)canBecomeKeyWindow;
-(CGRect)contentRectForFrameRect:(CGRect)arg1 ;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)recalculateKeyViewLoop;
-(void)addChildWindow:(id)arg1 ordered:(long long)arg2 ;
-(void)removeChildWindow:(id)arg1 ;
-(void)performZoom:(id)arg1 ;
-(void)performMiniaturize:(id)arg1 ;
-(char)_usesCustomDrawing;
-(void)windowWillEnterFullScreen:(id)arg1 ;
-(void)windowDidEnterFullScreen:(id)arg1 ;
-(void)windowWillExitFullScreen:(id)arg1 ;
-(void)windowDidExitFullScreen:(id)arg1 ;
-(CGRect)frameRectForContentRect:(CGRect)arg1 ;
-(id)snapshotImage;
@end
