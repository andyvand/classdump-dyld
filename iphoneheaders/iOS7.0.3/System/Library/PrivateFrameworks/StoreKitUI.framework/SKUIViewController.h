/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUINetworkErrorDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>
#import <StoreKitUI/SKUIWishlistDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class SKUIClientContext, SKUINetworkErrorViewController, NSOperationQueue, SKUIProductPageOverlayController, SKUIIPadSearchController, UIBarButtonItem, SKUIPopoverObserver, SKUIWishlistViewController;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, SKUIWishlistDelegate, UIPopoverControllerDelegate> {

	SKUIClientContext* _clientContext;
	SKUINetworkErrorViewController* _networkErrorViewController;
	NSOperationQueue* _operationQueue;
	SKUIProductPageOverlayController* _productPageOverlayController;
	SKUIIPadSearchController* _searchController;
	BOOL _wishlistButtonHidden;
	UIBarButtonItem* _wishlistButtonItem;
	SKUIPopoverObserver* _wishlistPopoverObserver;
	SKUIWishlistViewController* _wishlistViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIIPadSearchController * IPadSearchController; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _wishlistButtonItem;                        //@synthesize wishlistButtonItem=_wishlistButtonItem - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_setWishlistButtonHidden:(BOOL)arg1 ;
-(void)showDefaultNavigationItems;
-(id)clientContext;
-(id)IPadSearchController;
-(void)showError:(id)arg1 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(id)_wishlistButtonItem;
-(void)_wishlistAction:(id)arg1 ;
-(void)_showDialogWithError:(id)arg1 ;
-(void)_reloadForOrientation:(int)arg1 ;
-(void)_wishlistPopoverDidDismiss;
-(void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end
