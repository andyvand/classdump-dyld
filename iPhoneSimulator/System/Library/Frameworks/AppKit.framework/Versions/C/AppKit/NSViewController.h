/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <AppKit/NSExtensionRequestHandling.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSSeguePerforming.h>
#import <AppKit/NSUserInterfaceItemIdentification.h>

@class NSString, NSBundle, NSView, NSArray, NSPointerArray, MediaUIPlaybackController, NSExtensionContext;

@interface NSViewController : NSResponder <NSExtensionRequestHandling, NSCoding, NSSeguePerforming, NSUserInterfaceItemIdentification> {

	NSString* _nibName;
	NSBundle* _nibBundle;
	id _representedObject;
	NSString* _title;
	NSView* view;
	NSArray* _topLevelObjects;
	NSPointerArray* _editors;
	id _autounbinder;
	NSString* _designNibBundleIdentifier;
	id __privateData;
	unsigned _viewIsAppearing : 1;
	unsigned _delayViewDidAppear : 1;
	unsigned _isContentViewController : 1;
	unsigned _reserved : 29;

}

@property (retain) MediaUIPlaybackController * playbackController; 
@property (assign) CGSize _preferredContentSize; 
@property (retain,readonly) NSExtensionContext * extensionContext; 
@property (retain) NSView * sourceItemView; 
@property (assign) CGPoint preferredScreenOrigin; 
@property (readonly) CGSize preferredMinimumSize; 
@property (readonly) CGSize preferredMaximumSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * nibName; 
@property (readonly) NSBundle * nibBundle; 
@property (retain) id representedObject;                                                                                                              //@synthesize representedObject=_representedObject - In the implementation block
@property (copy) NSString * title;                                                                                                                    //@synthesize title=_title - In the implementation block
@property (retain) NSView * view; 
@property (getter=isViewLoaded,readonly) char viewLoaded; 
@property (assign) CGSize preferredContentSize; 
@property (setter=_setParentViewController:) NSViewController * parentViewController; 
@property (setter=_setPresentingViewController:) NSViewController * presentingViewController; 
@property (setter=_setPresentationAnimator:,getter=_presentationAnimator) id<NSViewControllerPresentationAnimator> presentationAnimator; 
@property (copy) NSString * identifier; 
-(MediaUIPlaybackController *)playbackController;
-(void)setPlaybackController:(MediaUIPlaybackController *)arg1 ;
-(CGSize)_preferredContentSize;
-(void)set_preferredContentSize:(CGSize)arg1 ;
-(void)_animatePreferredContentSize:(/*^block*/id)arg1 animationStart:(/*^block*/id)arg2 animationComplete:(/*^block*/id)arg3 ;
-(void)_invalidatePreferredContentSize;
-(void)presentViewControllerInWidget:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_extensionContext;
-(NSViewController *)parentViewController;
-(void)_setExtensionContext:(id)arg1 ;
-(CGPoint)preferredScreenOrigin;
-(void)_scheduleBridgedServiceLayoutPropertyChange;
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(NSExtensionContext *)extensionContext;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NSView *)sourceItemView;
-(void)setSourceItemView:(NSView *)arg1 ;
-(void)setPreferredScreenOrigin:(CGPoint)arg1 ;
-(CGSize)preferredMinimumSize;
-(CGSize)preferredMaximumSize;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSView *)view;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)commitEditing;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)_view;
-(void)discardEditing;
-(id)_autounbinder;
-(char)commitEditingAndReturnError:(id*)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setView:(NSView *)arg1 ;
-(void)loadView;
-(void)setNextResponder:(id)arg1 ;
-(id)storyboard;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(char)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(void)setStoryboard:(id)arg1 ;
-(id)childViewControllers;
-(void)_setParentViewController:(id)arg1 ;
-(void)setChildViewControllers:(id)arg1 ;
-(/*^block*/id)constrainServiceScreenFrameBlock;
-(void)setConstrainServiceScreenFrameBlock:(/*^block*/id)arg1 ;
-(id)_segueTemplates;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_insertInResponderChain;
-(void)_sendViewDidLoad;
-(char)_viewControllerSupports10_10Features;
-(void)viewDidLoad;
-(NSString *)nibName;
-(id)_nibBundleIdentifier;
-(void)_serviceBridgedServiceLayoutPropertyChanges:(id)arg1 ;
-(void)_removeFromResponderChain;
-(void)_loadViewIfRequired;
-(CGRect)_defaultInitialViewFrame;
-(NSBundle *)nibBundle;
-(id)_nibWithName:(id)arg1 bundle:(id)arg2 ;
-(void)_setTopLevelObjects:(id)arg1 ;
-(void)_makeDefaultView;
-(id)_topEditor;
-(void)_editor:(id)arg1 didCommit:(char)arg2 withOriginalDelegateInvocation:(id)arg3 ;
-(NSViewController *)presentingViewController;
-(id)presentedViewControllers;
-(id)presentedWindowControllers;
-(id)_presentationAnimator;
-(char)definesPresentationContext;
-(id)_viewControllerForPresentingViewController:(id)arg1 ;
-(void)_addPresentedViewController:(id)arg1 ;
-(void)_setPresentingViewController:(id)arg1 ;
-(void)_setPresentationAnimator:(id)arg1 ;
-(void)_removePresentedViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 animator:(id)arg2 ;
-(char)canPerformUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3 ;
-(void)removeChildViewControllerAtIndex:(long long)arg1 ;
-(void)insertChildViewController:(id)arg1 atIndex:(long long)arg2 ;
-(void)moveChildViewControllerAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)removeFromParentViewController;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)showInParentViewController;
-(void)showChildViewController:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)preferredContentSizeDidChangeForViewController:(id)arg1 ;
-(void)childViewControllerDidChangePreferredContentSize:(id)arg1 ;
-(void)presentedViewControllerDidChangePreferredContentSize:(id)arg1 ;
-(void)beginAppearanceTransition:(char)arg1 ;
-(void)endAppearanceTransition;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)_sendViewWillAppear;
-(void)_sendViewWillDisappear;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)_sendViewDidAppear;
-(void)_sendViewDidDisappear;
-(void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(void)_finishedMakingConnections;
-(char)_isContentViewController;
-(void)_setIsContentViewController:(char)arg1 ;
-(char)isViewLoaded;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)_addPresentedWindowController:(id)arg1 ;
-(void)_removePresentedWindowController:(id)arg1 ;
-(void)dismissController:(id)arg1 ;
-(void)presentViewControllerAsSheet:(id)arg1 ;
-(void)presentViewControllerAsModalWindow:(id)arg1 ;
-(void)presentViewController:(id)arg1 asPopoverRelativeToRect:(CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4 behavior:(long long)arg5 ;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3 ;
-(id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3 ;
-(void)_setSegueTemplates:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)updateViewConstraints;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 ;
-(void)viewWillLayout;
-(void)viewDidLayout;
-(void)_setNibBundleIdentifier:(id)arg1 ;
-(void)_setNibName:(id)arg1 ;
-(id)_findValidNibNameInBundle:(id)arg1 ;
-(id)_representedObject;
-(void)_viewWillUnhide;
-(void)_viewDidUnhide;
-(void)_viewWillHide;
-(void)_viewDidHide;
-(void)_viewWillMoveToWindow:(id)arg1 unhiding:(char)arg2 ;
-(void)_viewDidMoveToWindow:(id)arg1 fromWindow:(id)arg2 unhiding:(char)arg3 ;
-(void)_windowWillOrderOnScreen;
-(void)_windowDidOrderOnScreen;
-(void)_windowWillOrderOffScreen;
-(void)_windowDidOrderOffScreen;
-(void)_windowWillClose:(id)arg1 ;
-(void)dismissWindowController:(id)arg1 ;
-(void)presentWindowControllerAsSheet:(id)arg1 ;
-(void)presentWindowControllerAsModalWindow:(id)arg1 ;
-(void)_didRestoreUserActivity:(id)arg1 ;
-(id)_applicationExtensionSession;
-(id)applicationExtensionSession;
-(void)_setApplicationExtensionSession:(id)arg1 ;
-(id)_persistentUIWindow;
-(id)_persistentUIIdentifier;
@end

