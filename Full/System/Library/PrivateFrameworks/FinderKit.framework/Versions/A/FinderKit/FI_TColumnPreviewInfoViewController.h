/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TInfoWindowViewController.h>

@class FI_TPropertyNameController, FI_TPropertyColumnPreviewKindAndSizeController, FI_TPropertyColumnPreviewCreationDateController, FI_TPropertyColumnPreviewModificationDateController, FI_TPropertyColumnPreviewLastOpenedDateController, FI_TSpacerView, FI_TPropertyShortVersionController, FI_TColumnPreviewSpotlightMetaDataController, FI_TColumnPreviewPropertyTaggingTokenFieldController;

@interface FI_TColumnPreviewInfoViewController : FI_TInfoWindowViewController {

	FI_TPropertyNameController* _nameController;
	FI_TPropertyColumnPreviewKindAndSizeController* _kindAndSizeController;
	FI_TPropertyColumnPreviewCreationDateController* _createDateController;
	FI_TPropertyColumnPreviewModificationDateController* _modDateController;
	FI_TPropertyColumnPreviewLastOpenedDateController* _lastOpenedDateController;
	FI_TSpacerView* _versionSpacerView;
	FI_TPropertyShortVersionController* _versionController;
	FI_TSpacerView* _spotlightMetaDataSpacerView;
	FI_TColumnPreviewSpotlightMetaDataController* _spotightMetaDataController;
	FI_TSpacerView* _taggingSpacerView;
	FI_TColumnPreviewPropertyTaggingTokenFieldController* _taggingController;
	TNSRef<NSArray *> _titleFlds;
	double _leftMargin;
	double _titleAndTextGap;
	double _rightMargin;
	double _viewWidthCache;
	TNotificationCenterObserver* _viewFrameChangedObserver;

}
-(void)viewLoaded;
-(void)bulkNodesChanged:(const map<const TFENode, const std::__1::vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > > *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const std::__1::vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > > *const> > >Ref)arg1 ;
-(void)nodeMDAttributeChanged:(const TFENode*)arg1 attributes:(id)arg2 isDisplayAttributes:(BOOL)arg3 ;
-(void)setNodes:(const TFENodeVector*)arg1 ;
-(void)aboutToTearDown;
-(void)configureMinRowCount:(double)arg1 maxRowCount:(double)arg2 resizable:(BOOL)arg3 ;
-(BOOL)expandedDefaultValue;
-(void)loadValueControllers;
-(void)setSubviewsHidden:(BOOL)arg1 ;
-(unsigned)notificationOptionsForNodes:(const TFENodeVector*)arg1 ;
-(void)adjustTextFieldWidths;
-(void)viewFrameChanged;
-(BOOL)expanded;
-(void)refresh;
@end

