/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUCreateStationViewControllerDelegateRUEditStationsViewControllerDelegate;
@class _UIBackdropView, RUParallelScrollView, RUCreateStationViewController, UIAlertView, MPImageCache, NSIndexPath, NSArray, RUProxyTableView, ;

@interface RUEditStationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	_UIBackdropView* _backdropView;
	RUParallelScrollView* _containerScrollView;
	RUCreateStationViewController* _createStationViewController;
	UIAlertView* _deletionAlertView;
	unsigned _ignoreReloadDataCount;
	MPImageCache* _imageCache;
	NSIndexPath* _indexPathToDelete;
	BOOL _isEditing;
	BOOL _needsReloadAfterEndIgnoring;
	NSArray* _stations;
	RUProxyTableView* _tableView;
	<RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_doneAction:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1 ;
-(void)_endIgnoringReloadData;
-(void)_commitDeletingStationWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_beginIgnoringReloadData;
-(void)_updateBarButtonItemsAnimated:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)_editAction:(id)arg1 ;
@end
