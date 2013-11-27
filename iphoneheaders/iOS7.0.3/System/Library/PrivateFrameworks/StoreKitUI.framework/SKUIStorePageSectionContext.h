/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class UICollectionView, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUIMetricsController, SKUIStorePageViewController, SKUIResourceLoader, SKUILayoutCache;

@interface SKUIStorePageSectionContext : NSObject {

	UICollectionView* _collectionView;
	SKUIColorScheme* _colorScheme;
	SKUIItemOfferButtonAppearance* _itemOfferButtonAppearance;
	SKUIMetricsController* _metricsController;
	SKUIStorePageViewController* _parentViewController;
	SKUIResourceLoader* _resourceLoader;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) SKUIColorScheme * colorScheme;                                          //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance; 
@property (nonatomic,readonly) SKUIMetricsController * metricsController;                              //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,readonly) SKUIStorePageViewController * parentViewController;                     //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) SKUIResourceLoader * resourceLoader;                                    //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,readonly) SKUILayoutCache * textLayoutCache;                                      //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(id)resourceLoader;
-(id)parentViewController;
-(id)collectionView;
-(void)_setCollectionView:(id)arg1 ;
-(id)colorScheme;
-(void)_setMetricsController:(id)arg1 ;
-(id)textLayoutCache;
-(void)_setColorScheme:(id)arg1 ;
-(void)_setParentViewController:(id)arg1 ;
-(void)_setResourceLoader:(id)arg1 ;
-(void)_setTextLayoutCache:(id)arg1 ;
-(id)metricsController;
-(id)itemOfferButtonAppearance;
-(void).cxx_destruct;
@end
