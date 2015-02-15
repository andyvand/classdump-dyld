/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSViewController, NSMutableArray, NSArray, NSStoryboard, NSString, NSMapTable, NSDictionary;

@interface _NSViewControllerPrivateData : NSObject {

	NSViewController* _parentViewController;
	NSModalSession* _modalSessionForPresentedViewController;
	NSMutableArray* _childViewControllers;
	long long _appearanceTransitionCount;
	NSArray* _segueTemplates;
	NSStoryboard* _storyboard;
	NSString* _identifier;
	NSMapTable* _externalObjectsTableForViewLoading;
	NSArray* _topLevelObjectsToKeepAliveFromStoryboard;
	/*^block*/id _constrainServiceScreenFrameBlock;
	NSDictionary* _segueDestinationOptions;
	struct {
		unsigned preventInsertAndRemoveChildViewControllersFromSendingKVO : 1;
		unsigned _sentViewWillAppear : 1;
		unsigned _sentViewWillDisappear : 1;
		unsigned _sentViewDidLoad : 1;
		unsigned _scheduledBridgedServiceLayoutPropertyChange : 1;
		unsigned _reserved : 27;
	}  _flags;

}

@property (assign) NSViewController * parentViewController;                             //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign) NSModalSession* modalSessionForPresentedViewController;              //@synthesize modalSessionForPresentedViewController=_modalSessionForPresentedViewController - In the implementation block
@property (assign) long long appearanceTransitionCount;                                 //@synthesize appearanceTransitionCount=_appearanceTransitionCount - In the implementation block
@property (retain) NSMutableArray * childViewControllers;                               //@synthesize childViewControllers=_childViewControllers - In the implementation block
@property (retain) NSArray * segueTemplates;                                            //@synthesize segueTemplates=_segueTemplates - In the implementation block
@property (retain) NSStoryboard * storyboard;                                           //@synthesize storyboard=_storyboard - In the implementation block
@property (retain) NSDictionary * segueDestinationOptions;                              //@synthesize segueDestinationOptions=_segueDestinationOptions - In the implementation block
@property (retain) NSMapTable * externalObjectsTableForViewLoading;                     //@synthesize externalObjectsTableForViewLoading=_externalObjectsTableForViewLoading - In the implementation block
@property (retain) NSArray * topLevelObjectsToKeepAliveFromStoryboard;                  //@synthesize topLevelObjectsToKeepAliveFromStoryboard=_topLevelObjectsToKeepAliveFromStoryboard - In the implementation block
@property (copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy) id constrainServiceScreenFrameBlock;                                   //@synthesize constrainServiceScreenFrameBlock=_constrainServiceScreenFrameBlock - In the implementation block
-(void)dealloc;
-(NSViewController *)parentViewController;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSStoryboard *)storyboard;
-(void)setStoryboard:(NSStoryboard *)arg1 ;
-(NSMutableArray *)childViewControllers;
-(void)setChildViewControllers:(NSMutableArray *)arg1 ;
-(void)setSegueTemplates:(NSArray *)arg1 ;
-(void)setExternalObjectsTableForViewLoading:(NSMapTable *)arg1 ;
-(void)setTopLevelObjectsToKeepAliveFromStoryboard:(NSArray *)arg1 ;
-(void)setSegueDestinationOptions:(NSDictionary *)arg1 ;
-(void)setParentViewController:(NSViewController *)arg1 ;
-(NSModalSession*)modalSessionForPresentedViewController;
-(void)setModalSessionForPresentedViewController:(NSModalSession*)arg1 ;
-(long long)appearanceTransitionCount;
-(void)setAppearanceTransitionCount:(long long)arg1 ;
-(NSArray *)segueTemplates;
-(NSMapTable *)externalObjectsTableForViewLoading;
-(NSArray *)topLevelObjectsToKeepAliveFromStoryboard;
-(NSDictionary *)segueDestinationOptions;
-(id)constrainServiceScreenFrameBlock;
-(void)setConstrainServiceScreenFrameBlock:(id)arg1 ;
@end
